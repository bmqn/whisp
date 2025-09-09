#ifndef H_VISITOR_H
#define H_VISITOR_H

#include "Tree.hpp"

namespace fmcs {
namespace ast {

class Visitor
{
	friend class Node;

protected:
	virtual void Visit(const LitNode& node) {}
	virtual void Visit(const Int32LitNode& node) {}
	virtual void Visit(const StrLitNode& node) {}

	virtual void Visit(const VarNode& node) {}

	virtual void Visit(const CondNode& node) {}

	virtual void Visit(const SeqTermNode& node) {}
	virtual void Visit(const SeqNilNode& node) {}
	virtual void Visit(const SeqVarNode& node) {}
	virtual void Visit(const SeqAppNode& node) {}
	virtual void Visit(const SeqAppLitNode& node) {}
	virtual void Visit(const SeqAbsNode& node) {}
	virtual void Visit(const SeqLocAppNode& node) {}
	virtual void Visit(const SeqLocAbsNode& node) {}
	virtual void Visit(const SeqCondsNode& node) {}
	virtual void Visit(const SeqOpNode& node) {}
};

} // namespace ast
} // namespace fmcs

#endif // H_VISITOR_H
