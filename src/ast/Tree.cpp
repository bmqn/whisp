#include "Tree.hpp"

#include "Visitor.hpp"

namespace fmcs {
namespace ast {

std::optional<Type> GetType(const std::string &name)
{
	if (name == "u32")
	{
		return Type::U32;
	}
	else if (name == "s32")
	{
		return Type::S32;
	}
	else if (name == "u64")
	{
		return Type::U64;
	}
	else if (name == "s64")
	{
		return Type::S64;
	}
	else if (name == "str")
	{
		return Type::Str;
	}

	return std::nullopt;
}

void LitNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);
}

void Int32LitNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	LitNode::Accept(visitor);
}

void StrLitNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	LitNode::Accept(visitor);
}

void VarNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);
}

void SeqTermNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);
}

void SeqNilNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void SeqVarNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void SeqAppNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void SeqAppLitNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void SeqAbsNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void SeqLocAppNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void SeqLocAbsNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void CondNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);
}

void SeqCondsNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

void SeqOpNode::Accept(Visitor& visitor) const
{
	Visit(*this, visitor);

	SeqTermNode::Accept(visitor);
}

} // namespace ast
} // namespace fmcs
