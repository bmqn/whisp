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

		try
		{
			fmcs::ast::TreeBuilder builder(parser);
			antlr4::tree::ParseTreeWalker::DEFAULT.walk(&builder, seqTerm);
			return builder.Get();
		}
		catch (const antlr4::RuntimeException &e)
		{
			return nullptr;
		}

		return nullptr;
	}

private:
	TreeBuilder(fmcSGrammar &parser)
		: m_Parser(parser)
	{
	}

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
			auto seqVar = MakeOwner<SeqVarNode>(ctx->seqVar()->ID()->getText());

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
					int32_t val = std::stoi(ctx->seqApp()->lit()->INT()->getText());

					seqAppLit->Lit = MakeOwner<Int32LitNode>(val);

					seqAppLit->Lit->Snippet = ctx->seqApp()->lit()->INT()->getText();
				}
				else if (ctx->seqApp()->lit()->STR())
				{
					std::string litStr = ctx->seqApp()->lit()->STR()->getText();

					// Remove the quotes
					litStr.erase(litStr.begin());
					litStr.erase(litStr.end() - 1);

					seqAppLit->Lit = MakeOwner<StrLitNode>(litStr);

					seqAppLit->Lit->Snippet = ctx->seqApp()->lit()->STR()->getText();
				}

				if (ctx->seqApp()->appCast())
				{
					AppCast cast;

					if (auto type = GetType(ctx->seqApp()->appCast()->ID()->getText()))
					{
						cast.Dest = *type;
					}
					else
					{
						std::string errorMessage = std::format(
							"Invalid cast to type '{}'",
							ctx->seqApp()->appCast()->ID()->getText());
						
						m_Parser.notifyErrorListeners(
							ctx->seqApp()->appCast()->ID()->getSymbol(),
							errorMessage,
							nullptr);

						throw antlr4::ParseCancellationException(errorMessage);
					}

					seqAppLit->Cast = cast;
				}

				if (ctx->seqApp()->loc())
				{
					seqAppLit->Loc = MakeOwner<VarNode>(ctx->seqApp()->loc()->ID()->getText());

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

				if (ctx->seqApp()->appCast())
				{
					AppCast cast;

					if (auto type = GetType(ctx->seqApp()->appCast()->ID()->getText()))
					{
						cast.Dest = *type;
					}
					else
					{
						std::string errorMessage = std::format(
							"Invalid cast to type '{}'",
							ctx->seqApp()->appCast()->ID()->getText());
						
						m_Parser.notifyErrorListeners(
							ctx->seqApp()->appCast()->ID()->getSymbol(),
							errorMessage,
							nullptr);

						throw antlr4::ParseCancellationException(errorMessage);
					}
					
					seqApp->Cast = cast;
				}

				if (ctx->seqApp()->seqTerm())
				{
					seqApp->Arg = PopNextTerm();
				}

				if (ctx->seqApp()->loc())
				{
					seqApp->Loc = MakeOwner<VarNode>(ctx->seqApp()->loc()->ID()->getText());

					seqApp->Loc->Snippet = ctx->seqApp()->loc()->ID()->getText();
				}

				PushNextTerm(std::move(seqApp));
			}
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
				seqAbs->Binder = MakeOwner<VarNode>(ctx->seqAbs()->binder()->ID()->getText());

				seqAbs->Binder->Snippet = ctx->seqAbs()->binder()->ID()->getText();
			}

			if (ctx->seqAbs()->absCast())
			{
				AbsCast cast;

				if (auto type = GetType(ctx->seqAbs()->absCast()->ID()->getText()))
				{
					cast.Dest = *type;
				}
				else
				{
					std::string errorMessage = std::format(
						"Invalid cast to type '{}'",
						ctx->seqAbs()->absCast()->ID()->getText());
					
					m_Parser.notifyErrorListeners(
						ctx->seqAbs()->absCast()->ID()->getSymbol(),
						errorMessage,
						nullptr);

					throw antlr4::ParseCancellationException(errorMessage);
				}

				seqAbs->Cast = cast;
			}

			if (ctx->seqAbs()->loc())
			{
				seqAbs->Loc = MakeOwner<VarNode>(ctx->seqAbs()->loc()->ID()->getText());

				seqAbs->Loc->Snippet = ctx->seqAbs()->loc()->ID()->getText();
			}

			PushNextTerm(std::move(seqAbs));
		
		}
		else if (ctx->seqLocApp())
		{
			auto seqLocApp = MakeOwner<SeqLocAppNode>();

			seqLocApp->Snippet = ctx->seqLocApp()->getText();

			if (ctx->seqTerm())
			{
				seqLocApp->Next = PopNextTerm();
			}

			if (ctx->seqLocApp()->var())
			{
				seqLocApp->Arg = MakeOwner<VarNode>(ctx->seqLocApp()->var()->ID()->getText());
			}

			if (ctx->seqLocApp()->loc())
			{
				seqLocApp->Loc = MakeOwner<VarNode>(ctx->seqLocApp()->loc()->ID()->getText());

				seqLocApp->Loc->Snippet = ctx->seqApp()->loc()->ID()->getText();
			}

			PushNextTerm(std::move(seqLocApp));
		}
		else if (ctx->seqLocAbs())
		{
			auto seqLocAbs = MakeOwner<SeqLocAbsNode>();

			seqLocAbs->Snippet = ctx->seqLocAbs()->getText();

			if (ctx->seqTerm())
			{
				seqLocAbs->Next = PopNextTerm();
			}

			if (ctx->seqLocAbs()->binder())
			{
				seqLocAbs->Binder = MakeOwner<VarNode>(ctx->seqLocAbs()->binder()->ID()->getText());

				seqLocAbs->Binder->Snippet = ctx->seqLocAbs()->binder()->ID()->getText();
			}

			if (ctx->seqLocAbs()->loc())
			{
				seqLocAbs->Loc = MakeOwner<VarNode>(ctx->seqLocAbs()->loc()->ID()->getText());

				seqLocAbs->Loc->Snippet = ctx->seqLocAbs()->loc()->ID()->getText();
			}

			PushNextTerm(std::move(seqLocAbs));
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
							int32_t val = std::stoi(condCtx->lit()->INT()->getText());

							currentCond->Matcher = MakeOwner<Int32LitNode>(val);

							currentCond->Matcher->Snippet = condCtx->lit()->INT()->getText();
						}
						else if (condCtx->lit()->STR())
						{
							std::string litStr = condCtx->lit()->STR()->getText();

							// Remove the quotes
							litStr.erase(litStr.begin());
							litStr.erase(litStr.end() - 1);

							currentCond->Matcher = MakeOwner<StrLitNode>(litStr);

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
				seqConds->Loc = MakeOwner<VarNode>(ctx->seqConds()->loc()->ID()->getText());

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
			else if (ctx->seqOp()->VERTBAR())
			{
				seqOp->Op = Operation::BitOr;
			}
			else if (ctx->seqOp()->bitSftL())
			{
				seqOp->Op = Operation::BitShiftLeft;
			}
			else if (ctx->seqOp()->bitSftR())
			{
				seqOp->Op = Operation::BitShiftRight;
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
	fmcSGrammar &m_Parser;

	std::stack<Owner_t<SeqTermNode>> m_Terms;
};

} // namespace ast
} // namespace fmcs

#endif // H_TREE_BUILDER_H
