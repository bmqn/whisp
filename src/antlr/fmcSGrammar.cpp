
// Generated from ./fmcSGrammar.g4 by ANTLR 4.13.2


#include "fmcSGrammarListener.h"

#include "fmcSGrammar.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct FmcSGrammarStaticData final {
  FmcSGrammarStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FmcSGrammarStaticData(const FmcSGrammarStaticData&) = delete;
  FmcSGrammarStaticData(FmcSGrammarStaticData&&) = delete;
  FmcSGrammarStaticData& operator=(const FmcSGrammarStaticData&) = delete;
  FmcSGrammarStaticData& operator=(FmcSGrammarStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fmcsgrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<FmcSGrammarStaticData> fmcsgrammarParserStaticData = nullptr;

void fmcsgrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (fmcsgrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(fmcsgrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FmcSGrammarStaticData>(
    std::vector<std::string>{
      "lit", "var", "binder", "app", "abs", "locApp", "locAbs", "cond", 
      "conds", "term", "include", "function", "program"
    },
    std::vector<std::string>{
      "", "'='", "','", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
      "'<'", "'>'", "'#'", "'@'", "'*'", "'.'", "'->'", "'_'", "'\"'", "'default'", 
      "'include'"
    },
    std::vector<std::string>{
      "", "EQ", "COMMA", "SEMI", "LPAREN", "RPAREN", "LCURLY", "RCURLY", 
      "LSQUARE", "RSQUARE", "LTRIAN", "RTRIAN", "HASH", "AT", "STAR", "DOT", 
      "ARROW", "UNDERSCORE", "QUOTE", "DEFAULT", "INCLUDE", "INT", "STR", 
      "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,24,274,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,1,1,1,
  	2,1,2,1,3,1,3,1,3,1,3,3,3,37,8,3,1,3,1,3,1,3,1,3,3,3,43,8,3,3,3,45,8,
  	3,1,4,3,4,48,8,4,1,4,1,4,1,4,1,4,1,4,3,4,55,8,4,1,4,1,4,1,4,3,4,60,8,
  	4,1,5,1,5,1,5,1,5,1,5,3,5,67,8,5,1,6,3,6,70,8,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,3,6,78,8,6,1,6,1,6,1,6,3,6,83,8,6,1,7,1,7,5,7,87,8,7,10,7,12,7,90,9,
  	7,1,7,1,7,5,7,94,8,7,10,7,12,7,97,9,7,1,7,1,7,1,8,3,8,102,8,8,1,8,1,8,
  	1,8,1,8,5,8,108,8,8,10,8,12,8,111,9,8,1,8,1,8,1,9,1,9,1,9,5,9,118,8,9,
  	10,9,12,9,121,9,9,1,9,1,9,5,9,125,8,9,10,9,12,9,128,9,9,1,9,3,9,131,8,
  	9,1,9,1,9,5,9,135,8,9,10,9,12,9,138,9,9,1,9,1,9,5,9,142,8,9,10,9,12,9,
  	145,9,9,1,9,3,9,148,8,9,1,9,1,9,5,9,152,8,9,10,9,12,9,155,9,9,1,9,1,9,
  	5,9,159,8,9,10,9,12,9,162,9,9,1,9,3,9,165,8,9,1,9,1,9,5,9,169,8,9,10,
  	9,12,9,172,9,9,1,9,1,9,5,9,176,8,9,10,9,12,9,179,9,9,1,9,3,9,182,8,9,
  	1,9,1,9,5,9,186,8,9,10,9,12,9,189,9,9,1,9,1,9,5,9,193,8,9,10,9,12,9,196,
  	9,9,1,9,3,9,199,8,9,1,9,1,9,5,9,203,8,9,10,9,12,9,206,9,9,1,9,1,9,5,9,
  	210,8,9,10,9,12,9,213,9,9,1,9,3,9,216,8,9,3,9,218,8,9,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,11,1,11,5,11,228,8,11,10,11,12,11,231,9,11,1,11,1,11,
  	5,11,235,8,11,10,11,12,11,238,9,11,1,11,1,11,5,11,242,8,11,10,11,12,11,
  	245,9,11,1,11,1,11,5,11,249,8,11,10,11,12,11,252,9,11,1,11,1,11,1,12,
  	5,12,257,8,12,10,12,12,12,260,9,12,1,12,5,12,263,8,12,10,12,12,12,266,
  	9,12,1,12,5,12,269,8,12,10,12,12,12,272,9,12,1,12,0,0,13,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,0,1,1,0,21,22,305,0,26,1,0,0,0,2,28,1,0,0,0,4,30,
  	1,0,0,0,6,44,1,0,0,0,8,59,1,0,0,0,10,61,1,0,0,0,12,82,1,0,0,0,14,84,1,
  	0,0,0,16,101,1,0,0,0,18,217,1,0,0,0,20,219,1,0,0,0,22,225,1,0,0,0,24,
  	258,1,0,0,0,26,27,7,0,0,0,27,1,1,0,0,0,28,29,5,23,0,0,29,3,1,0,0,0,30,
  	31,5,23,0,0,31,5,1,0,0,0,32,33,5,8,0,0,33,34,3,18,9,0,34,36,5,9,0,0,35,
  	37,3,2,1,0,36,35,1,0,0,0,36,37,1,0,0,0,37,45,1,0,0,0,38,39,5,8,0,0,39,
  	40,3,0,0,0,40,42,5,9,0,0,41,43,3,2,1,0,42,41,1,0,0,0,42,43,1,0,0,0,43,
  	45,1,0,0,0,44,32,1,0,0,0,44,38,1,0,0,0,45,7,1,0,0,0,46,48,3,2,1,0,47,
  	46,1,0,0,0,47,48,1,0,0,0,48,49,1,0,0,0,49,50,5,10,0,0,50,51,3,4,2,0,51,
  	52,5,11,0,0,52,60,1,0,0,0,53,55,3,2,1,0,54,53,1,0,0,0,54,55,1,0,0,0,55,
  	56,1,0,0,0,56,57,5,10,0,0,57,58,5,17,0,0,58,60,5,11,0,0,59,47,1,0,0,0,
  	59,54,1,0,0,0,60,9,1,0,0,0,61,62,5,8,0,0,62,63,5,12,0,0,63,64,3,2,1,0,
  	64,66,5,9,0,0,65,67,3,2,1,0,66,65,1,0,0,0,66,67,1,0,0,0,67,11,1,0,0,0,
  	68,70,3,2,1,0,69,68,1,0,0,0,69,70,1,0,0,0,70,71,1,0,0,0,71,72,5,10,0,
  	0,72,73,5,13,0,0,73,74,3,4,2,0,74,75,5,11,0,0,75,83,1,0,0,0,76,78,3,2,
  	1,0,77,76,1,0,0,0,77,78,1,0,0,0,78,79,1,0,0,0,79,80,5,10,0,0,80,81,5,
  	17,0,0,81,83,5,11,0,0,82,69,1,0,0,0,82,77,1,0,0,0,83,13,1,0,0,0,84,88,
  	3,2,1,0,85,87,5,24,0,0,86,85,1,0,0,0,87,90,1,0,0,0,88,86,1,0,0,0,88,89,
  	1,0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,95,5,16,0,0,92,94,5,24,0,0,93,
  	92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,96,1,0,0,0,96,98,1,0,0,0,97,
  	95,1,0,0,0,98,99,3,18,9,0,99,15,1,0,0,0,100,102,3,2,1,0,101,100,1,0,0,
  	0,101,102,1,0,0,0,102,103,1,0,0,0,103,104,5,6,0,0,104,109,3,14,7,0,105,
  	106,5,2,0,0,106,108,3,14,7,0,107,105,1,0,0,0,108,111,1,0,0,0,109,107,
  	1,0,0,0,109,110,1,0,0,0,110,112,1,0,0,0,111,109,1,0,0,0,112,113,5,7,0,
  	0,113,17,1,0,0,0,114,218,5,14,0,0,115,130,3,2,1,0,116,118,5,24,0,0,117,
  	116,1,0,0,0,118,121,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,1,
  	0,0,0,121,119,1,0,0,0,122,126,5,15,0,0,123,125,5,24,0,0,124,123,1,0,0,
  	0,125,128,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,129,1,0,0,0,128,
  	126,1,0,0,0,129,131,3,18,9,0,130,119,1,0,0,0,130,131,1,0,0,0,131,218,
  	1,0,0,0,132,147,3,6,3,0,133,135,5,24,0,0,134,133,1,0,0,0,135,138,1,0,
  	0,0,136,134,1,0,0,0,136,137,1,0,0,0,137,139,1,0,0,0,138,136,1,0,0,0,139,
  	143,5,15,0,0,140,142,5,24,0,0,141,140,1,0,0,0,142,145,1,0,0,0,143,141,
  	1,0,0,0,143,144,1,0,0,0,144,146,1,0,0,0,145,143,1,0,0,0,146,148,3,18,
  	9,0,147,136,1,0,0,0,147,148,1,0,0,0,148,218,1,0,0,0,149,164,3,8,4,0,150,
  	152,5,24,0,0,151,150,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,
  	1,0,0,0,154,156,1,0,0,0,155,153,1,0,0,0,156,160,5,15,0,0,157,159,5,24,
  	0,0,158,157,1,0,0,0,159,162,1,0,0,0,160,158,1,0,0,0,160,161,1,0,0,0,161,
  	163,1,0,0,0,162,160,1,0,0,0,163,165,3,18,9,0,164,153,1,0,0,0,164,165,
  	1,0,0,0,165,218,1,0,0,0,166,181,3,10,5,0,167,169,5,24,0,0,168,167,1,0,
  	0,0,169,172,1,0,0,0,170,168,1,0,0,0,170,171,1,0,0,0,171,173,1,0,0,0,172,
  	170,1,0,0,0,173,177,5,15,0,0,174,176,5,24,0,0,175,174,1,0,0,0,176,179,
  	1,0,0,0,177,175,1,0,0,0,177,178,1,0,0,0,178,180,1,0,0,0,179,177,1,0,0,
  	0,180,182,3,18,9,0,181,170,1,0,0,0,181,182,1,0,0,0,182,218,1,0,0,0,183,
  	198,3,12,6,0,184,186,5,24,0,0,185,184,1,0,0,0,186,189,1,0,0,0,187,185,
  	1,0,0,0,187,188,1,0,0,0,188,190,1,0,0,0,189,187,1,0,0,0,190,194,5,15,
  	0,0,191,193,5,24,0,0,192,191,1,0,0,0,193,196,1,0,0,0,194,192,1,0,0,0,
  	194,195,1,0,0,0,195,197,1,0,0,0,196,194,1,0,0,0,197,199,3,18,9,0,198,
  	187,1,0,0,0,198,199,1,0,0,0,199,218,1,0,0,0,200,215,3,16,8,0,201,203,
  	5,24,0,0,202,201,1,0,0,0,203,206,1,0,0,0,204,202,1,0,0,0,204,205,1,0,
  	0,0,205,207,1,0,0,0,206,204,1,0,0,0,207,211,5,15,0,0,208,210,5,24,0,0,
  	209,208,1,0,0,0,210,213,1,0,0,0,211,209,1,0,0,0,211,212,1,0,0,0,212,214,
  	1,0,0,0,213,211,1,0,0,0,214,216,3,18,9,0,215,204,1,0,0,0,215,216,1,0,
  	0,0,216,218,1,0,0,0,217,114,1,0,0,0,217,115,1,0,0,0,217,132,1,0,0,0,217,
  	149,1,0,0,0,217,166,1,0,0,0,217,183,1,0,0,0,217,200,1,0,0,0,218,19,1,
  	0,0,0,219,220,5,12,0,0,220,221,5,20,0,0,221,222,5,18,0,0,222,223,5,23,
  	0,0,223,224,5,18,0,0,224,21,1,0,0,0,225,229,5,23,0,0,226,228,5,24,0,0,
  	227,226,1,0,0,0,228,231,1,0,0,0,229,227,1,0,0,0,229,230,1,0,0,0,230,232,
  	1,0,0,0,231,229,1,0,0,0,232,236,5,1,0,0,233,235,5,24,0,0,234,233,1,0,
  	0,0,235,238,1,0,0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,239,1,0,0,0,238,
  	236,1,0,0,0,239,243,5,4,0,0,240,242,5,24,0,0,241,240,1,0,0,0,242,245,
  	1,0,0,0,243,241,1,0,0,0,243,244,1,0,0,0,244,246,1,0,0,0,245,243,1,0,0,
  	0,246,250,3,18,9,0,247,249,5,24,0,0,248,247,1,0,0,0,249,252,1,0,0,0,250,
  	248,1,0,0,0,250,251,1,0,0,0,251,253,1,0,0,0,252,250,1,0,0,0,253,254,5,
  	5,0,0,254,23,1,0,0,0,255,257,3,20,10,0,256,255,1,0,0,0,257,260,1,0,0,
  	0,258,256,1,0,0,0,258,259,1,0,0,0,259,264,1,0,0,0,260,258,1,0,0,0,261,
  	263,5,24,0,0,262,261,1,0,0,0,263,266,1,0,0,0,264,262,1,0,0,0,264,265,
  	1,0,0,0,265,270,1,0,0,0,266,264,1,0,0,0,267,269,3,22,11,0,268,267,1,0,
  	0,0,269,272,1,0,0,0,270,268,1,0,0,0,270,271,1,0,0,0,271,25,1,0,0,0,272,
  	270,1,0,0,0,40,36,42,44,47,54,59,66,69,77,82,88,95,101,109,119,126,130,
  	136,143,147,153,160,164,170,177,181,187,194,198,204,211,215,217,229,236,
  	243,250,258,264,270
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fmcsgrammarParserStaticData = std::move(staticData);
}

}

fmcSGrammar::fmcSGrammar(TokenStream *input) : fmcSGrammar(input, antlr4::atn::ParserATNSimulatorOptions()) {}

fmcSGrammar::fmcSGrammar(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  fmcSGrammar::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *fmcsgrammarParserStaticData->atn, fmcsgrammarParserStaticData->decisionToDFA, fmcsgrammarParserStaticData->sharedContextCache, options);
}

fmcSGrammar::~fmcSGrammar() {
  delete _interpreter;
}

const atn::ATN& fmcSGrammar::getATN() const {
  return *fmcsgrammarParserStaticData->atn;
}

std::string fmcSGrammar::getGrammarFileName() const {
  return "fmcSGrammar.g4";
}

const std::vector<std::string>& fmcSGrammar::getRuleNames() const {
  return fmcsgrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& fmcSGrammar::getVocabulary() const {
  return fmcsgrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView fmcSGrammar::getSerializedATN() const {
  return fmcsgrammarParserStaticData->serializedATN;
}


//----------------- LitContext ------------------------------------------------------------------

fmcSGrammar::LitContext::LitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::LitContext::INT() {
  return getToken(fmcSGrammar::INT, 0);
}

tree::TerminalNode* fmcSGrammar::LitContext::STR() {
  return getToken(fmcSGrammar::STR, 0);
}


size_t fmcSGrammar::LitContext::getRuleIndex() const {
  return fmcSGrammar::RuleLit;
}

void fmcSGrammar::LitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLit(this);
}

void fmcSGrammar::LitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLit(this);
}

fmcSGrammar::LitContext* fmcSGrammar::lit() {
  LitContext *_localctx = _tracker.createInstance<LitContext>(_ctx, getState());
  enterRule(_localctx, 0, fmcSGrammar::RuleLit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(26);
    _la = _input->LA(1);
    if (!(_la == fmcSGrammar::INT

    || _la == fmcSGrammar::STR)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

fmcSGrammar::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::VarContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}


size_t fmcSGrammar::VarContext::getRuleIndex() const {
  return fmcSGrammar::RuleVar;
}

void fmcSGrammar::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void fmcSGrammar::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

fmcSGrammar::VarContext* fmcSGrammar::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 2, fmcSGrammar::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(28);
    match(fmcSGrammar::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BinderContext ------------------------------------------------------------------

fmcSGrammar::BinderContext::BinderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::BinderContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}


size_t fmcSGrammar::BinderContext::getRuleIndex() const {
  return fmcSGrammar::RuleBinder;
}

void fmcSGrammar::BinderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBinder(this);
}

void fmcSGrammar::BinderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBinder(this);
}

fmcSGrammar::BinderContext* fmcSGrammar::binder() {
  BinderContext *_localctx = _tracker.createInstance<BinderContext>(_ctx, getState());
  enterRule(_localctx, 4, fmcSGrammar::RuleBinder);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(30);
    match(fmcSGrammar::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AppContext ------------------------------------------------------------------

fmcSGrammar::AppContext::AppContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::AppContext::LSQUARE() {
  return getToken(fmcSGrammar::LSQUARE, 0);
}

fmcSGrammar::TermContext* fmcSGrammar::AppContext::term() {
  return getRuleContext<fmcSGrammar::TermContext>(0);
}

tree::TerminalNode* fmcSGrammar::AppContext::RSQUARE() {
  return getToken(fmcSGrammar::RSQUARE, 0);
}

fmcSGrammar::VarContext* fmcSGrammar::AppContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

fmcSGrammar::LitContext* fmcSGrammar::AppContext::lit() {
  return getRuleContext<fmcSGrammar::LitContext>(0);
}


size_t fmcSGrammar::AppContext::getRuleIndex() const {
  return fmcSGrammar::RuleApp;
}

void fmcSGrammar::AppContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterApp(this);
}

void fmcSGrammar::AppContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitApp(this);
}

fmcSGrammar::AppContext* fmcSGrammar::app() {
  AppContext *_localctx = _tracker.createInstance<AppContext>(_ctx, getState());
  enterRule(_localctx, 6, fmcSGrammar::RuleApp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      match(fmcSGrammar::LSQUARE);
      setState(33);
      term();
      setState(34);
      match(fmcSGrammar::RSQUARE);
      setState(36);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(35);
        var();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(38);
      match(fmcSGrammar::LSQUARE);
      setState(39);
      lit();
      setState(40);
      match(fmcSGrammar::RSQUARE);
      setState(42);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(41);
        var();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbsContext ------------------------------------------------------------------

fmcSGrammar::AbsContext::AbsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::AbsContext::LTRIAN() {
  return getToken(fmcSGrammar::LTRIAN, 0);
}

fmcSGrammar::BinderContext* fmcSGrammar::AbsContext::binder() {
  return getRuleContext<fmcSGrammar::BinderContext>(0);
}

tree::TerminalNode* fmcSGrammar::AbsContext::RTRIAN() {
  return getToken(fmcSGrammar::RTRIAN, 0);
}

fmcSGrammar::VarContext* fmcSGrammar::AbsContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

tree::TerminalNode* fmcSGrammar::AbsContext::UNDERSCORE() {
  return getToken(fmcSGrammar::UNDERSCORE, 0);
}


size_t fmcSGrammar::AbsContext::getRuleIndex() const {
  return fmcSGrammar::RuleAbs;
}

void fmcSGrammar::AbsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbs(this);
}

void fmcSGrammar::AbsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbs(this);
}

fmcSGrammar::AbsContext* fmcSGrammar::abs() {
  AbsContext *_localctx = _tracker.createInstance<AbsContext>(_ctx, getState());
  enterRule(_localctx, 8, fmcSGrammar::RuleAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(46);
        var();
      }
      setState(49);
      match(fmcSGrammar::LTRIAN);
      setState(50);
      binder();
      setState(51);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(54);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(53);
        var();
      }
      setState(56);
      match(fmcSGrammar::LTRIAN);
      setState(57);
      match(fmcSGrammar::UNDERSCORE);
      setState(58);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocAppContext ------------------------------------------------------------------

fmcSGrammar::LocAppContext::LocAppContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::LocAppContext::LSQUARE() {
  return getToken(fmcSGrammar::LSQUARE, 0);
}

tree::TerminalNode* fmcSGrammar::LocAppContext::HASH() {
  return getToken(fmcSGrammar::HASH, 0);
}

std::vector<fmcSGrammar::VarContext *> fmcSGrammar::LocAppContext::var() {
  return getRuleContexts<fmcSGrammar::VarContext>();
}

fmcSGrammar::VarContext* fmcSGrammar::LocAppContext::var(size_t i) {
  return getRuleContext<fmcSGrammar::VarContext>(i);
}

tree::TerminalNode* fmcSGrammar::LocAppContext::RSQUARE() {
  return getToken(fmcSGrammar::RSQUARE, 0);
}


size_t fmcSGrammar::LocAppContext::getRuleIndex() const {
  return fmcSGrammar::RuleLocApp;
}

void fmcSGrammar::LocAppContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocApp(this);
}

void fmcSGrammar::LocAppContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocApp(this);
}

fmcSGrammar::LocAppContext* fmcSGrammar::locApp() {
  LocAppContext *_localctx = _tracker.createInstance<LocAppContext>(_ctx, getState());
  enterRule(_localctx, 10, fmcSGrammar::RuleLocApp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61);
    match(fmcSGrammar::LSQUARE);
    setState(62);
    match(fmcSGrammar::HASH);
    setState(63);
    var();
    setState(64);
    match(fmcSGrammar::RSQUARE);
    setState(66);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(65);
      var();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LocAbsContext ------------------------------------------------------------------

fmcSGrammar::LocAbsContext::LocAbsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::LocAbsContext::LTRIAN() {
  return getToken(fmcSGrammar::LTRIAN, 0);
}

tree::TerminalNode* fmcSGrammar::LocAbsContext::AT() {
  return getToken(fmcSGrammar::AT, 0);
}

fmcSGrammar::BinderContext* fmcSGrammar::LocAbsContext::binder() {
  return getRuleContext<fmcSGrammar::BinderContext>(0);
}

tree::TerminalNode* fmcSGrammar::LocAbsContext::RTRIAN() {
  return getToken(fmcSGrammar::RTRIAN, 0);
}

fmcSGrammar::VarContext* fmcSGrammar::LocAbsContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

tree::TerminalNode* fmcSGrammar::LocAbsContext::UNDERSCORE() {
  return getToken(fmcSGrammar::UNDERSCORE, 0);
}


size_t fmcSGrammar::LocAbsContext::getRuleIndex() const {
  return fmcSGrammar::RuleLocAbs;
}

void fmcSGrammar::LocAbsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLocAbs(this);
}

void fmcSGrammar::LocAbsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLocAbs(this);
}

fmcSGrammar::LocAbsContext* fmcSGrammar::locAbs() {
  LocAbsContext *_localctx = _tracker.createInstance<LocAbsContext>(_ctx, getState());
  enterRule(_localctx, 12, fmcSGrammar::RuleLocAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(69);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(68);
        var();
      }
      setState(71);
      match(fmcSGrammar::LTRIAN);
      setState(72);
      match(fmcSGrammar::AT);
      setState(73);
      binder();
      setState(74);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(76);
        var();
      }
      setState(79);
      match(fmcSGrammar::LTRIAN);
      setState(80);
      match(fmcSGrammar::UNDERSCORE);
      setState(81);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

fmcSGrammar::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

fmcSGrammar::VarContext* fmcSGrammar::CondContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

tree::TerminalNode* fmcSGrammar::CondContext::ARROW() {
  return getToken(fmcSGrammar::ARROW, 0);
}

fmcSGrammar::TermContext* fmcSGrammar::CondContext::term() {
  return getRuleContext<fmcSGrammar::TermContext>(0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::CondContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::CondContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}


size_t fmcSGrammar::CondContext::getRuleIndex() const {
  return fmcSGrammar::RuleCond;
}

void fmcSGrammar::CondContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCond(this);
}

void fmcSGrammar::CondContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCond(this);
}

fmcSGrammar::CondContext* fmcSGrammar::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 14, fmcSGrammar::RuleCond);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    var();
    setState(88);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(85);
      match(fmcSGrammar::WS);
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(91);
    match(fmcSGrammar::ARROW);
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(92);
      match(fmcSGrammar::WS);
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(98);
    term();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondsContext ------------------------------------------------------------------

fmcSGrammar::CondsContext::CondsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::CondsContext::LCURLY() {
  return getToken(fmcSGrammar::LCURLY, 0);
}

std::vector<fmcSGrammar::CondContext *> fmcSGrammar::CondsContext::cond() {
  return getRuleContexts<fmcSGrammar::CondContext>();
}

fmcSGrammar::CondContext* fmcSGrammar::CondsContext::cond(size_t i) {
  return getRuleContext<fmcSGrammar::CondContext>(i);
}

tree::TerminalNode* fmcSGrammar::CondsContext::RCURLY() {
  return getToken(fmcSGrammar::RCURLY, 0);
}

fmcSGrammar::VarContext* fmcSGrammar::CondsContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::CondsContext::COMMA() {
  return getTokens(fmcSGrammar::COMMA);
}

tree::TerminalNode* fmcSGrammar::CondsContext::COMMA(size_t i) {
  return getToken(fmcSGrammar::COMMA, i);
}


size_t fmcSGrammar::CondsContext::getRuleIndex() const {
  return fmcSGrammar::RuleConds;
}

void fmcSGrammar::CondsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConds(this);
}

void fmcSGrammar::CondsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConds(this);
}

fmcSGrammar::CondsContext* fmcSGrammar::conds() {
  CondsContext *_localctx = _tracker.createInstance<CondsContext>(_ctx, getState());
  enterRule(_localctx, 16, fmcSGrammar::RuleConds);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(100);
      var();
    }
    setState(103);
    match(fmcSGrammar::LCURLY);
    setState(104);
    cond();
    setState(109);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::COMMA) {
      setState(105);
      match(fmcSGrammar::COMMA);
      setState(106);
      cond();
      setState(111);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    match(fmcSGrammar::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

fmcSGrammar::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::TermContext::STAR() {
  return getToken(fmcSGrammar::STAR, 0);
}

fmcSGrammar::VarContext* fmcSGrammar::TermContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

tree::TerminalNode* fmcSGrammar::TermContext::DOT() {
  return getToken(fmcSGrammar::DOT, 0);
}

fmcSGrammar::TermContext* fmcSGrammar::TermContext::term() {
  return getRuleContext<fmcSGrammar::TermContext>(0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::TermContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::TermContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}

fmcSGrammar::AppContext* fmcSGrammar::TermContext::app() {
  return getRuleContext<fmcSGrammar::AppContext>(0);
}

fmcSGrammar::AbsContext* fmcSGrammar::TermContext::abs() {
  return getRuleContext<fmcSGrammar::AbsContext>(0);
}

fmcSGrammar::LocAppContext* fmcSGrammar::TermContext::locApp() {
  return getRuleContext<fmcSGrammar::LocAppContext>(0);
}

fmcSGrammar::LocAbsContext* fmcSGrammar::TermContext::locAbs() {
  return getRuleContext<fmcSGrammar::LocAbsContext>(0);
}

fmcSGrammar::CondsContext* fmcSGrammar::TermContext::conds() {
  return getRuleContext<fmcSGrammar::CondsContext>(0);
}


size_t fmcSGrammar::TermContext::getRuleIndex() const {
  return fmcSGrammar::RuleTerm;
}

void fmcSGrammar::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void fmcSGrammar::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}

fmcSGrammar::TermContext* fmcSGrammar::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 18, fmcSGrammar::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(114);
      match(fmcSGrammar::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(115);
      var();
      setState(130);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(119);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(116);
          match(fmcSGrammar::WS);
          setState(121);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(122);
        match(fmcSGrammar::DOT);
        setState(126);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(123);
          match(fmcSGrammar::WS);
          setState(128);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(129);
        term();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(132);
      app();
      setState(147);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(136);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(133);
          match(fmcSGrammar::WS);
          setState(138);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(139);
        match(fmcSGrammar::DOT);
        setState(143);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(140);
          match(fmcSGrammar::WS);
          setState(145);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(146);
        term();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(149);
      abs();
      setState(164);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(153);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(150);
          match(fmcSGrammar::WS);
          setState(155);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(156);
        match(fmcSGrammar::DOT);
        setState(160);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(157);
          match(fmcSGrammar::WS);
          setState(162);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(163);
        term();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(166);
      locApp();
      setState(181);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(170);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(167);
          match(fmcSGrammar::WS);
          setState(172);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(173);
        match(fmcSGrammar::DOT);
        setState(177);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(174);
          match(fmcSGrammar::WS);
          setState(179);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(180);
        term();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(183);
      locAbs();
      setState(198);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(187);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(184);
          match(fmcSGrammar::WS);
          setState(189);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(190);
        match(fmcSGrammar::DOT);
        setState(194);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(191);
          match(fmcSGrammar::WS);
          setState(196);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(197);
        term();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(200);
      conds();
      setState(215);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(204);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(201);
          match(fmcSGrammar::WS);
          setState(206);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(207);
        match(fmcSGrammar::DOT);
        setState(211);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(208);
          match(fmcSGrammar::WS);
          setState(213);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(214);
        term();
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeContext ------------------------------------------------------------------

fmcSGrammar::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::IncludeContext::HASH() {
  return getToken(fmcSGrammar::HASH, 0);
}

tree::TerminalNode* fmcSGrammar::IncludeContext::INCLUDE() {
  return getToken(fmcSGrammar::INCLUDE, 0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::IncludeContext::QUOTE() {
  return getTokens(fmcSGrammar::QUOTE);
}

tree::TerminalNode* fmcSGrammar::IncludeContext::QUOTE(size_t i) {
  return getToken(fmcSGrammar::QUOTE, i);
}

tree::TerminalNode* fmcSGrammar::IncludeContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}


size_t fmcSGrammar::IncludeContext::getRuleIndex() const {
  return fmcSGrammar::RuleInclude;
}

void fmcSGrammar::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void fmcSGrammar::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}

fmcSGrammar::IncludeContext* fmcSGrammar::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 20, fmcSGrammar::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(fmcSGrammar::HASH);
    setState(220);
    match(fmcSGrammar::INCLUDE);
    setState(221);
    match(fmcSGrammar::QUOTE);
    setState(222);
    match(fmcSGrammar::ID);
    setState(223);
    match(fmcSGrammar::QUOTE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

fmcSGrammar::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::FunctionContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}

tree::TerminalNode* fmcSGrammar::FunctionContext::EQ() {
  return getToken(fmcSGrammar::EQ, 0);
}

tree::TerminalNode* fmcSGrammar::FunctionContext::LPAREN() {
  return getToken(fmcSGrammar::LPAREN, 0);
}

fmcSGrammar::TermContext* fmcSGrammar::FunctionContext::term() {
  return getRuleContext<fmcSGrammar::TermContext>(0);
}

tree::TerminalNode* fmcSGrammar::FunctionContext::RPAREN() {
  return getToken(fmcSGrammar::RPAREN, 0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::FunctionContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::FunctionContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}


size_t fmcSGrammar::FunctionContext::getRuleIndex() const {
  return fmcSGrammar::RuleFunction;
}

void fmcSGrammar::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void fmcSGrammar::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

fmcSGrammar::FunctionContext* fmcSGrammar::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 22, fmcSGrammar::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(fmcSGrammar::ID);
    setState(229);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(226);
      match(fmcSGrammar::WS);
      setState(231);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(232);
    match(fmcSGrammar::EQ);
    setState(236);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(233);
      match(fmcSGrammar::WS);
      setState(238);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(239);
    match(fmcSGrammar::LPAREN);
    setState(243);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(240);
      match(fmcSGrammar::WS);
      setState(245);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(246);
    term();
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(247);
      match(fmcSGrammar::WS);
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(253);
    match(fmcSGrammar::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

fmcSGrammar::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<fmcSGrammar::IncludeContext *> fmcSGrammar::ProgramContext::include() {
  return getRuleContexts<fmcSGrammar::IncludeContext>();
}

fmcSGrammar::IncludeContext* fmcSGrammar::ProgramContext::include(size_t i) {
  return getRuleContext<fmcSGrammar::IncludeContext>(i);
}

std::vector<tree::TerminalNode *> fmcSGrammar::ProgramContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::ProgramContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}

std::vector<fmcSGrammar::FunctionContext *> fmcSGrammar::ProgramContext::function() {
  return getRuleContexts<fmcSGrammar::FunctionContext>();
}

fmcSGrammar::FunctionContext* fmcSGrammar::ProgramContext::function(size_t i) {
  return getRuleContext<fmcSGrammar::FunctionContext>(i);
}


size_t fmcSGrammar::ProgramContext::getRuleIndex() const {
  return fmcSGrammar::RuleProgram;
}

void fmcSGrammar::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void fmcSGrammar::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

fmcSGrammar::ProgramContext* fmcSGrammar::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 24, fmcSGrammar::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::HASH) {
      setState(255);
      include();
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(264);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(261);
      match(fmcSGrammar::WS);
      setState(266);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(270);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::ID) {
      setState(267);
      function();
      setState(272);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void fmcSGrammar::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  fmcsgrammarParserInitialize();
#else
  ::antlr4::internal::call_once(fmcsgrammarParserOnceFlag, fmcsgrammarParserInitialize);
#endif
}
