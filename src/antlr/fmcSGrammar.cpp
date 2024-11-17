
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
      "conds", "term", "function", "program"
    },
    std::vector<std::string>{
      "", "'='", "','", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
      "'<'", "'>'", "'#'", "'@'", "'*'", "'.'", "'->'", "'_'", "'\"'", "'default'"
    },
    std::vector<std::string>{
      "", "EQ", "COMMA", "SEMI", "LPAREN", "RPAREN", "LCURLY", "RCURLY", 
      "LSQUARE", "RSQUARE", "LTRIAN", "RTRIAN", "HASH", "AT", "STAR", "DOT", 
      "ARROW", "UNDERSCORE", "QUOTE", "DEFAULT", "INT", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,22,258,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,1,0,1,0,3,0,29,8,0,
  	1,1,1,1,1,2,1,2,1,3,1,3,1,3,1,3,3,3,39,8,3,1,3,1,3,1,3,1,3,3,3,45,8,3,
  	3,3,47,8,3,1,4,3,4,50,8,4,1,4,1,4,1,4,1,4,1,4,3,4,57,8,4,1,4,1,4,1,4,
  	3,4,62,8,4,1,5,1,5,1,5,1,5,1,5,3,5,69,8,5,1,6,3,6,72,8,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,3,6,80,8,6,1,6,1,6,1,6,3,6,85,8,6,1,7,1,7,5,7,89,8,7,10,7,
  	12,7,92,9,7,1,7,1,7,5,7,96,8,7,10,7,12,7,99,9,7,1,7,1,7,1,8,3,8,104,8,
  	8,1,8,1,8,1,8,1,8,5,8,110,8,8,10,8,12,8,113,9,8,1,8,1,8,1,9,1,9,1,9,5,
  	9,120,8,9,10,9,12,9,123,9,9,1,9,1,9,5,9,127,8,9,10,9,12,9,130,9,9,1,9,
  	3,9,133,8,9,1,9,1,9,5,9,137,8,9,10,9,12,9,140,9,9,1,9,1,9,5,9,144,8,9,
  	10,9,12,9,147,9,9,1,9,3,9,150,8,9,1,9,1,9,5,9,154,8,9,10,9,12,9,157,9,
  	9,1,9,1,9,5,9,161,8,9,10,9,12,9,164,9,9,1,9,3,9,167,8,9,1,9,1,9,5,9,171,
  	8,9,10,9,12,9,174,9,9,1,9,1,9,5,9,178,8,9,10,9,12,9,181,9,9,1,9,3,9,184,
  	8,9,1,9,1,9,5,9,188,8,9,10,9,12,9,191,9,9,1,9,1,9,5,9,195,8,9,10,9,12,
  	9,198,9,9,1,9,3,9,201,8,9,1,9,1,9,5,9,205,8,9,10,9,12,9,208,9,9,1,9,1,
  	9,5,9,212,8,9,10,9,12,9,215,9,9,1,9,3,9,218,8,9,3,9,220,8,9,1,10,1,10,
  	5,10,224,8,10,10,10,12,10,227,9,10,1,10,1,10,5,10,231,8,10,10,10,12,10,
  	234,9,10,1,10,1,10,5,10,238,8,10,10,10,12,10,241,9,10,1,10,1,10,5,10,
  	245,8,10,10,10,12,10,248,9,10,1,10,1,10,1,11,5,11,253,8,11,10,11,12,11,
  	256,9,11,1,11,0,0,12,0,2,4,6,8,10,12,14,16,18,20,22,0,0,289,0,28,1,0,
  	0,0,2,30,1,0,0,0,4,32,1,0,0,0,6,46,1,0,0,0,8,61,1,0,0,0,10,63,1,0,0,0,
  	12,84,1,0,0,0,14,86,1,0,0,0,16,103,1,0,0,0,18,219,1,0,0,0,20,221,1,0,
  	0,0,22,254,1,0,0,0,24,29,5,20,0,0,25,26,5,18,0,0,26,27,5,21,0,0,27,29,
  	5,18,0,0,28,24,1,0,0,0,28,25,1,0,0,0,29,1,1,0,0,0,30,31,5,21,0,0,31,3,
  	1,0,0,0,32,33,5,21,0,0,33,5,1,0,0,0,34,35,5,8,0,0,35,36,3,18,9,0,36,38,
  	5,9,0,0,37,39,3,2,1,0,38,37,1,0,0,0,38,39,1,0,0,0,39,47,1,0,0,0,40,41,
  	5,8,0,0,41,42,3,0,0,0,42,44,5,9,0,0,43,45,3,2,1,0,44,43,1,0,0,0,44,45,
  	1,0,0,0,45,47,1,0,0,0,46,34,1,0,0,0,46,40,1,0,0,0,47,7,1,0,0,0,48,50,
  	3,2,1,0,49,48,1,0,0,0,49,50,1,0,0,0,50,51,1,0,0,0,51,52,5,10,0,0,52,53,
  	3,4,2,0,53,54,5,11,0,0,54,62,1,0,0,0,55,57,3,2,1,0,56,55,1,0,0,0,56,57,
  	1,0,0,0,57,58,1,0,0,0,58,59,5,10,0,0,59,60,5,17,0,0,60,62,5,11,0,0,61,
  	49,1,0,0,0,61,56,1,0,0,0,62,9,1,0,0,0,63,64,5,8,0,0,64,65,5,12,0,0,65,
  	66,3,2,1,0,66,68,5,9,0,0,67,69,3,2,1,0,68,67,1,0,0,0,68,69,1,0,0,0,69,
  	11,1,0,0,0,70,72,3,2,1,0,71,70,1,0,0,0,71,72,1,0,0,0,72,73,1,0,0,0,73,
  	74,5,10,0,0,74,75,5,13,0,0,75,76,3,4,2,0,76,77,5,11,0,0,77,85,1,0,0,0,
  	78,80,3,2,1,0,79,78,1,0,0,0,79,80,1,0,0,0,80,81,1,0,0,0,81,82,5,10,0,
  	0,82,83,5,17,0,0,83,85,5,11,0,0,84,71,1,0,0,0,84,79,1,0,0,0,85,13,1,0,
  	0,0,86,90,3,2,1,0,87,89,5,22,0,0,88,87,1,0,0,0,89,92,1,0,0,0,90,88,1,
  	0,0,0,90,91,1,0,0,0,91,93,1,0,0,0,92,90,1,0,0,0,93,97,5,16,0,0,94,96,
  	5,22,0,0,95,94,1,0,0,0,96,99,1,0,0,0,97,95,1,0,0,0,97,98,1,0,0,0,98,100,
  	1,0,0,0,99,97,1,0,0,0,100,101,3,18,9,0,101,15,1,0,0,0,102,104,3,2,1,0,
  	103,102,1,0,0,0,103,104,1,0,0,0,104,105,1,0,0,0,105,106,5,6,0,0,106,111,
  	3,14,7,0,107,108,5,2,0,0,108,110,3,14,7,0,109,107,1,0,0,0,110,113,1,0,
  	0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,114,1,0,0,0,113,111,1,0,0,0,114,
  	115,5,7,0,0,115,17,1,0,0,0,116,220,5,14,0,0,117,132,3,2,1,0,118,120,5,
  	22,0,0,119,118,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,1,0,0,
  	0,122,124,1,0,0,0,123,121,1,0,0,0,124,128,5,15,0,0,125,127,5,22,0,0,126,
  	125,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,131,1,
  	0,0,0,130,128,1,0,0,0,131,133,3,18,9,0,132,121,1,0,0,0,132,133,1,0,0,
  	0,133,220,1,0,0,0,134,149,3,6,3,0,135,137,5,22,0,0,136,135,1,0,0,0,137,
  	140,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,139,141,1,0,0,0,140,138,1,
  	0,0,0,141,145,5,15,0,0,142,144,5,22,0,0,143,142,1,0,0,0,144,147,1,0,0,
  	0,145,143,1,0,0,0,145,146,1,0,0,0,146,148,1,0,0,0,147,145,1,0,0,0,148,
  	150,3,18,9,0,149,138,1,0,0,0,149,150,1,0,0,0,150,220,1,0,0,0,151,166,
  	3,8,4,0,152,154,5,22,0,0,153,152,1,0,0,0,154,157,1,0,0,0,155,153,1,0,
  	0,0,155,156,1,0,0,0,156,158,1,0,0,0,157,155,1,0,0,0,158,162,5,15,0,0,
  	159,161,5,22,0,0,160,159,1,0,0,0,161,164,1,0,0,0,162,160,1,0,0,0,162,
  	163,1,0,0,0,163,165,1,0,0,0,164,162,1,0,0,0,165,167,3,18,9,0,166,155,
  	1,0,0,0,166,167,1,0,0,0,167,220,1,0,0,0,168,183,3,10,5,0,169,171,5,22,
  	0,0,170,169,1,0,0,0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,
  	175,1,0,0,0,174,172,1,0,0,0,175,179,5,15,0,0,176,178,5,22,0,0,177,176,
  	1,0,0,0,178,181,1,0,0,0,179,177,1,0,0,0,179,180,1,0,0,0,180,182,1,0,0,
  	0,181,179,1,0,0,0,182,184,3,18,9,0,183,172,1,0,0,0,183,184,1,0,0,0,184,
  	220,1,0,0,0,185,200,3,12,6,0,186,188,5,22,0,0,187,186,1,0,0,0,188,191,
  	1,0,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,192,1,0,0,0,191,189,1,0,0,
  	0,192,196,5,15,0,0,193,195,5,22,0,0,194,193,1,0,0,0,195,198,1,0,0,0,196,
  	194,1,0,0,0,196,197,1,0,0,0,197,199,1,0,0,0,198,196,1,0,0,0,199,201,3,
  	18,9,0,200,189,1,0,0,0,200,201,1,0,0,0,201,220,1,0,0,0,202,217,3,16,8,
  	0,203,205,5,22,0,0,204,203,1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,206,
  	207,1,0,0,0,207,209,1,0,0,0,208,206,1,0,0,0,209,213,5,15,0,0,210,212,
  	5,22,0,0,211,210,1,0,0,0,212,215,1,0,0,0,213,211,1,0,0,0,213,214,1,0,
  	0,0,214,216,1,0,0,0,215,213,1,0,0,0,216,218,3,18,9,0,217,206,1,0,0,0,
  	217,218,1,0,0,0,218,220,1,0,0,0,219,116,1,0,0,0,219,117,1,0,0,0,219,134,
  	1,0,0,0,219,151,1,0,0,0,219,168,1,0,0,0,219,185,1,0,0,0,219,202,1,0,0,
  	0,220,19,1,0,0,0,221,225,5,21,0,0,222,224,5,22,0,0,223,222,1,0,0,0,224,
  	227,1,0,0,0,225,223,1,0,0,0,225,226,1,0,0,0,226,228,1,0,0,0,227,225,1,
  	0,0,0,228,232,5,1,0,0,229,231,5,22,0,0,230,229,1,0,0,0,231,234,1,0,0,
  	0,232,230,1,0,0,0,232,233,1,0,0,0,233,235,1,0,0,0,234,232,1,0,0,0,235,
  	239,5,4,0,0,236,238,5,22,0,0,237,236,1,0,0,0,238,241,1,0,0,0,239,237,
  	1,0,0,0,239,240,1,0,0,0,240,242,1,0,0,0,241,239,1,0,0,0,242,246,3,18,
  	9,0,243,245,5,22,0,0,244,243,1,0,0,0,245,248,1,0,0,0,246,244,1,0,0,0,
  	246,247,1,0,0,0,247,249,1,0,0,0,248,246,1,0,0,0,249,250,5,5,0,0,250,21,
  	1,0,0,0,251,253,3,20,10,0,252,251,1,0,0,0,253,256,1,0,0,0,254,252,1,0,
  	0,0,254,255,1,0,0,0,255,23,1,0,0,0,256,254,1,0,0,0,39,28,38,44,46,49,
  	56,61,68,71,79,84,90,97,103,111,121,128,132,138,145,149,155,162,166,172,
  	179,183,189,196,200,206,213,217,219,225,232,239,246,254
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

std::vector<tree::TerminalNode *> fmcSGrammar::LitContext::QUOTE() {
  return getTokens(fmcSGrammar::QUOTE);
}

tree::TerminalNode* fmcSGrammar::LitContext::QUOTE(size_t i) {
  return getToken(fmcSGrammar::QUOTE, i);
}

tree::TerminalNode* fmcSGrammar::LitContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
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

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(28);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case fmcSGrammar::INT: {
        enterOuterAlt(_localctx, 1);
        setState(24);
        match(fmcSGrammar::INT);
        break;
      }

      case fmcSGrammar::QUOTE: {
        enterOuterAlt(_localctx, 2);
        setState(25);
        match(fmcSGrammar::QUOTE);
        setState(26);
        match(fmcSGrammar::ID);
        setState(27);
        match(fmcSGrammar::QUOTE);
        break;
      }

    default:
      throw NoViableAltException(this);
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
    setState(32);
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
    setState(46);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(34);
      match(fmcSGrammar::LSQUARE);
      setState(35);
      term();
      setState(36);
      match(fmcSGrammar::RSQUARE);
      setState(38);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(37);
        var();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(40);
      match(fmcSGrammar::LSQUARE);
      setState(41);
      lit();
      setState(42);
      match(fmcSGrammar::RSQUARE);
      setState(44);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(43);
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
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(49);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(48);
        var();
      }
      setState(51);
      match(fmcSGrammar::LTRIAN);
      setState(52);
      binder();
      setState(53);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(56);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(55);
        var();
      }
      setState(58);
      match(fmcSGrammar::LTRIAN);
      setState(59);
      match(fmcSGrammar::UNDERSCORE);
      setState(60);
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
    setState(63);
    match(fmcSGrammar::LSQUARE);
    setState(64);
    match(fmcSGrammar::HASH);
    setState(65);
    var();
    setState(66);
    match(fmcSGrammar::RSQUARE);
    setState(68);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(67);
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
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(70);
        var();
      }
      setState(73);
      match(fmcSGrammar::LTRIAN);
      setState(74);
      match(fmcSGrammar::AT);
      setState(75);
      binder();
      setState(76);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(78);
        var();
      }
      setState(81);
      match(fmcSGrammar::LTRIAN);
      setState(82);
      match(fmcSGrammar::UNDERSCORE);
      setState(83);
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
    setState(86);
    var();
    setState(90);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(87);
      match(fmcSGrammar::WS);
      setState(92);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(93);
    match(fmcSGrammar::ARROW);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(94);
      match(fmcSGrammar::WS);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(100);
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
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(102);
      var();
    }
    setState(105);
    match(fmcSGrammar::LCURLY);
    setState(106);
    cond();
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::COMMA) {
      setState(107);
      match(fmcSGrammar::COMMA);
      setState(108);
      cond();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(114);
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
    setState(219);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(116);
      match(fmcSGrammar::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(117);
      var();
      setState(132);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(121);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(118);
          match(fmcSGrammar::WS);
          setState(123);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(124);
        match(fmcSGrammar::DOT);
        setState(128);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(125);
          match(fmcSGrammar::WS);
          setState(130);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(131);
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
      setState(134);
      app();
      setState(149);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(138);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(135);
          match(fmcSGrammar::WS);
          setState(140);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(141);
        match(fmcSGrammar::DOT);
        setState(145);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(142);
          match(fmcSGrammar::WS);
          setState(147);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(148);
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
      setState(151);
      abs();
      setState(166);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(155);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(152);
          match(fmcSGrammar::WS);
          setState(157);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(158);
        match(fmcSGrammar::DOT);
        setState(162);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(159);
          match(fmcSGrammar::WS);
          setState(164);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(165);
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
      setState(168);
      locApp();
      setState(183);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(172);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(169);
          match(fmcSGrammar::WS);
          setState(174);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(175);
        match(fmcSGrammar::DOT);
        setState(179);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(176);
          match(fmcSGrammar::WS);
          setState(181);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(182);
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
      setState(185);
      locAbs();
      setState(200);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(189);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(186);
          match(fmcSGrammar::WS);
          setState(191);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(192);
        match(fmcSGrammar::DOT);
        setState(196);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(193);
          match(fmcSGrammar::WS);
          setState(198);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(199);
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
      setState(202);
      conds();
      setState(217);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(206);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(203);
          match(fmcSGrammar::WS);
          setState(208);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(209);
        match(fmcSGrammar::DOT);
        setState(213);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(210);
          match(fmcSGrammar::WS);
          setState(215);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(216);
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
  enterRule(_localctx, 20, fmcSGrammar::RuleFunction);
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
    setState(221);
    match(fmcSGrammar::ID);
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(222);
      match(fmcSGrammar::WS);
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(228);
    match(fmcSGrammar::EQ);
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(229);
      match(fmcSGrammar::WS);
      setState(234);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(235);
    match(fmcSGrammar::LPAREN);
    setState(239);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(236);
      match(fmcSGrammar::WS);
      setState(241);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(242);
    term();
    setState(246);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(243);
      match(fmcSGrammar::WS);
      setState(248);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(249);
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
  enterRule(_localctx, 22, fmcSGrammar::RuleProgram);
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
    setState(254);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::ID) {
      setState(251);
      function();
      setState(256);
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
