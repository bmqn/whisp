#pragma once

#include "ast/Tree.hpp"
#include "ast/Visitor.hpp"

namespace fmcs {
namespace interp {

using Var_t = std::string;
using Loc_t = uintptr_t;

struct Closee
{
	enum Kind
	{
		Unknown,
		TermPtr,	// This is an instruction
		Data32,		// This is data
	};

	static constexpr size_t GetSize(Kind kind)
	{
		switch (kind)
		{
			case TermPtr:
				return sizeof(ast::TermPtr_t);
			case Data32:
				return 4;
		}

		return 0;
	}

	Closee() = default;

	Closee(ast::TermPtr_t term)
		: kind(TermPtr)
	{
		std::memcpy(data, &term, sizeof(ast::TermPtr_t));
	}

	Closee(int32_t val)
		: kind(Data32)
	{
		std::memcpy(data, &val, sizeof(int32_t));
	}

	template<typename T>
	bool Is() const
	{
		static_assert(sizeof(T) <= sizeof(data));

		switch (kind)
		{
			case TermPtr:
				return std::is_same_v<T, ast::TermPtr_t>;
		}

		return sizeof(T) == GetSize(kind);
	}

	template<typename T>
	T As() const
	{
		static_assert(sizeof(T) <= sizeof(data));

		T res;
		std::memcpy(&res, data, sizeof(T));

		return res;
	}

	Kind kind = Unknown;
	uint8_t data[8] = {0};
};

// This env maps local terms within a closure!
using LocalEnv_t = std::map<std::string, Closee>;

struct Closure
{
	Closure() = default;

	Closure(Closee closee)
		: closee(closee)
		, localEnv()
	{
	}

	Closure(Closee closee, LocalEnv_t env)
		: closee(closee)
		, localEnv(env)
	{
	}

	Closee closee = Closee();
	LocalEnv_t localEnv = {};
};

using Stack_t = std::vector<Closure>;
using Mem_t = std::map<Loc_t, Stack_t>;

// This env maps variables to closures (functions)
// It MUST refer to the stuff bound when that variable was first bound!
using Env_t = std::map<std::string, Closure>;
using Control_t = std::vector<std::pair<Closure, Env_t>>;

class Resolver : public ast::Visitor
{
public:
	Resolver(Closure *closure);

private:
	virtual void Visit(const ast::SeqVarNode& node) override;

private:
	Closure *m_Closure;
};

class Evaluator : public ast::Visitor
{
public:
	Evaluator(Env_t *env, Mem_t *mem, ast::NodePtr_t node, LocalEnv_t *localEnv);

	inline bool HasFrame()
	{
		return !m_Frames.empty();
	}

	inline Closure NextFrame()
	{
		Closure frameClosure = m_Frames.back();
		m_Frames.pop_back();
		return frameClosure;
	}

private:
	virtual void Visit(const ast::SeqTermNode& node) override;
	virtual void Visit(const ast::SeqVarNode& node) override;
	virtual void Visit(const ast::SeqAppNode& node) override;
	virtual void Visit(const ast::SeqAppLitNode& node) override;
	virtual void Visit(const ast::SeqAbsNode& node) override;
	virtual void Visit(const ast::SeqCondsNode& node) override;
	virtual void Visit(const ast::SeqOpNode& node) override;

private:
	Env_t *m_Env;
	Mem_t *m_Mem;

	ast::NodePtr_t m_Node;
	LocalEnv_t *m_LocalEnv;

	Stack_t *m_Control;

	std::vector<Closure> m_Frames;
};

class Machine
{
public:
	void Execute(const ast::TermPtr_t term, Env_t env = Env_t());

private:
	Mem_t m_Mem;
	Control_t m_Control;
};

} // namespace interp
} // namespace fmcs
