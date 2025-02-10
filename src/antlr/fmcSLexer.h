
// Generated from fmcSLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  fmcSLexer : public antlr4::Lexer {
public:
  enum {
    EQ = 1, COMMA = 2, SEMI = 3, LPAREN = 4, RPAREN = 5, LCURLY = 6, RCURLY = 7, 
    LSQUARE = 8, RSQUARE = 9, LTRIAN = 10, RTRIAN = 11, HASH = 12, AT = 13, 
    STAR = 14, DOT = 15, ARROW = 16, UNDERSCORE = 17, QUOTE = 18, PLUS = 19, 
    EXCLAM = 20, DEFAULT = 21, INCLUDE = 22, INT = 23, STR = 24, ID = 25, 
    WS = 26
  };

  explicit fmcSLexer(antlr4::CharStream *input);

  ~fmcSLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

