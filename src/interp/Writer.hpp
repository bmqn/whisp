#ifndef H_WRITER_H
#define H_WRITER_H

#include "Machine.hpp"
#include "ast/Tree.hpp"
#include "ast/Visitor.hpp"

namespace fmcs {
namespace interp {

class Writer : public ast::Visitor
{
public:
	Writer(std::ostream* ss, const Env_t *env);

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
	virtual void Visit(const ast::SeqOpNode& node) override;

private:
	std::ostream* m_Ss;

	const Env_t *m_Env;
};

} // namespace interp
} // namespace fmcs

#endif // H_WRITER_H