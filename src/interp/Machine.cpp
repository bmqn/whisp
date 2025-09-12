#include "Machine.hpp"

#include "Writer.hpp"
#include "ast/TreeBuilder.hpp"

namespace fmcs {
namespace interp {

template<typename... Args>
void Warn(std::format_string<Args...> fmt, const ast::Node& node, Args&&... args)
{
	std::cerr
		<< std::format("Warning: in '{}': ",
			node.Snippet);

	std::cerr
		<< std::format(fmt,
			std::forward<Args>(args)...);

	std::cerr << std::endl;
}

template<typename... Args>
void Error(std::format_string<Args...> fmt, const ast::Node& node, Args&&... args)
{
	std::cerr
		<< std::format("Error: in '{}': ",
			node.Snippet);

	std::cerr
		<< std::format(fmt,
			std::forward<Args>(args)...);

	std::cerr << std::endl;

	std::exit(1);
}

template<typename... Args>
void ErrorNoNode(std::format_string<Args...> fmt, Args&&... args)
{
	std::cerr
		<< "Error: "
		<< std::format(fmt,
			std::forward<Args>(args)...);

	std::cerr << std::endl;

	std::exit(1);
}

static Loc_t s_OutLoc = reinterpret_cast<Loc_t>(&std::cout);

static std::vector<char> s_StrStore;

StrHandle CreateString(const std::string &string)
{
	uint32_t offset = static_cast<uint32_t>(s_StrStore.size());
	uint32_t length = string.length();

	s_StrStore.resize(offset + length);
	std::memcpy(&s_StrStore[offset], string.data(), length);

	StrHandle strHandle;
	strHandle.offset = offset;
	strHandle.length = length;

	return strHandle;
}

std::optional<std::string_view> GetString(uint32_t offset, uint32_t length)
{
	if (offset + length <= s_StrStore.size())
	{
		return std::string_view(&s_StrStore[offset], length);
	}

	return std::nullopt;
}

std::optional<std::string_view> GetString(const StrHandle &strHandle)
{
	return GetString(strHandle.offset, strHandle.length);
}

static std::optional<Closee> PerformCast(const StrHandle &strHandle, ast::Type dest)
{
	switch (dest)
	{
		case ast::Type::U64:
			return Closee(*reinterpret_cast<const uint64_t*>(&strHandle));
		case ast::Type::S64:
			return Closee(*reinterpret_cast<const int64_t*>(&strHandle));
	}

	return std::nullopt;
}

static std::optional<Closee> PerformCast(std::integral auto val, ast::Type dest)
{
	switch (dest)
	{
		case ast::Type::U32:
			return Closee(static_cast<uint32_t>(val));
		case ast::Type::S32:
			return Closee(static_cast<int32_t>(val));
		case ast::Type::U64:
			return Closee(static_cast<uint64_t>(val));
		case ast::Type::S64:
			return Closee(static_cast<int64_t>(val));
		case ast::Type::Str:
			uint32_t offset = static_cast<uint64_t>(val) & 0xffff;
			uint32_t length = (static_cast<uint64_t>(val) >> 32) & 0xffff;

			if (!GetString(offset, length))
			{
				ErrorNoNode("Cast to 'str' results in an invalid string");
			}

			return Closee(StrHandle{offset, length});
	}

	return std::nullopt;
}

static std::optional<Closee> PerformCast(const Closee &closee, ast::Type dest)
{
	switch (closee.kind)
	{
		case Closee::Kind::U32:
			return PerformCast(closee.As<uint32_t>(), dest);
		case Closee::Kind::S32:
			return PerformCast(closee.As<int32_t>(), dest);
		case Closee::Kind::U64:
			return PerformCast(closee.As<uint64_t>(), dest);
		case Closee::Kind::S64:
			return PerformCast(closee.As<int64_t>(), dest);
		case Closee::Kind::Str:
			return PerformCast(closee.As<StrHandle>(), dest);
	}

	return std::nullopt;
}

class ArgResolver : public ast::Visitor
{
public:
	ArgResolver(Stack_t *stack, const Env_t *env, const LocalEnv_t *localEnv)
		: m_Stack(stack)
		, m_Env(env)
		, m_LocalEnv(localEnv)
	{
	}

	void SetCast(ast::Type type)
	{
		m_Cast = type;
	}

	bool DidResolve() const
	{
		return m_DidResolve;
	}

private:
	void TryResolve(const std::string &name, const ast::Node &node)
	{
		const Env_t &currentEnv = *m_Env;
		const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

		Closee closee;
		LocalEnv_t localEnv;

		if (auto it = currentEnv.find(name); it != currentEnv.end())
		{
			const Closure &closure = it->second;
			closee = closure.closee;
			localEnv = closure.localEnv;

			// Add additional bindings from the current local env
			for (const auto &[existingBinder, existingClosee] : currentLocalEnv)
			{
				// localEnv[existingBinder] = existingClosee;
				localEnv.emplace(existingBinder, existingClosee);
			}
		}
		else if (auto it = currentLocalEnv.find(name); it != currentLocalEnv.end())
		{
			closee = it->second;
			localEnv = currentLocalEnv;
		}

		if (closee.Is<ast::TermPtr_t>())
		{
			ast::TermPtr_t term = closee.As<ast::TermPtr_t>();

			m_Stack->emplace_back(term, localEnv);

			m_DidResolve = true;
		}
		else if (closee.Is<Loc_t>())
		{
			Loc_t loc = closee.As<Loc_t>();

			m_Stack->emplace_back(Closee::FromLoc(loc), localEnv);

			m_DidResolve = true;
		}
		else if (closee.Is<uint32_t>())
		{
			uint32_t val = closee.As<uint32_t>();

			if (m_Cast)
			{
				if (auto closeeCasted = PerformCast(val, *m_Cast))
				{
					m_Stack->emplace_back(*closeeCasted, localEnv);
				}
				else
				{
					Error("Bad cast", node);
				}
			}
			else
			{
				m_Stack->emplace_back(val, localEnv);
			}

			m_DidResolve = true;
		}
		else if (closee.Is<int32_t>())
		{
			int32_t val = closee.As<int32_t>();

			if (m_Cast)
			{
				if (auto closeeCasted = PerformCast(val, *m_Cast))
				{
					m_Stack->emplace_back(*closeeCasted, localEnv);
				}
				else
				{
					Error("Bad cast", node);
				}
			}
			else
			{
				m_Stack->emplace_back(val, localEnv);
			}

			m_DidResolve = true;
		}
		else if (closee.Is<uint64_t>())
		{
			uint64_t val = closee.As<uint64_t>();

			if (m_Cast)
			{
				if (auto closeeCasted = PerformCast(val, *m_Cast))
				{
					m_Stack->emplace_back(*closeeCasted, localEnv);
				}
				else
				{
					Error("Bad cast", node);
				}
			}
			else
			{
				m_Stack->emplace_back(val, localEnv);
			}

			m_DidResolve = true;
		}
		else if (closee.Is<int64_t>())
		{
			int64_t val = closee.As<int64_t>();

			if (m_Cast)
			{
				if (auto closeeCasted = PerformCast(val, *m_Cast))
				{
					m_Stack->emplace_back(*closeeCasted, localEnv);
				}
				else
				{
					Error("Bad cast", node);
				}
			}
			else
			{
				m_Stack->emplace_back(val, localEnv);
			}

			m_DidResolve = true;
		}
		else if (closee.Is<StrHandle>())
		{
			StrHandle strHandle = closee.As<StrHandle>();

			if (m_Cast)
			{
				if (auto closeeCasted = PerformCast(strHandle, *m_Cast))
				{
					m_Stack->emplace_back(*closeeCasted, localEnv);
				}
				else
				{
					Error("Bad cast", node);
				}
			}
			else
			{
				m_Stack->emplace_back(strHandle, localEnv);
			}

			m_DidResolve = true;
		}
	}

	virtual void Visit(const ast::VarNode& node) override
	{
		TryResolve(node.Name, node);
	}

	virtual void Visit(const ast::SeqVarNode& node) override
	{
		// Don't substitute if the argument has a next term
		// TODO: use a resolver for this
		if (node.Next && !dynamic_cast<ast::SeqNilNode*>(node.Next.get()))
		{
			return;
		}

		TryResolve(node.Name, node);
	}

private:
	Stack_t *m_Stack;
	const Env_t *m_Env;
	const LocalEnv_t *m_LocalEnv;

	// Cast for destination
	std::optional<ast::Type> m_Cast = std::nullopt;

	bool m_DidResolve = false;
};

class LitResolver : public ast::Visitor
{
public:
	LitResolver(Stack_t *stack, const LocalEnv_t *localEnv)
		: m_Stack(stack)
		, m_LocalEnv(localEnv)
	{
	}

	void SetCast(ast::Type type)
	{
		m_Cast = type;
	}

	bool DidResolve() const
	{
		return m_DidResolve;
	}

private:
	virtual void Visit(const ast::Int32LitNode& node) override
	{
		if (m_Cast)
		{
			if (auto closeeCasted = PerformCast(node.Val, *m_Cast))
			{
				m_Stack->emplace_back(*closeeCasted, *m_LocalEnv);
			}
			else
			{
				Error("Bad cast", node);
			}
		}
		else
		{
			m_Stack->emplace_back(node.Val, *m_LocalEnv);
		}

		m_DidResolve = true;
	}

	virtual void Visit(const ast::StrLitNode& node) override
	{
		if (m_Cast)
		{
			if (auto closeeCasted = PerformCast(CreateString(node.Val), *m_Cast))
			{
				m_Stack->emplace_back(*closeeCasted, *m_LocalEnv);
			}
			else
			{
				Error("Bad cast", node);
			}
		}
		else
		{
			m_Stack->emplace_back(CreateString(node.Val), *m_LocalEnv);
		}

		m_DidResolve = true;
	}

private:
	Stack_t *m_Stack;
	const LocalEnv_t *m_LocalEnv;

	std::optional<ast::Type> m_Cast = std::nullopt;

	bool m_DidResolve = false;
};

class LocResolver : public ast::Visitor
{
public:
	LocResolver(const Env_t *env, const LocalEnv_t *localEnv)
		: m_Env(env)
		, m_LocalEnv(localEnv)
	{
	}

	std::optional<Loc_t> GetLoc() const
	{
		return m_Loc;
	}

private:
	void TryResolve(const std::string &name, const ast::Node &node)
	{
		const Env_t &currentEnv = *m_Env;
		const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

		Closee closee;
		LocalEnv_t localEnv;
		
		if (auto it = currentEnv.find(name); it != currentEnv.end())
		{
			const Closure &closure = it->second;
			closee = closure.closee;
			localEnv = closure.localEnv;

			// Add additional bindings from the current local env
			for (const auto &[existingBinder, existingClosee] : currentLocalEnv)
			{
				// localEnv[existingBinder] = existingClosee;
				localEnv.emplace(existingBinder, existingClosee);
			}
		}
		else if (auto it = currentLocalEnv.find(name); it != currentLocalEnv.end())
		{
			closee = it->second;
			localEnv = currentLocalEnv;
		}

		if (closee.kind == Closee::Loc)
		{
			m_Loc = closee.As<Loc_t>();
		}
	}

	virtual void Visit(const ast::VarNode& node) override
	{
		TryResolve(node.Name, node);
	}

private:
	const Env_t *m_Env;
	const LocalEnv_t *m_LocalEnv;

	std::optional<Loc_t> m_Loc = std::nullopt;
};

Evaluator::Evaluator(ast::NodePtr_t node, Mem_t *mem, Env_t *env, LocalEnv_t *localEnv)
	: m_Node(node)
	, m_Mem(mem)
	, m_Env(env)
	, m_LocalEnv(localEnv)
{
}

void Evaluator::Visit(const ast::SeqTermNode& node)
{
	if (auto term = node.Next.get())
	{
		const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

		// Use the next term
		Closee closee = term;
		// Use the current local env
		LocalEnv_t localEnv = currentLocalEnv;

		// Push the next term as a new frame
		m_Frames.emplace_back(closee, localEnv);
	}
}

void Evaluator::Visit(const ast::SeqVarNode& node)
{
	const Env_t &currentEnv = *m_Env;
	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Closee closee;
	LocalEnv_t localEnv;

	// Look in the current env for bindings
	if (auto it = currentEnv.find(node.Name); it != currentEnv.end())
	{
		const Closure &closure = it->second;
		// Use the bound closee
		closee = closure.closee;
		// Use the bound local env
		localEnv = closure.localEnv;
	}
	// Look in the current local env for bindings
	else if (auto it = currentLocalEnv.find(node.Name); it != currentLocalEnv.end())
	{
		// Use the bound closee
		closee = it->second;
		// Use the current local env
		localEnv = currentLocalEnv;
	}
	else
	{
		Error("Unbound variable", node);
	}

	// Push the bound term and env as a new frame
	m_Frames.emplace_back(closee, localEnv);

	// Push an eval term as a new frame if strict
	if (node.Strict)
	{
		static auto s_Term = ast::TreeBuilder::Parse("<x>.x");

		ast::TermPtr_t term = s_Term.get();

		m_Frames.emplace_back(term, LocalEnv_t{});
	}
}

void Evaluator::Visit(const ast::SeqAppNode& node)
{
	const Env_t &currentEnv = *m_Env;
	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		LocResolver locResolver(&currentEnv, &currentLocalEnv);

		node.Loc->Accept(locResolver);

		if (auto loc = locResolver.GetLoc())
		{
			if (auto it = m_Mem->find(*loc); it != m_Mem->end())
			{
				stack = &it->second;
			}
		}

		if (!stack)
		{
			std::string locStr = "null";

			if (auto loc = locResolver.GetLoc())
			{
				locStr = std::format("#{}", *loc);
			}

			Error("Undefined location {} ({})", node, node.Loc->Name, locStr);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	ArgResolver argResolver(stack, &currentEnv, &currentLocalEnv);

	if (node.Cast)
	{
		argResolver.SetCast(node.Cast->Dest);
	}

	node.Arg->Accept(argResolver);

	if (!argResolver.DidResolve())
	{
		// Use the arg term
		Closee closee = node.Arg.get();
		// Use the current local env
		LocalEnv_t localEnv = currentLocalEnv;

		stack->emplace_back(closee, localEnv);
	}
}

void Evaluator::Visit(const ast::SeqAppLitNode& node)
{
	const Env_t &currentEnv = *m_Env;
	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		LocResolver locResolver(&currentEnv, &currentLocalEnv);

		node.Loc->Accept(locResolver);

		if (auto loc = locResolver.GetLoc())
		{
			if (auto it = m_Mem->find(*loc); it != m_Mem->end())
			{
				stack = &it->second;
			}
		}

		if (!stack)
		{
			std::string locStr = "null";

			if (auto loc = locResolver.GetLoc())
			{
				locStr = std::format("#{}", *loc);
			}

			Error("Undefined location {} ({})", node, node.Loc->Name, locStr);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	LitResolver litResolver(stack, &currentLocalEnv);

	if (node.Cast)
	{
		litResolver.SetCast(node.Cast->Dest);
	}

	node.Lit->Accept(litResolver);

	if (!litResolver.DidResolve())
	{
		Error("Could not resolve literal for push", node);
	}
}

void Evaluator::Visit(const ast::SeqAbsNode& node)
{
	Env_t &currentEnv = *m_Env;
	LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		LocResolver locResolver(&currentEnv, &currentLocalEnv);

		node.Loc->Accept(locResolver);

		if (auto loc = locResolver.GetLoc())
		{
			if (auto it = m_Mem->find(*loc); it != m_Mem->end())
			{
				stack = &it->second;
			}
		}

		if (!stack)
		{
			std::string locStr = "null";

			if (auto loc = locResolver.GetLoc())
			{
				locStr = std::format("#{}", *loc);
			}

			Error("Undefined location {} ({})", node, node.Loc->Name, locStr);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	if (stack->empty())
	{
		Error("Stack underflow", node);
	}

	Closure closure = stack->back();
	stack->pop_back();

	Closee closee = closure.closee;
	LocalEnv_t localEnv = closure.localEnv;

	if (node.Cast)
	{
		if (auto closeeCasted = PerformCast(closee, node.Cast->Dest))
		{
			closee = *closeeCasted;
		}
		else
		{
			Error("Bad cast", node);
		}
	}

	Env_t &env = *m_Env;

	// Add binding for binder in the env
	env[node.Binder->Name] = Closure(closee, localEnv);

	// Add binding for binder in the local env
	currentLocalEnv[node.Binder->Name] = closee;
}

void Evaluator::Visit(const ast::SeqLocAppNode& node)
{
	Env_t &currentEnv = *m_Env;
	LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		LocResolver locResolver(&currentEnv, &currentLocalEnv);

		node.Loc->Accept(locResolver);

		if (auto loc = locResolver.GetLoc())
		{
			if (auto it = m_Mem->find(*loc); it != m_Mem->end())
			{
				stack = &it->second;
			}
		}

		if (!stack)
		{
			std::string locStr = "null";

			if (auto loc = locResolver.GetLoc())
			{
				locStr = std::format("#{}", *loc);
			}

			Error("Undefined location {} ({})", node, node.Loc->Name, locStr);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	ArgResolver argResolver(stack, &currentEnv, &currentLocalEnv);

	node.Arg->Accept(argResolver);

	if (!argResolver.DidResolve())
	{
		Error("Could not resolve location for push", node);
	}
}

void Evaluator::Visit(const ast::SeqLocAbsNode& node)
{
	Env_t &currentEnv = *m_Env;
	LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		LocResolver locResolver(&currentEnv, &currentLocalEnv);

		node.Loc->Accept(locResolver);

		if (auto loc = locResolver.GetLoc())
		{
			if (auto it = m_Mem->find(*loc); it != m_Mem->end())
			{
				stack = &it->second;
			}
		}

		if (!stack)
		{
			std::string locStr = "null";

			if (auto loc = locResolver.GetLoc())
			{
				locStr = std::format("#{}", *loc);
			}

			Error("Undefined location {} ({})", node, node.Loc->Name, locStr);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	if (stack->empty())
	{
		Error("Stack underflow", node);
	}

	Closure closure = stack->back();
	stack->pop_back();

	Closee closee = closure.closee;
	LocalEnv_t localEnv = closure.localEnv;

	if (!closee.Is<Loc_t>())
	{
		Warn("Binding non-location in location pop", node);
	}

	// Add binding for binder in the env
	currentEnv[node.Binder->Name] = Closure(closee, localEnv);

	// Add binding for binder in the local env
	currentLocalEnv[node.Binder->Name] = closee;
}

void Evaluator::Visit(const ast::SeqCondsNode& node)
{
	const Env_t &currentEnv = *m_Env;
	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		LocResolver locResolver(&currentEnv, &currentLocalEnv);

		node.Loc->Accept(locResolver);

		if (auto loc = locResolver.GetLoc())
		{
			if (auto it = m_Mem->find(*loc); it != m_Mem->end())
			{
				stack = &it->second;
			}
		}

		if (!stack)
		{
			std::string locStr = "null";

			if (auto loc = locResolver.GetLoc())
			{
				locStr = std::format("#{}", *loc);
			}

			Error("Undefined location {} ({})", node, node.Loc->Name, locStr);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	Closure closure = stack->back();
	stack->pop_back();

	int32_t val;

	if (closure.closee.Is<int32_t>())
	{
		val = closure.closee.As<int32_t>();
	}
	else
	{
		Error("Non literal matching in conditions", node);
	}

	ast::SeqTermNode* term = nullptr;

	if (node.Conds)
	{
		auto currentConds = node.Conds.get();

		for (; currentConds; currentConds = currentConds->Next.get())
		{
			// Type checking...

			auto litInt32Matcher = static_cast<ast::Int32LitNode*>(currentConds->Matcher.get());

			if (val == litInt32Matcher->Val)
			{
				term = currentConds->Arg.get();
				break;
			}
		}
	}

	if (!term)
	{
		term = node.Cond.get();
	}

	// Use the condition term
	Closee closee = term;
	// Use the current local env
	LocalEnv_t localEnv = currentLocalEnv;

	m_Frames.emplace_back(closee, localEnv);
}

void Evaluator::Visit(const ast::SeqOpNode& node)
{
	Stack_t* stack;

	stack = &(*m_Mem)[0];

	if (stack->size() < 2)
	{
		Error("Stack underflow", node);
	}

	Closure closure1 = stack->back();
	stack->pop_back();

	Closure closure2 = stack->back();
	stack->pop_back();

	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	Closee closee;

	bool val1Found = false;
	bool val2Found = false;

#define DO_FOR_TYPE(_type) \
if (!val1Found && !val2Found) \
{ \
_type val1; \
if (closure1.closee.Is<_type>()) \
{ \
	val1 = closure1.closee.As<_type>(); \
	val1Found = true; \
} \
_type val2; \
if (closure2.closee.Is<_type>()) \
{ \
	val2 = closure2.closee.As<_type>(); \
	val2Found = true; \
} \
switch (node.Op) \
{ \
	case ast::Operation::Plus: \
		closee = val1 + val2; \
		break; \
	case ast::Operation::Less: \
		closee = val1 < val2; \
		break; \
	case ast::Operation::BitOr: \
		closee = val1 | val2; \
		break; \
	case ast::Operation::BitShiftLeft: \
		closee = val1 << val2; \
		break; \
	case ast::Operation::BitShiftRight: \
		closee = val1 >> val2; \
		break; \
} \
}

	DO_FOR_TYPE(Loc_t)
	DO_FOR_TYPE(uint32_t)
	DO_FOR_TYPE(int32_t)
	DO_FOR_TYPE(uint64_t)
	DO_FOR_TYPE(int64_t)

#undef DO_FOR_TYPE

	if (!(val1Found && val2Found))
	{
		Error("Invalid binary operation", node);
	}

	// Use the current local env
	LocalEnv_t localEnv = currentLocalEnv;

	stack->emplace_back(closee, localEnv);
}

void Machine::Execute(const ast::TermPtr_t term, Env_t env)
{
	m_Mem.clear();

	env.emplace("out", Closure(Closee::FromLoc(s_OutLoc)));

	m_Control.emplace_back(term, env);

	while (!m_Control.empty())
	{
		// Get the next environment and term
		auto [currentClosure, currentEnv] = m_Control.back();
		m_Control.pop_back();

		auto &currentClosee = currentClosure.closee;
		auto &currentLocalEnv = currentClosure.localEnv;

		// TODO: Max
		// We need the env to be shared for all terms but index it using the variable!
		// The env shouldn't be stored entirely for a closure, instead it should map
		// variables to indices in the global map?

		if (currentClosee.Is<ast::TermPtr_t>())
		{
			ast::TermPtr_t term = currentClosee.As<ast::TermPtr_t>();

			Evaluator eval(term, &m_Mem, &currentEnv, &currentLocalEnv);

			term->Accept(eval);

			while (!m_Mem[s_OutLoc].empty())
			{
				auto &outStack = m_Mem[s_OutLoc]; 

				const Closure &outClosure = outStack.front();
				const Closee &outClosee = outClosure.closee;

				if (outClosee.Is<Loc_t>())
				{
					Loc_t val = outClosee.As<Loc_t>();
					std::cout << "#" << val << std::endl;
				}
				else if (outClosee.Is<uint32_t>())
				{
					uint32_t val = outClosee.As<uint32_t>();
					std::cout << val << std::endl;
				}
				else if (outClosee.Is<int32_t>())
				{
					int32_t val = outClosee.As<int32_t>();
					std::cout << val << std::endl;
				}
				else if (outClosee.Is<StrHandle>())
				{
					StrHandle strHandle = outClosee.As<StrHandle>();
				
					if (auto string = GetString(strHandle))
					{
						std::cout << *string << std::endl;
					}
					else
					{
						ErrorNoNode("'str' sent to out had no value");
					}
				}

				outStack.erase(outStack.begin());
			}

			while (eval.HasFrame())
			{
				m_Control.emplace_back(eval.NextFrame(), currentEnv);
			}
		}
		else
		{
			if (currentClosee.Is<Loc_t>())
			{
				Loc_t loc = currentClosee.As<Loc_t>();
			
				ErrorNoNode("'loc' encountered in control: {}", loc);
			}
			else if (currentClosee.Is<uint32_t>())
			{
				uint32_t val = currentClosee.As<uint32_t>();
			
				ErrorNoNode("'u32' encountered in control: {}", val);
			}
			else if (currentClosee.Is<int32_t>())
			{
				int32_t val = currentClosee.As<int32_t>();
			
				ErrorNoNode("'s32' encountered in control: {}", val);
			}
			if (currentClosee.Is<uint64_t>())
			{
				uint64_t val = currentClosee.As<uint64_t>();
			
				ErrorNoNode("'u64' encountered in control: {}", val);
			}
			else if (currentClosee.Is<int64_t>())
			{
				int64_t val = currentClosee.As<int64_t>();
			
				ErrorNoNode("'s64' encountered in control: {}", val);
			}
			else if (currentClosee.Is<StrHandle>())
			{
				StrHandle strHandle = currentClosee.As<StrHandle>();
			
				if (auto string = GetString(strHandle))
				{
					ErrorNoNode("'str' encountered in control: {}", *string);
				}
				else
				{
					ErrorNoNode("'str' encountered in control: (undeterminable)!");
				}
			}
			else
			{
				ErrorNoNode("Non-term encountered in control");
			}
		}
	}
}

} // namespace interp
} // namespace fmcs
