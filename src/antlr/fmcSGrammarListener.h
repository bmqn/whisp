
// Generated from ./fmcSGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "fmcSGrammar.h"


/**
 * This interface defines an abstract listener for a parse tree produced by fmcSGrammar.
 */
class  fmcSGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterLit(fmcSGrammar::LitContext *ctx) = 0;
  virtual void exitLit(fmcSGrammar::LitContext *ctx) = 0;

  virtual void enterVar(fmcSGrammar::VarContext *ctx) = 0;
  virtual void exitVar(fmcSGrammar::VarContext *ctx) = 0;

  virtual void enterLoc(fmcSGrammar::LocContext *ctx) = 0;
  virtual void exitLoc(fmcSGrammar::LocContext *ctx) = 0;

  virtual void enterBinder(fmcSGrammar::BinderContext *ctx) = 0;
  virtual void exitBinder(fmcSGrammar::BinderContext *ctx) = 0;

  virtual void enterApp(fmcSGrammar::AppContext *ctx) = 0;
  virtual void exitApp(fmcSGrammar::AppContext *ctx) = 0;

  virtual void enterAbs(fmcSGrammar::AbsContext *ctx) = 0;
  virtual void exitAbs(fmcSGrammar::AbsContext *ctx) = 0;

  virtual void enterLocApp(fmcSGrammar::LocAppContext *ctx) = 0;
  virtual void exitLocApp(fmcSGrammar::LocAppContext *ctx) = 0;

  virtual void enterLocAbs(fmcSGrammar::LocAbsContext *ctx) = 0;
  virtual void exitLocAbs(fmcSGrammar::LocAbsContext *ctx) = 0;

  virtual void enterCond(fmcSGrammar::CondContext *ctx) = 0;
  virtual void exitCond(fmcSGrammar::CondContext *ctx) = 0;

  virtual void enterConds(fmcSGrammar::CondsContext *ctx) = 0;
  virtual void exitConds(fmcSGrammar::CondsContext *ctx) = 0;

  virtual void enterTerm(fmcSGrammar::TermContext *ctx) = 0;
  virtual void exitTerm(fmcSGrammar::TermContext *ctx) = 0;

  virtual void enterInclude(fmcSGrammar::IncludeContext *ctx) = 0;
  virtual void exitInclude(fmcSGrammar::IncludeContext *ctx) = 0;

  virtual void enterFunction(fmcSGrammar::FunctionContext *ctx) = 0;
  virtual void exitFunction(fmcSGrammar::FunctionContext *ctx) = 0;

  virtual void enterProgram(fmcSGrammar::ProgramContext *ctx) = 0;
  virtual void exitProgram(fmcSGrammar::ProgramContext *ctx) = 0;


};

