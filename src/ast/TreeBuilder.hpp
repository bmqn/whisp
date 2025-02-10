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

		fmcSGrammar::SeqTermContext* seqTerm = parser.seqTerm();

		fmcs::ast::TreeBuilder builder;
		antlr4::tree::ParseTreeWalker::DEFAULT.walk(&builder, seqTerm);

		return builder.Get();
	}

private:
	Owner_t<SeqTermNode> Get()
	{
		return std::move(m_Terms.top());
	}

	virtual void exitSeqTerm(fmcSGrammar::SeqTermContext* ctx) override
	{
		if (ctx->STAR())
		{
			auto seqNil = MakeOwner<SeqNilNode>();

			PushNextTerm(std::move(seqNil));
		}
		else if (ctx->seqVar())
		{
			auto seqVar = MakeOwner<SeqVarNode>(
				ctx->seqVar()->ID()->getText());

			seqVar->Snippet = ctx->seqVar()->getText();

			if (ctx->seqVar()->EXCLAM())
			{
				seqVar->Strict = true;
			}

			if (ctx->seqTerm())
			{
				seqVar->Next = PopNextTerm();
			}

			PushNextTerm(std::move(seqVar));
		}
		else if (ctx->seqAbs())
		{
			auto seqAbs = MakeOwner<SeqAbsNode>();

			seqAbs->Snippet = ctx->seqAbs()->getText();

			if (ctx->seqTerm())
			{
				seqAbs->Next = PopNextTerm();
			}

			if (ctx->seqAbs()->binder())
			{
				seqAbs->Binder = MakeOwner<VarNode>(
					ctx->seqAbs()->binder()->ID()->getText());

				seqAbs->Binder->Snippet = ctx->seqAbs()->binder()->ID()->getText();
			}

			if (ctx->seqAbs()->loc())
			{
				seqAbs->Loc = MakeOwner<VarNode>(
					ctx->seqAbs()->loc()->ID()->getText());

				seqAbs->Loc->Snippet = ctx->seqAbs()->loc()->ID()->getText();
			}

			PushNextTerm(std::move(seqAbs));
		}
		else if (ctx->seqApp())
		{
			if (ctx->seqApp()->lit())
			{
				auto seqAppLit = MakeOwner<SeqAppLitNode>();

				seqAppLit->Snippet = ctx->seqApp()->getText();

				if (ctx->seqTerm())
				{
					seqAppLit->Next = PopNextTerm();
				}

				if (ctx->seqApp()->lit()->INT())
				{
					seqAppLit->Lit = MakeOwner<Int32LitNode>(
						std::stoi(ctx->seqApp()->lit()->INT()->getText()));

					seqAppLit->Lit->Snippet = ctx->seqApp()->lit()->INT()->getText();
				}
				else if (ctx->seqApp()->lit()->STR())
				{
					std::string litStr = ctx->seqApp()->lit()->STR()->getText();
					litStr.erase(litStr.begin());
					litStr.erase(litStr.end() - 1);

					seqAppLit->Lit = MakeOwner<StrLitNode>(
						litStr);

					seqAppLit->Lit->Snippet = ctx->seqApp()->lit()->STR()->getText();
				}

				if (ctx->seqApp()->loc())
				{
					seqAppLit->Loc = MakeOwner<VarNode>(
						ctx->seqApp()->loc()->ID()->getText());

					seqAppLit->Loc->Snippet = ctx->seqApp()->loc()->ID()->getText();
				}

				PushNextTerm(std::move(seqAppLit));
			}
			else if (ctx->seqApp()->seqTerm())
			{
				auto seqApp = MakeOwner<SeqAppNode>();

				seqApp->Snippet = ctx->seqApp()->getText();

				if (ctx->seqTerm())
				{
					seqApp->Next = PopNextTerm();
				}

				if (ctx->seqApp()->seqTerm())
				{
					seqApp->Arg = PopNextTerm();
				}

				if (ctx->seqApp()->loc())
				{
					seqApp->Loc = MakeOwner<VarNode>(
						ctx->seqApp()->loc()->ID()->getText());

					seqApp->Loc->Snippet = ctx->seqApp()->loc()->ID()->getText();
				}

				PushNextTerm(std::move(seqApp));
			}
		}
		else if (ctx->seqConds())
		{
			auto seqConds = MakeOwner<SeqCondsNode>();

			seqConds->Snippet = ctx->seqConds()->getText();

			if (ctx->seqTerm())
			{
				seqConds->Next = PopNextTerm();
			}

			if (ctx->seqConds()->seqTerm())
			{
				seqConds->Cond = PopNextTerm();
			}

			if (!ctx->seqConds()->cond().empty())
			{
				auto condCtxs = ctx->seqConds()->cond();

				seqConds->Conds = MakeOwner<CondNode>();

				CondNode* currentCond = seqConds->Conds.get();

				for (int i = condCtxs.size() - 1; i >= 0; --i)
				{
					auto condCtx = condCtxs[i];

					if (condCtx->seqTerm())
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

			if (ctx->seqConds()->loc())
			{
				seqConds->Loc = MakeOwner<VarNode>(
					ctx->seqConds()->loc()->ID()->getText());

				seqConds->Loc->Snippet = ctx->seqConds()->loc()->ID()->getText();
			}

			PushNextTerm(std::move(seqConds));
		}
		else if (ctx->seqOp())
		{
			auto seqOp = MakeOwner<SeqOpNode>();

			seqOp->Snippet = ctx->seqOp()->getText();

			if (ctx->seqOp()->PLUS())
			{
				seqOp->Op = Operation::Plus;
			}
			else if (ctx->seqOp()->LTRIAN())
			{
				seqOp->Op = Operation::Less;
			}

			if (ctx->seqTerm())
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
