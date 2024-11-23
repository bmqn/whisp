#pragma once

#include "ast/Tree.hpp"
#include "ast/Visitor.hpp"

namespace fmcs {
namespace interp {

using Var_t = std::string;
using Loc_t = uintptr_t;

using Closee_t = std::variant<ast::TermPtr_t, ast::LitPtr_t>;
using Env_t = std::unordered_map<std::string, Closee_t>;

struct Closure
{
	Closure(Closee_t closee) : Env(), Closee(closee) {}
	Closure(Closee_t closee, Env_t env) : Closee(closee), Env(env) {}

	Closee_t Closee;
	Env_t Env;
};

using Stack_t = std::vector<Closure>;
using Mem_t = std::unordered_map<Loc_t, Stack_t>;

using Callstack_t = std::vector<std::pair<std::string, ast::TermPtr_t>>;

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
	Evaluator(ast::NodePtr_t node, Env_t *env, Mem_t *mem);

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
	virtual void Visit(const ast::Int32LitNode& node) override;
	virtual void Visit(const ast::StrLitNode& node) override;

	virtual void Visit(const ast::VarNode& node) override;

	virtual void Visit(const ast::CondNode& node) override;

	virtual void Visit(const ast::SeqTermNode& node) override;
	virtual void Visit(const ast::SeqNilNode& node) override;
	virtual void Visit(const ast::SeqVarNode& node) override;
	virtual void Visit(const ast::SeqAppNode& node) override;
	virtual void Visit(const ast::SeqAppLitNode& node) override;
	virtual void Visit(const ast::SeqAbsNode& node) override;
	virtual void Visit(const ast::SeqCondsNode& node) override;

private:
	ast::NodePtr_t m_Node;
	Env_t *m_Env;
	Mem_t *m_Mem;

	std::vector<Closure> m_Frames;
};

class Writer : public ast::Visitor
{
public:
	Writer(std::ostream* ss, const ast::NodePtr_t node, const Env_t* env);

private:
	virtual void Visit(const ast::Int32LitNode& node) override;
	virtual void Visit(const ast::StrLitNode& node) override;

	virtual void Visit(const ast::VarNode& node) override;

	virtual void Visit(const ast::CondNode& node) override;

	virtual void Visit(const ast::SeqNilNode& node) override;
	virtual void Visit(const ast::SeqVarNode& node) override;
	virtual void Visit(const ast::SeqAppNode& node) override;
	virtual void Visit(const ast::SeqAppLitNode& node) override;
	virtual void Visit(const ast::SeqAbsNode& node) override;
	virtual void Visit(const ast::SeqCondsNode& node) override;

private:
	const ast::NodePtr_t m_Node;
	const Env_t* m_Env;
	
	std::ostream* m_Ss;
};

class Machine
{
public:
	Env_t Execute(const ast::TermPtr_t term, Env_t env = Env_t());

private:
	Mem_t m_Mem;
	Stack_t m_Stck;
};

} // namespace interp
} // namespace fmcs
