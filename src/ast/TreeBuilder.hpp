#ifndef H_TREE_BUILDER_H
#define H_TREE_BUILDER_H

#include "Tree.hpp"

#include "antlr/fmcSLexer.h"
#include "antlr/fmcSGrammar.h"
#include "antlr/fmcSGrammarBaseListener.h"

namespace fmcs {
namespace ast {

class TreeBuilder : public fmcSGrammarBaseListener
{
public:
	static Owner_t<SeqTermNode> Parse(const std::string& termStr)
	{
		antlr4::ANTLRInputStream inputStream(termStr);
		fmcSLexer lexer(&inputStream);
		antlr4::CommonTokenStream tokens(&lexer);
		fmcSGrammar parser(&tokens);

		fmcSGrammar::TermContext* term = parser.term();

		fmcs::ast::TreeBuilder builder;
		antlr4::tree::ParseTreeWalker::DEFAULT.walk(&builder, term);

		return builder.Get();
	}

private:
	Owner_t<SeqTermNode> Get()
	{
		return std::move(m_Terms.top());
	}

	virtual void exitTerm(fmcSGrammar::TermContext* ctx) override
	{
		if (ctx->STAR())
		{
			auto seqNil = MakeOwner<SeqNilNode>();

			PushNextTerm(std::move(seqNil));
		}
		else if (ctx->var())
		{
			auto seqVar = MakeOwner<SeqVarNode>(
				ctx->var()->ID()->getText());

			seqVar->Snippet = ctx->var()->getText();

			if (ctx->term())
			{
				seqVar->Next = PopNextTerm();
			}

			PushNextTerm(std::move(seqVar));
		}
		else if (ctx->abs())
		{
			auto seqAbs = MakeOwner<SeqAbsNode>();

			seqAbs->Snippet = ctx->abs()->getText();

			if (ctx->term())
			{
				seqAbs->Next = PopNextTerm();
			}

			if (ctx->abs()->binder())
			{
				seqAbs->Binder = MakeOwner<VarNode>(
					ctx->abs()->binder()->ID()->getText());

				seqAbs->Binder->Snippet = ctx->abs()->binder()->ID()->getText();
			}

			if (ctx->abs()->loc())
			{
				seqAbs->Loc = MakeOwner<VarNode>(
					ctx->abs()->loc()->ID()->getText());

				seqAbs->Loc->Snippet = ctx->abs()->loc()->ID()->getText();
			}

			PushNextTerm(std::move(seqAbs));
		}
		else if (ctx->app())
		{
			if (ctx->app()->lit())
			{
				auto seqAppLit = MakeOwner<SeqAppLitNode>();

				seqAppLit->Snippet = ctx->app()->getText();

				if (ctx->term())
				{
					seqAppLit->Next = PopNextTerm();
				}

				if (ctx->app()->lit()->INT())
				{
					seqAppLit->Lit = MakeOwner<Int32LitNode>(
						std::stoi(ctx->app()->lit()->INT()->getText()));

					seqAppLit->Lit->Snippet = ctx->app()->lit()->INT()->getText();
				}
				else if (ctx->app()->lit()->STR())
				{
					std::string litStr = ctx->app()->lit()->STR()->getText();
					litStr.erase(litStr.begin());
					litStr.erase(litStr.end() - 1);

					seqAppLit->Lit = MakeOwner<StrLitNode>(
						litStr);

					seqAppLit->Lit->Snippet = ctx->app()->lit()->STR()->getText();
				}

				if (ctx->app()->loc())
				{
					seqAppLit->Loc = MakeOwner<VarNode>(
						ctx->app()->loc()->ID()->getText());

					seqAppLit->Loc->Snippet = ctx->app()->loc()->ID()->getText();
				}

				PushNextTerm(std::move(seqAppLit));
			}
			else if (ctx->app()->term())
			{
				auto seqApp = MakeOwner<SeqAppNode>();

				seqApp->Snippet = ctx->app()->getText();

				if (ctx->term())
				{
					seqApp->Next = PopNextTerm();
				}

				if (ctx->app()->term())
				{
					seqApp->Arg = PopNextTerm();
				}

				if (ctx->app()->loc())
				{
					seqApp->Loc = MakeOwner<VarNode>(
						ctx->app()->loc()->ID()->getText());

					seqApp->Loc->Snippet = ctx->app()->loc()->ID()->getText();
				}

				PushNextTerm(std::move(seqApp));
			}
		}
		else if (ctx->conds())
		{
			auto seqConds = MakeOwner<SeqCondsNode>();

			seqConds->Snippet = ctx->conds()->getText();

			if (ctx->term())
			{
				seqConds->Next = PopNextTerm();
			}

			if (ctx->conds()->term())
			{
				seqConds->Cond = PopNextTerm();
			}

			if (!ctx->conds()->cond().empty())
			{
				auto condCtxs = ctx->conds()->cond();

				seqConds->Conds = MakeOwner<CondNode>();

				CondNode* currentCond = seqConds->Conds.get();

				for (int i = condCtxs.size() - 1; i >= 0; --i)
				{
					auto condCtx = condCtxs[i];

					if (condCtx->term())
					{
						currentCond->Arg = PopNextTerm();
					}

					if (condCtx->lit())
					{
						if (condCtx->lit()->INT())
						{
							currentCond->Matcher = MakeOwner<Int32LitNode>(
								std::stoi(condCtx->lit()->INT()->getText()));

							currentCond->Matcher->Snippet = condCtx->lit()->INT()->getText();
						}
						else if (condCtx->lit()->STR())
						{
							std::string litStr = condCtx->lit()->STR()->getText();
							litStr.erase(litStr.begin());
							litStr.erase(litStr.end() - 1);

							currentCond->Matcher = MakeOwner<StrLitNode>(
								litStr);

							currentCond->Matcher->Snippet = condCtx->lit()->STR()->getText();
						}
					}

					if (i > 0)
					{
						currentCond->Next = MakeOwner<CondNode>();

						currentCond = currentCond->Next.get();
					}
				}
			}

			if (ctx->conds()->loc())
			{
				seqConds->Loc = MakeOwner<VarNode>(
					ctx->conds()->loc()->ID()->getText());

				seqConds->Loc->Snippet = ctx->conds()->loc()->ID()->getText();
			}

			PushNextTerm(std::move(seqConds));
		}
		else if (ctx->op())
		{
			auto seqOp = MakeOwner<SeqOpNode>();

			seqOp->Snippet = ctx->op()->getText();

			if (ctx->op()->PLUS())
			{
				seqOp->Op = Operation::Plus;
			}
			else if (ctx->op()->LTRIAN())
			{
				seqOp->Op = Operation::Less;
			}

			if (ctx->term())
			{
				seqOp->Next = PopNextTerm();
			}

			PushNextTerm(std::move(seqOp));
		}
	}

	virtual void exitFunction(fmcSGrammar::FunctionContext* ctx) override {}

	virtual void exitProgram(fmcSGrammar::ProgramContext* ctx) override {}

private:
	void PushNextTerm(Owner_t<SeqTermNode>&& seqTerm)
	{
		m_Terms.push(std::move(seqTerm));
	}

	Owner_t<SeqTermNode> PopNextTerm()
	{
		auto term = std::move(m_Terms.top());
		m_Terms.pop();
		return term;
	}

private:
	std::stack<Owner_t<SeqTermNode>> m_Terms;
};

} // namespace ast
} // namespace fmcs

#endif // H_TREE_BUILDER_H
