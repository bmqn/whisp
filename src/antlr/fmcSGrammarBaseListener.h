
// Generated from ./fmcSGrammar.g4 by ANTLR 4.13.2

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

  virtual void enterBinder(fmcSGrammar::BinderContext * /*ctx*/) override { }
  virtual void exitBinder(fmcSGrammar::BinderContext * /*ctx*/) override { }

  virtual void enterApp(fmcSGrammar::AppContext * /*ctx*/) override { }
  virtual void exitApp(fmcSGrammar::AppContext * /*ctx*/) override { }

  virtual void enterAbs(fmcSGrammar::AbsContext * /*ctx*/) override { }
  virtual void exitAbs(fmcSGrammar::AbsContext * /*ctx*/) override { }

  virtual void enterLocApp(fmcSGrammar::LocAppContext * /*ctx*/) override { }
  virtual void exitLocApp(fmcSGrammar::LocAppContext * /*ctx*/) override { }

  virtual void enterLocAbs(fmcSGrammar::LocAbsContext * /*ctx*/) override { }
  virtual void exitLocAbs(fmcSGrammar::LocAbsContext * /*ctx*/) override { }

  virtual void enterCond(fmcSGrammar::CondContext * /*ctx*/) override { }
  virtual void exitCond(fmcSGrammar::CondContext * /*ctx*/) override { }

  virtual void enterConds(fmcSGrammar::CondsContext * /*ctx*/) override { }
  virtual void exitConds(fmcSGrammar::CondsContext * /*ctx*/) override { }

  virtual void enterTerm(fmcSGrammar::TermContext * /*ctx*/) override { }
  virtual void exitTerm(fmcSGrammar::TermContext * /*ctx*/) override { }

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

