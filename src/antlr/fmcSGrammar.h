
// Generated from ./fmcSGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  fmcSGrammar : public antlr4::Parser {
public:
  enum {
    EQ = 1, COMMA = 2, SEMI = 3, LPAREN = 4, RPAREN = 5, LCURLY = 6, RCURLY = 7, 
    LSQUARE = 8, RSQUARE = 9, LTRIAN = 10, RTRIAN = 11, HASH = 12, AT = 13, 
    STAR = 14, DOT = 15, ARROW = 16, UNDERSCORE = 17, QUOTE = 18, DEFAULT = 19, 
    INCLUDE = 20, INT = 21, STR = 22, ID = 23, WS = 24
  };

  enum {
    RuleLit = 0, RuleVar = 1, RuleBinder = 2, RuleApp = 3, RuleAbs = 4, 
    RuleLocApp = 5, RuleLocAbs = 6, RuleCond = 7, RuleConds = 8, RuleTerm = 9, 
    RuleInclude = 10, RuleFunction = 11, RuleProgram = 12
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
  class BinderContext;
  class AppContext;
  class AbsContext;
  class LocAppContext;
  class LocAbsContext;
  class CondContext;
  class CondsContext;
  class TermContext;
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

  class  BinderContext : public antlr4::ParserRuleContext {
  public:
    BinderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BinderContext* binder();

  class  AppContext : public antlr4::ParserRuleContext {
  public:
    AppContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    TermContext *term();
    antlr4::tree::TerminalNode *RSQUARE();
    VarContext *var();
    LitContext *lit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AppContext* app();

  class  AbsContext : public antlr4::ParserRuleContext {
  public:
    AbsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTRIAN();
    BinderContext *binder();
    antlr4::tree::TerminalNode *RTRIAN();
    VarContext *var();
    antlr4::tree::TerminalNode *UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AbsContext* abs();

  class  LocAppContext : public antlr4::ParserRuleContext {
  public:
    LocAppContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LSQUARE();
    antlr4::tree::TerminalNode *HASH();
    std::vector<VarContext *> var();
    VarContext* var(size_t i);
    antlr4::tree::TerminalNode *RSQUARE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocAppContext* locApp();

  class  LocAbsContext : public antlr4::ParserRuleContext {
  public:
    LocAbsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LTRIAN();
    antlr4::tree::TerminalNode *AT();
    BinderContext *binder();
    antlr4::tree::TerminalNode *RTRIAN();
    VarContext *var();
    antlr4::tree::TerminalNode *UNDERSCORE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LocAbsContext* locAbs();

  class  CondContext : public antlr4::ParserRuleContext {
  public:
    CondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext *var();
    antlr4::tree::TerminalNode *ARROW();
    TermContext *term();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CondContext* cond();

  class  CondsContext : public antlr4::ParserRuleContext {
  public:
    CondsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLY();
    std::vector<CondContext *> cond();
    CondContext* cond(size_t i);
    antlr4::tree::TerminalNode *RCURLY();
    VarContext *var();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  CondsContext* conds();

  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STAR();
    VarContext *var();
    antlr4::tree::TerminalNode *DOT();
    TermContext *term();
    std::vector<antlr4::tree::TerminalNode *> WS();
    antlr4::tree::TerminalNode* WS(size_t i);
    AppContext *app();
    AbsContext *abs();
    LocAppContext *locApp();
    LocAbsContext *locAbs();
    CondsContext *conds();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TermContext* term();

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
    TermContext *term();
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

