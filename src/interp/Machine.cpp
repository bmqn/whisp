#include "Machine.hpp"

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

	exit(1);
}

Resolver::Resolver(Closure* closure)
	: m_Closure(closure)
{
	std::visit([&](auto&& arg) {
		arg->Accept(*this);
	}, closure->Closee);
}

void Resolver::Visit(const ast::SeqVarNode& node)
{
	Env_t& env = m_Closure->Env;

	if (auto it = env.find(node.Name); it != env.end())
	{
		m_Closure->Closee = it->second;
	}
}

Evaluator::Evaluator(ast::NodePtr_t node, Env_t *env, Mem_t *mem)
	: m_Node(node)
	, m_Env(env)
	, m_Mem(mem)
{
	m_Node->Accept(*this);
}

void Evaluator::Visit(const ast::Int32LitNode& node)
{
	Error("Cannot evaluate int32 literal", node);
}

void Evaluator::Visit(const ast::StrLitNode& node)
{
	Error("Cannot evaluate string literal", node);
}

void Evaluator::Visit(const ast::VarNode& node)
{
}

void Evaluator::Visit(const ast::SeqTermNode& node)
{
	Env_t& env = *m_Env;

	if (auto term = node.Next.get())
	{
		m_Frames.emplace_back(term, env);
	}
}

void Evaluator::Visit(const ast::SeqNilNode& node)
{
}

void Evaluator::Visit(const ast::SeqVarNode& node)
{
	Env_t& env = *m_Env;

	if (auto it = env.find(node.Name); it != env.end())
	{
		// TODO
		//
		// I'm not sure if using the same env here is corect?
		// It can cause infinite recursion if you write a term like
		//   [["Hello"] . x] . <x> . x
		// I think the correct solution is to find the env for the env's term.
		// This would mean we need to track the env for every term.
		// We could have a sparse map from term to env, then lookup envs that way.

		m_Frames.emplace_back(it->second, env);
	}
	else
	{
		Warn("Unbound variable", node);
	}
}

void Evaluator::Visit(const ast::SeqAppNode& node)
{
	Stack_t* stack;

	if (node.Loc)
	{
		if (node.Loc->Name == "out")
		{
			Writer writer(&std::cout, node.Arg.get(), m_Env);

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

	stack->emplace_back(node.Arg.get() , *m_Env);
}

void Evaluator::Visit(const ast::SeqAppLitNode& node)
{
	Stack_t* stack;

	if (node.Loc)
	{
		if (node.Loc->Name == "out")
		{
			Writer writer(&std::cout, node.Lit.get(), m_Env);

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

	stack->emplace_back(node.Lit.get() , *m_Env);
}

void Evaluator::Visit(const ast::SeqAbsNode& node)
{
	Stack_t* stack;
	Env_t& env = *m_Env;

	if (node.Loc)
	{
		if (node.Loc->Name == "in")
		{
			stack = &(*m_Mem)[2];

			std::string inStr;
			std::getline(std::cin, inStr);

			static std::vector<ast::Owner_t<ast::SeqTermNode>> s_Terms;
			s_Terms.emplace_back(ast::TreeBuilder::Parse(inStr));

			ast::TermPtr_t term = s_Terms.back().get();

			stack->emplace_back(term);
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

	Resolver resolve(&closure);

	env[node.Binder->Name] = closure.Closee;
}

Writer::Writer(std::ostream* ss, const ast::NodePtr_t node, const Env_t* env)
	: m_Ss(ss)
	, m_Node(node)
	, m_Env(env)
{
	m_Node->Accept(*this);

	*m_Ss << std::endl;
}

void Writer::Visit(const ast::Int32LitNode& node)
{
	*m_Ss << node.Val;
}

void Writer::Visit(const ast::StrLitNode& node)
{
	*m_Ss << node.Val;
}

void Writer::Visit(const ast::VarNode& node)
{
	*m_Ss << node.Name;
}

void Writer::Visit(const ast::SeqNilNode& node)
{
	*m_Ss << "*";
}

void Writer::Visit(const ast::SeqVarNode& node)
{
	const Env_t& env = *m_Env;

	if (auto it = env.find(node.Name); it != env.end())
	{
		Env_t subEnv;

		std::visit([this, &subEnv](auto&& arg) {
			Writer subWriter(m_Ss, arg, &subEnv);
		}, it->second);
	}
	else
	{
		*m_Ss << node.Name;
	}

	if (node.Next)
	{
		*m_Ss << " . ";

		node.Next->Accept(*this);
	}
}

void Writer::Visit(const ast::SeqAppNode& node)
{
	*m_Ss << "[";

	node.Arg->Accept(*this);

	*m_Ss << "]";

	if (node.Loc)
	{
		node.Loc->Accept(*this);
	}

	if (node.Next)
	{
		*m_Ss << " . ";

		node.Next->Accept(*this);
	}
}

void Writer::Visit(const ast::SeqAppLitNode& node)
{
	*m_Ss << "[\"";

	node.Lit->Accept(*this);

	*m_Ss << "\"]";

	if (node.Loc)
	{
		node.Loc->Accept(*this);
	}

	if (node.Next)
	{
		*m_Ss << " . ";

		node.Next->Accept(*this);
	}
}

void Writer::Visit(const ast::SeqAbsNode& node)
{
	if (node.Loc)
	{
		node.Loc->Accept(*this);
	}

	*m_Ss << "<";

	node.Binder->Accept(*this);

	*m_Ss << ">";

	if (node.Next)
	{
		*m_Ss << " . ";

		node.Next->Accept(*this);
	}
}

Env_t Machine::Execute(const ast::TermPtr_t term, Env_t env)
{
	Env_t finishingEnv;

	m_Stck.push_back(Closure(term, env));

	while (!m_Stck.empty())
	{
		// Get the next environment and term
		Closure closure = m_Stck.back();
		m_Stck.pop_back();

		Env_t env = closure.Env;
		auto closee = closure.Closee;

		std::visit([&](auto&& arg) {
			for (Evaluator eval(arg, &env, &m_Mem); eval.HasFrame(); )
			{
				if (auto frameClosure = eval.NextFrame();
					std::visit<bool>([](auto&& arg) {
						return bool(arg);
					}, frameClosure.Closee))
				{
					m_Stck.emplace_back(frameClosure);
				}
			}
		}, closee);

		finishingEnv = env;
	}

	return finishingEnv;
}

} // namespace interp
} // namespace fmcs
