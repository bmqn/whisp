#ifndef H_TREE_H
#define H_TREE_H

namespace fmcs {
namespace ast {

struct Node;

struct LitNode;
struct StrLitNode;

struct VarNode;

struct CondNode;

struct SeqTermNode;
struct SeqNilNode;
struct SeqVarNode;
struct SeqAppNode;
struct SeqAbsNode;
struct SeqCondsNode;
struct SeqOpNode;

class Visitor;

using NodePtr_t = Node*;
using LitPtr_t = LitNode*;
using TermPtr_t = SeqTermNode*;

template<typename WrappedNode>
using Owner_t = std::unique_ptr<WrappedNode>;

template<typename WrappedNode, typename... Args>
Owner_t<WrappedNode> MakeOwner(Args&&... args)
{
	return std::make_unique<WrappedNode>(std::forward<Args>(args)...);
}

struct Node
{
	virtual ~Node() = default;

	virtual void Accept(Visitor& visitor) const = 0;

protected:
	template<typename ImplNode, typename ImplVisitor>
	void Visit(const ImplNode& node, ImplVisitor& visitor) const
	{
		visitor.Visit(node);
	}

public:
	std::string Snippet;
};

struct LitNode : public Node
{
	virtual ~LitNode() = default;

	virtual void Accept(Visitor& visitor) const override;
};

struct Int32LitNode : public LitNode
{
	explicit Int32LitNode(int32_t val)
		: Val(val)
	{}

	virtual void Accept(Visitor& visitor) const override;

	int32_t Val;
};

struct StrLitNode : public LitNode
{
	explicit StrLitNode(std::string_view val)
		: Val(val)
	{}

	virtual void Accept(Visitor& visitor) const override;

	std::string Val;
};

struct VarNode : public Node
{
	explicit VarNode(std::string_view name)
		: Name(name)
	{}

	virtual void Accept(Visitor& visitor) const override;

	std::string Name;
};

struct CondNode : public Node
{
	CondNode() = default;
	CondNode(Owner_t<LitNode> matcher, Owner_t<SeqTermNode> arg)
		: Matcher(std::move(matcher))
		, Arg(std::move(arg))
	{}

	virtual void Accept(Visitor& visitor) const override;

	Owner_t<LitNode> Matcher;
	Owner_t<SeqTermNode> Arg;
	Owner_t<CondNode> Next;
};

struct SeqTermNode : public Node
{
	virtual ~SeqTermNode() = default;

	virtual void Accept(Visitor& visitor) const override;

	Owner_t<SeqTermNode> Next;
};

struct SeqNilNode : public SeqTermNode
{
	virtual void Accept(Visitor& visitor) const override;
};

struct SeqVarNode : public SeqTermNode
{
	explicit SeqVarNode(std::string_view name)
		: Name(name)
		, Strict(false)
	{}

	virtual void Accept(Visitor& visitor) const override;

	std::string Name;
	bool Strict;
};

struct SeqAppNode : public SeqTermNode
{
	SeqAppNode() = default;
	SeqAppNode(Owner_t<SeqTermNode> arg, Owner_t<VarNode> loc = nullptr)
		: Arg(std::move(arg))
		, Loc(std::move(loc))
	{}

	virtual void Accept(Visitor& visitor) const override;

	Owner_t<SeqTermNode> Arg;
	Owner_t<VarNode> Loc;
};

struct SeqAppLitNode : public SeqTermNode
{
	SeqAppLitNode() = default;
	SeqAppLitNode(Owner_t<LitNode> lit, Owner_t<VarNode> loc = nullptr)
		: Lit(std::move(lit))
		, Loc(std::move(loc))
	{}

	virtual void Accept(Visitor& visitor) const override;

	Owner_t<LitNode> Lit;
	Owner_t<VarNode> Loc;
};

struct SeqAbsNode : public SeqTermNode
{
	SeqAbsNode() = default;
	SeqAbsNode(Owner_t<VarNode> binder, Owner_t<VarNode> loc = nullptr)
		: Binder(std::move(binder))
		, Loc(std::move(loc))
	{}

	virtual void Accept(Visitor& visitor) const override;

	Owner_t<VarNode> Binder;
	Owner_t<VarNode> Loc;
};

struct SeqCondsNode : public SeqTermNode
{
	SeqCondsNode() = default;
	SeqCondsNode(Owner_t<SeqTermNode> cond, Owner_t<CondNode> conds, Owner_t<VarNode> loc = nullptr)
		: Cond(std::move(cond))
		, Conds(std::move(conds))
		, Loc(std::move(loc))
	{}

	virtual void Accept(Visitor& visitor) const override;

	Owner_t<SeqTermNode> Cond;
	Owner_t<CondNode> Conds;
	Owner_t<VarNode> Loc;
};

enum class Operation
{
	Plus,
	Less,
	BitShiftLeft,
	BitShiftRight
};

struct SeqOpNode : public SeqTermNode
{
	SeqOpNode() = default;
	SeqOpNode(Operation op)
		: Op(op)
	{}

	virtual void Accept(Visitor& visitor) const override;

	Operation Op;
};

} // namespace ast
} // namespace fmcs

#endif // H_TREE_H
