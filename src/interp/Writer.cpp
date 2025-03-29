#include "Writer.hpp"

namespace fmcs {
namespace interp {

Writer::Writer(std::ostream* ss, const Env_t *env)
	: m_Ss(ss)
	, m_Env(env)
{
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

void Writer::Visit(const ast::CondNode& node)
{
	node.Matcher->Accept(*this);
	*m_Ss << " -> ";
	node.Arg->Accept(*this);

	if (node.Next)
	{
		*m_Ss << ", ";
		node.Next->Accept(*this);
	}
}

void Writer::Visit(const ast::SeqNilNode& node)
{
	*m_Ss << "*";
}

void Writer::Visit(const ast::SeqVarNode& node)
{
	const Env_t &currentEnv = *m_Env;

	if (auto it = currentEnv.find(node.Name); it != currentEnv.end())
	{
		const Closure &closure = it->second;
		// Use the bound closee
		const Closee &closee = closure.closee;
		// Use the bound local env
		const LocalEnv_t &localEnv = closure.localEnv;

		if (closee.Is<ast::TermPtr_t>())
		{
			ast::TermPtr_t term = closee.As<ast::TermPtr_t>();
			// term->Accept(*this);
			Env_t subEnv;
			for (const auto &[existingBinder, existingClosee] : localEnv)
			{
				subEnv[existingBinder] = Closure(existingClosee, LocalEnv_t{});
			}
			Writer subWriter(m_Ss, &subEnv);
			term->Accept(subWriter);
		}
		else if (closee.Is<uint32_t>())
		{
			uint32_t val = closee.As<uint32_t>();
			*m_Ss << val;
		}
		else if (closee.Is<int32_t>())
		{
			int32_t val = closee.As<int32_t>();
			*m_Ss << val;
		}
		else if (closee.Is<uint64_t>())
		{
			uint64_t val = closee.As<uint64_t>();
			*m_Ss << val;
		}
		else if (closee.Is<int64_t>())
		{
			int64_t val = closee.As<int64_t>();
			*m_Ss << val;
		}
		else if (closee.Is<StrHandle>())
		{
			if (auto string = GetString(closee.As<StrHandle>()))
			{
				*m_Ss << *string;
			}
		}
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
	*m_Ss << "[";

	node.Lit->Accept(*this);

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

void Writer::Visit(const ast::SeqCondsNode& node)
{
	if (node.Loc)
	{
		node.Loc->Accept(*this);
	}

	*m_Ss << "{";

	if (node.Conds)
	{
		node.Conds->Accept(*this);
	}

	if (node.Conds)
	{
		*m_Ss << ", ";
	}

	node.Cond->Accept(*this);

	*m_Ss << "}";

	if (node.Next)
	{
		*m_Ss << " . ";

		node.Next->Accept(*this);
	}
}

void Writer::Visit(const ast::SeqOpNode& node)
{
	switch (node.Op)
	{
		case ast::Operation::Plus:
			*m_Ss << "+";
			break;
		case ast::Operation::Less:
			*m_Ss << "<";
			break;
	}

	if (node.Next)
	{
		*m_Ss << " . ";

		node.Next->Accept(*this);
	}
}

} // namespace interp
} // namespace fmcs
