
// Generated from fmcSGrammar.g4 by ANTLR 4.13.2

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

  virtual void enterSeqVar(fmcSGrammar::SeqVarContext *ctx) = 0;
  virtual void exitSeqVar(fmcSGrammar::SeqVarContext *ctx) = 0;

  virtual void enterSeqApp(fmcSGrammar::SeqAppContext *ctx) = 0;
  virtual void exitSeqApp(fmcSGrammar::SeqAppContext *ctx) = 0;

  virtual void enterSeqLocApp(fmcSGrammar::SeqLocAppContext *ctx) = 0;
  virtual void exitSeqLocApp(fmcSGrammar::SeqLocAppContext *ctx) = 0;

  virtual void enterBinder(fmcSGrammar::BinderContext *ctx) = 0;
  virtual void exitBinder(fmcSGrammar::BinderContext *ctx) = 0;

  virtual void enterSeqAbs(fmcSGrammar::SeqAbsContext *ctx) = 0;
  virtual void exitSeqAbs(fmcSGrammar::SeqAbsContext *ctx) = 0;

  virtual void enterSeqLocAbs(fmcSGrammar::SeqLocAbsContext *ctx) = 0;
  virtual void exitSeqLocAbs(fmcSGrammar::SeqLocAbsContext *ctx) = 0;

  virtual void enterCond(fmcSGrammar::CondContext *ctx) = 0;
  virtual void exitCond(fmcSGrammar::CondContext *ctx) = 0;

  virtual void enterSeqConds(fmcSGrammar::SeqCondsContext *ctx) = 0;
  virtual void exitSeqConds(fmcSGrammar::SeqCondsContext *ctx) = 0;

  virtual void enterSeqOp(fmcSGrammar::SeqOpContext *ctx) = 0;
  virtual void exitSeqOp(fmcSGrammar::SeqOpContext *ctx) = 0;

  virtual void enterSeqTerm(fmcSGrammar::SeqTermContext *ctx) = 0;
  virtual void exitSeqTerm(fmcSGrammar::SeqTermContext *ctx) = 0;

  virtual void enterInclude(fmcSGrammar::IncludeContext *ctx) = 0;
  virtual void exitInclude(fmcSGrammar::IncludeContext *ctx) = 0;

  virtual void enterFunction(fmcSGrammar::FunctionContext *ctx) = 0;
  virtual void exitFunction(fmcSGrammar::FunctionContext *ctx) = 0;

  virtual void enterProgram(fmcSGrammar::ProgramContext *ctx) = 0;
  virtual void exitProgram(fmcSGrammar::ProgramContext *ctx) = 0;


};

