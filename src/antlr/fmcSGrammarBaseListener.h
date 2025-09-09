
// Generated from src/antlr/fmcSGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "fmcSGrammarListener.h"


/**
 * This class provides an empty implementation of fmcSGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  fmcSGrammarBaseListener : public fmcSGrammarListener {
public:

  virtual void enterLit(fmcSGrammar::LitContext * /*ctx*/) override { }
  virtual void exitLit(fmcSGrammar::LitContext * /*ctx*/) override { }

  virtual void enterVar(fmcSGrammar::VarContext * /*ctx*/) override { }
  virtual void exitVar(fmcSGrammar::VarContext * /*ctx*/) override { }

  virtual void enterLoc(fmcSGrammar::LocContext * /*ctx*/) override { }
  virtual void exitLoc(fmcSGrammar::LocContext * /*ctx*/) override { }

  virtual void enterSeqVar(fmcSGrammar::SeqVarContext * /*ctx*/) override { }
  virtual void exitSeqVar(fmcSGrammar::SeqVarContext * /*ctx*/) override { }

  virtual void enterAppCast(fmcSGrammar::AppCastContext * /*ctx*/) override { }
  virtual void exitAppCast(fmcSGrammar::AppCastContext * /*ctx*/) override { }

  virtual void enterSeqApp(fmcSGrammar::SeqAppContext * /*ctx*/) override { }
  virtual void exitSeqApp(fmcSGrammar::SeqAppContext * /*ctx*/) override { }

  virtual void enterBinder(fmcSGrammar::BinderContext * /*ctx*/) override { }
  virtual void exitBinder(fmcSGrammar::BinderContext * /*ctx*/) override { }

  virtual void enterAbsCast(fmcSGrammar::AbsCastContext * /*ctx*/) override { }
  virtual void exitAbsCast(fmcSGrammar::AbsCastContext * /*ctx*/) override { }

  virtual void enterSeqAbs(fmcSGrammar::SeqAbsContext * /*ctx*/) override { }
  virtual void exitSeqAbs(fmcSGrammar::SeqAbsContext * /*ctx*/) override { }

  virtual void enterSeqLocApp(fmcSGrammar::SeqLocAppContext * /*ctx*/) override { }
  virtual void exitSeqLocApp(fmcSGrammar::SeqLocAppContext * /*ctx*/) override { }

  virtual void enterSeqLocAbs(fmcSGrammar::SeqLocAbsContext * /*ctx*/) override { }
  virtual void exitSeqLocAbs(fmcSGrammar::SeqLocAbsContext * /*ctx*/) override { }

  virtual void enterCond(fmcSGrammar::CondContext * /*ctx*/) override { }
  virtual void exitCond(fmcSGrammar::CondContext * /*ctx*/) override { }

  virtual void enterSeqConds(fmcSGrammar::SeqCondsContext * /*ctx*/) override { }
  virtual void exitSeqConds(fmcSGrammar::SeqCondsContext * /*ctx*/) override { }

  virtual void enterBitSftL(fmcSGrammar::BitSftLContext * /*ctx*/) override { }
  virtual void exitBitSftL(fmcSGrammar::BitSftLContext * /*ctx*/) override { }

  virtual void enterBitSftR(fmcSGrammar::BitSftRContext * /*ctx*/) override { }
  virtual void exitBitSftR(fmcSGrammar::BitSftRContext * /*ctx*/) override { }

  virtual void enterSeqOp(fmcSGrammar::SeqOpContext * /*ctx*/) override { }
  virtual void exitSeqOp(fmcSGrammar::SeqOpContext * /*ctx*/) override { }

  virtual void enterSeqTerm(fmcSGrammar::SeqTermContext * /*ctx*/) override { }
  virtual void exitSeqTerm(fmcSGrammar::SeqTermContext * /*ctx*/) override { }

  virtual void enterInclude(fmcSGrammar::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(fmcSGrammar::IncludeContext * /*ctx*/) override { }

  virtual void enterFunction(fmcSGrammar::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(fmcSGrammar::FunctionContext * /*ctx*/) override { }

  virtual void enterProgram(fmcSGrammar::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(fmcSGrammar::ProgramContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

