#include "Machine.hpp"

#include "Writer.hpp"
#include "ast/TreeBuilder.hpp"

namespace fmcs {
namespace interp {

template<typename... Args>
void Warn(std::string_view message, const ast::Node& node, Args... args)
{
	std::cerr
		<< std::format("Warning: in '{}': {}",
			node.Snippet,
			message);

	auto PrintAdditional = [](const ast::Node& node) {
		std::cerr
			<< std::format(", at '{}'",
				node.Snippet);
	};

	(
		PrintAdditional(args)
	, ...);

	std::cerr << std::endl;
}

template<typename... Args>
void Error(std::string_view message, const ast::Node& node, Args... args)
{
	std::cerr
		<< std::format("Error: in '{}': {}",
			node.Snippet,
			message);

	auto PrintAdditional = [](const ast::Node& node) {
		std::cerr
			<< std::format(", at '{}'",
				node.Snippet);
		};

	(
		PrintAdditional(args)
	, ...);

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

Evaluator::Evaluator(Env_t *env, Mem_t *mem, ast::NodePtr_t node, LocalEnv_t *localEnv)
	: m_Env(env)
	, m_Mem(mem)
	, m_Node(node)
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

	void SetDestCast(ast::Type type)
	{
		m_DestCast = type;
	}

	bool DidResolve() const
	{
		return m_DidResolve;
	}

private:
	virtual void Visit(const ast::SeqVarNode& node) override
	{
		// Don't substitute if the argument has a next term
		if (node.Next)
		{
			return;
		}

		const Env_t &currentEnv = *m_Env;
		const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

		Closee closee;
		LocalEnv_t localEnv;

		if (auto it = currentEnv.find(node.Name); it != currentEnv.end())
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
		else if (auto it = currentLocalEnv.find(node.Name); it != currentLocalEnv.end())
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
		else if (closee.Is<uint32_t>())
		{
			uint32_t val = closee.As<uint32_t>();

			if (m_DestCast)
			{
				if (auto closeeCasted = PerformCast(val, *m_DestCast))
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

			if (m_DestCast)
			{
				if (auto closeeCasted = PerformCast(val, *m_DestCast))
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

			if (m_DestCast)
			{
				if (auto closeeCasted = PerformCast(val, *m_DestCast))
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

			if (m_DestCast)
			{
				if (auto closeeCasted = PerformCast(val, *m_DestCast))
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

			if (m_DestCast)
			{
				if (auto closeeCasted = PerformCast(strHandle, *m_DestCast))
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

private:
	Stack_t *m_Stack;
	const Env_t *m_Env;
	const LocalEnv_t *m_LocalEnv;

	// Cast for destination
	std::optional<ast::Type> m_DestCast = std::nullopt;

	bool m_DidResolve = false;
};

void Evaluator::Visit(const ast::SeqAppNode& node)
{
	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		if (node.Loc->Name == "out")
		{
			Stack_t outStack;

			const Env_t &currentEnv = *m_Env;

			Writer writer(&std::cout, &currentEnv);
			node.Arg->Accept(writer);
			std::cout << std::endl;

			return;
		}
		else
		{
			Error("Unbound location", node, *node.Loc);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	const Env_t &currentEnv = *m_Env;
	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	ArgResolver argResolver(stack, &currentEnv, &currentLocalEnv);

	if (node.Cast)
	{
		argResolver.SetDestCast(node.Cast->Dest);
	}

	node.Arg->Accept(argResolver);

	// TODO: move me into ArgResolver
	if (!argResolver.DidResolve())
	{
		// Use the arg term
		Closee closee = node.Arg.get();
		// Use the current local env
		LocalEnv_t localEnv = currentLocalEnv;

		stack->emplace_back(closee, localEnv);
	}
}

class LitResolver : public ast::Visitor
{
public:
	LitResolver(Stack_t *stack, const LocalEnv_t *localEnv)
		: m_Stack(stack)
		, m_LocalEnv(localEnv)
	{
	}

	void SetDestCast(ast::Type type)
	{
		m_DestCast = type;
	}

	bool DidResolve() const
	{
		return m_DidResolve;
	}

private:
	virtual void Visit(const ast::Int32LitNode& node) override
	{
		if (m_DestCast)
		{
			if (auto closeeCasted = PerformCast(node.Val, *m_DestCast))
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
		if (m_DestCast)
		{
			if (auto closeeCasted = PerformCast(CreateString(node.Val), *m_DestCast))
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

	std::optional<ast::Type> m_DestCast = std::nullopt;

	bool m_DidResolve = false;
};

void Evaluator::Visit(const ast::SeqAppLitNode& node)
{
	Stack_t* stack = nullptr;

	if (node.Loc)
	{
		if (node.Loc->Name == "out")
		{
			const Env_t &currentEnv = *m_Env;
	
			Writer writer(&std::cout, &currentEnv);
			node.Lit->Accept(writer);
			std::cout << std::endl;

			return;
		}
		else
		{
			Error("Unbound location", node, *node.Loc);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];
	}

	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

	LitResolver litResolver(stack, &currentLocalEnv);

	if (node.Cast)
	{
		litResolver.SetDestCast(node.Cast->Dest);
	}

	node.Lit->Accept(litResolver);

	if (!litResolver.DidResolve())
	{
		Error("Could not resolve literal for push", node);
	}
}

void Evaluator::Visit(const ast::SeqAbsNode& node)
{
	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		if (node.Loc->Name == "in")
		{
			stack = &(*m_Mem)[2];

			std::string inStr;
			std::getline(std::cin, inStr);

			int32_t val = std::strtol(inStr.c_str(), nullptr, 10);

			if (val != 0)
			{
				stack->emplace_back(val);
			}
			else
			{
				static std::vector<ast::Owner_t<ast::SeqTermNode>> s_Terms;
				s_Terms.emplace_back(ast::TreeBuilder::Parse(inStr));

				ast::TermPtr_t term = s_Terms.back().get();

				stack->emplace_back(term);
			}
		}
		else
		{
			Error("Unbound location", node, *node.Loc);
		}

		if (stack->empty())
		{
			Error("Stack underflow", node, *node.Loc);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];

		if (stack->empty())
		{
			Error("Stack underflow", node);
		}
	}

	LocalEnv_t &currentLocalEnv = *m_LocalEnv;

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

void Evaluator::Visit(const ast::SeqCondsNode& node)
{
	Stack_t *stack = nullptr;

	if (node.Loc)
	{
		if (node.Loc->Name == "in")
		{
			stack = &(*m_Mem)[2];

			std::string inStr;
			std::getline(std::cin, inStr);

			int32_t val = std::strtol(inStr.c_str(), nullptr, 10);

			if (val != 0)
			{
				stack->emplace_back(val);
			}
			else
			{
				static std::vector<ast::Owner_t<ast::SeqTermNode>> s_Terms;
				s_Terms.emplace_back(ast::TreeBuilder::Parse(inStr));

				ast::TermPtr_t term = s_Terms.back().get();

				stack->emplace_back(term);
			}
		}
		else
		{
			Error("Unbound location", node, *node.Loc);
		}

		if (stack->empty())
		{
			Error("Stack underflow", node, *node.Loc);
		}
	}
	else
	{
		stack = &(*m_Mem)[0];

		if (stack->empty())
		{
			Error("Stack underflow", node);
		}
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
		Error("Non literal matching in conditions", node, *node.Loc);
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

	const LocalEnv_t &currentLocalEnv = *m_LocalEnv;

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

	m_Control.emplace_back(term, env);

	while (!m_Control.empty())
	{
		// Get the next environment and term
		auto [closure, env] = m_Control.back();
		m_Control.pop_back();

		auto &closee = closure.closee;
		auto &localEnv = closure.localEnv;

		// TODO: Max
		// We need the env to be shared for all terms but index it using the variable!
		// The env shouldn't be stored entirely for a closure, instead it should map
		// variables to indices in the global map?

		if (closee.Is<ast::TermPtr_t>())
		{
			ast::TermPtr_t term = closee.As<ast::TermPtr_t>();

			Evaluator eval(&env, &m_Mem, term, &localEnv);

			term->Accept(eval);

			while (eval.HasFrame())
			{
				m_Control.emplace_back(eval.NextFrame(), env);
			}
		}
		else
		{
			if (closee.Is<uint32_t>())
			{
				uint32_t val = closee.As<uint32_t>();
			
				ErrorNoNode("'u32' encountered in control: {}", val);
			}
			else if (closee.Is<int32_t>())
			{
				int32_t val = closee.As<int32_t>();
			
				ErrorNoNode("'s32 encountered in control: {}", val);
			}
			if (closee.Is<uint64_t>())
			{
				uint64_t val = closee.As<uint64_t>();
			
				ErrorNoNode("'u64' encountered in control: {}", val);
			}
			else if (closee.Is<int64_t>())
			{
				int64_t val = closee.As<int64_t>();
			
				ErrorNoNode("'s64 encountered in control: {}", val);
			}
			else if (closee.Is<StrHandle>())
			{
				StrHandle strHandle = closee.As<StrHandle>();
			
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
