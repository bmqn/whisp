
// Generated from src/antlr/fmcSGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  fmcSGrammar : public antlr4::Parser {
public:
  enum {
    EQ = 1, COMMA = 2, SEMI = 3, LPAREN = 4, RPAREN = 5, LCURLY = 6, RCURLY = 7, 
    LSQUARE = 8, RSQUARE = 9, LTRIAN = 10, RTRIAN = 11, HASH = 12, AT = 13, 
    STAR = 14, DOT = 15, ARROW = 16, UNDERSCORE = 17, QUOTE = 18, PLUS = 19, 
    EXCLAM = 20, VERTBAR = 21, DEFAULT = 22, INCLUDE = 23, CAST = 24, INT = 25, 
    STR = 26, ID = 27, WS = 28
  };

  enum {
    RuleLit = 0, RuleVar = 1, RuleLoc = 2, RuleSeqVar = 3, RuleAppCast = 4, 
    RuleSeqApp = 5, RuleBinder = 6, RuleAbsCast = 7, RuleSeqAbs = 8, RuleSeqLocApp = 9, 
    RuleSeqLocAbs = 10, RuleCond = 11, RuleSeqConds = 12, RuleBitSftL = 13, 
    RuleBitSftR = 14, RuleSeqOp = 15, RuleSeqTerm = 16, RuleInclude = 17, 
    RuleFunction = 18, RuleProgram = 19
  };

  explicit fmcSGrammar(antlr4::TokenStream *input);

  fmcSGrammar(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~fmcSGrammar() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class LitContext;
  class VarContext;
  class LocContext;
  class SeqVarContext;
  class AppCastContext;
  class SeqAppContext;
  class BinderContext;
  class AbsCastContext;
  class SeqAbsContext;
  class SeqLocAppContext;
  class SeqLocAbsContext;
  class CondContext;
  class SeqCondsContext;
  class BitSftLContext;
  class BitSftRContext;
  class SeqOpContext;
  class SeqTermContext;
  class IncludeContext;
  class FunctionContext;
  class ProgramContext; 

  class  LitContext : public antlr4::ParserRuleContext {
  public:
    LitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *STR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LitContext* lit();

  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarContext* var();

  class  LocContext : public antlr4::ParserRuleContext {
  public:
    LocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocContext* loc();

  class  SeqVarContext : public antlr4::ParserRuleContext {
  public:
    SeqVarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EXCLAM();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqVarContext* seqVar();

  class  AppCastContext : public antlr4::ParserRuleContext {
  public:
    AppCastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AppCastContext* appCast();

  class  SeqAppContext : public antlr4::ParserRuleContext {
  public:
    SeqAppContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    SeqTermContext *seqTerm();
    antlr4::tree::TerminalNode *RSQUARE();
    AppCastContext *appCast();
    LocContext *loc();
    LitContext *lit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqAppContext* seqApp();

  class  BinderContext : public antlr4::ParserRuleContext {
  public:
    BinderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinderContext* binder();

  class  AbsCastContext : public antlr4::ParserRuleContext {
  public:
    AbsCastContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CAST();
    antlr4::tree::TerminalNode *ID();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbsCastContext* absCast();

  class  SeqAbsContext : public antlr4::ParserRuleContext {
  public:
    SeqAbsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTRIAN();
    BinderContext *binder();
    antlr4::tree::TerminalNode *RTRIAN();
    LocContext *loc();
    AbsCastContext *absCast();
    antlr4::tree::TerminalNode *UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqAbsContext* seqAbs();

  class  SeqLocAppContext : public antlr4::ParserRuleContext {
  public:
    SeqLocAppContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *HASH();
    VarContext *var();
    antlr4::tree::TerminalNode *RSQUARE();
    LocContext *loc();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqLocAppContext* seqLocApp();

  class  SeqLocAbsContext : public antlr4::ParserRuleContext {
  public:
    SeqLocAbsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTRIAN();
    antlr4::tree::TerminalNode *AT();
    BinderContext *binder();
    antlr4::tree::TerminalNode *RTRIAN();
    LocContext *loc();
    antlr4::tree::TerminalNode *UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqLocAbsContext* seqLocAbs();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LitContext *lit();
    antlr4::tree::TerminalNode *ARROW();
    SeqTermContext *seqTerm();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CondContext* cond();

  class  SeqCondsContext : public antlr4::ParserRuleContext {
  public:
    SeqCondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    SeqTermContext *seqTerm();
    antlr4::tree::TerminalNode *RCURLY();
    LocContext *loc();
    std::vector<CondContext *> cond();
    CondContext* cond(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqCondsContext* seqConds();

  class  BitSftLContext : public antlr4::ParserRuleContext {
  public:
    BitSftLContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LTRIAN();
    antlr4::tree::TerminalNode* LTRIAN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitSftLContext* bitSftL();

  class  BitSftRContext : public antlr4::ParserRuleContext {
  public:
    BitSftRContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RTRIAN();
    antlr4::tree::TerminalNode* RTRIAN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BitSftRContext* bitSftR();

  class  SeqOpContext : public antlr4::ParserRuleContext {
  public:
    SeqOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *LTRIAN();
    antlr4::tree::TerminalNode *VERTBAR();
    BitSftLContext *bitSftL();
    BitSftRContext *bitSftR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqOpContext* seqOp();

  class  SeqTermContext : public antlr4::ParserRuleContext {
  public:
    SeqTermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    SeqVarContext *seqVar();
    antlr4::tree::TerminalNode *DOT();
    SeqTermContext *seqTerm();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    SeqAppContext *seqApp();
    SeqAbsContext *seqAbs();
    SeqLocAppContext *seqLocApp();
    SeqLocAbsContext *seqLocAbs();
    SeqCondsContext *seqConds();
    SeqOpContext *seqOp();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeqTermContext* seqTerm();

  class  IncludeContext : public antlr4::ParserRuleContext {
  public:
    IncludeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *HASH();
    antlr4::tree::TerminalNode *INCLUDE();
    std::vector<antlr4::tree::TerminalNode *> QUOTE();
    antlr4::tree::TerminalNode* QUOTE(size_t i);
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IncludeContext* include();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *LPAREN();
    SeqTermContext *seqTerm();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctionContext* function();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<IncludeContext *> include();
    IncludeContext* include(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ProgramContext* program();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

