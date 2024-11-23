
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
      "lit", "var", "loc", "binder", "app", "abs", "locApp", "locAbs", "cond", 
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
  	4,1,24,303,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,3,4,41,8,4,1,4,1,4,1,4,1,4,3,
  	4,47,8,4,3,4,49,8,4,1,5,3,5,52,8,5,1,5,1,5,1,5,1,5,1,5,3,5,59,8,5,1,5,
  	1,5,1,5,3,5,64,8,5,1,6,1,6,1,6,1,6,1,6,3,6,71,8,6,1,7,3,7,74,8,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,3,7,82,8,7,1,7,1,7,1,7,3,7,87,8,7,1,8,1,8,5,8,91,
  	8,8,10,8,12,8,94,9,8,1,8,1,8,5,8,98,8,8,10,8,12,8,101,9,8,1,8,1,8,1,9,
  	3,9,106,8,9,1,9,1,9,5,9,110,8,9,10,9,12,9,113,9,9,1,9,1,9,5,9,117,8,9,
  	10,9,12,9,120,9,9,1,9,1,9,5,9,124,8,9,10,9,12,9,127,9,9,1,9,5,9,130,8,
  	9,10,9,12,9,133,9,9,1,9,1,9,5,9,137,8,9,10,9,12,9,140,9,9,1,9,1,9,1,10,
  	1,10,1,10,5,10,147,8,10,10,10,12,10,150,9,10,1,10,1,10,5,10,154,8,10,
  	10,10,12,10,157,9,10,1,10,3,10,160,8,10,1,10,1,10,5,10,164,8,10,10,10,
  	12,10,167,9,10,1,10,1,10,5,10,171,8,10,10,10,12,10,174,9,10,1,10,3,10,
  	177,8,10,1,10,1,10,5,10,181,8,10,10,10,12,10,184,9,10,1,10,1,10,5,10,
  	188,8,10,10,10,12,10,191,9,10,1,10,3,10,194,8,10,1,10,1,10,5,10,198,8,
  	10,10,10,12,10,201,9,10,1,10,1,10,5,10,205,8,10,10,10,12,10,208,9,10,
  	1,10,3,10,211,8,10,1,10,1,10,5,10,215,8,10,10,10,12,10,218,9,10,1,10,
  	1,10,5,10,222,8,10,10,10,12,10,225,9,10,1,10,3,10,228,8,10,1,10,1,10,
  	5,10,232,8,10,10,10,12,10,235,9,10,1,10,1,10,5,10,239,8,10,10,10,12,10,
  	242,9,10,1,10,3,10,245,8,10,3,10,247,8,10,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,12,1,12,5,12,257,8,12,10,12,12,12,260,9,12,1,12,1,12,5,12,264,8,
  	12,10,12,12,12,267,9,12,1,12,1,12,5,12,271,8,12,10,12,12,12,274,9,12,
  	1,12,1,12,5,12,278,8,12,10,12,12,12,281,9,12,1,12,1,12,1,13,5,13,286,
  	8,13,10,13,12,13,289,9,13,1,13,5,13,292,8,13,10,13,12,13,295,9,13,1,13,
  	5,13,298,8,13,10,13,12,13,301,9,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,0,1,1,0,21,22,337,0,28,1,0,0,0,2,30,1,0,0,0,4,32,1,0,0,
  	0,6,34,1,0,0,0,8,48,1,0,0,0,10,63,1,0,0,0,12,65,1,0,0,0,14,86,1,0,0,0,
  	16,88,1,0,0,0,18,105,1,0,0,0,20,246,1,0,0,0,22,248,1,0,0,0,24,254,1,0,
  	0,0,26,287,1,0,0,0,28,29,7,0,0,0,29,1,1,0,0,0,30,31,5,23,0,0,31,3,1,0,
  	0,0,32,33,5,23,0,0,33,5,1,0,0,0,34,35,5,23,0,0,35,7,1,0,0,0,36,37,5,8,
  	0,0,37,38,3,20,10,0,38,40,5,9,0,0,39,41,3,4,2,0,40,39,1,0,0,0,40,41,1,
  	0,0,0,41,49,1,0,0,0,42,43,5,8,0,0,43,44,3,0,0,0,44,46,5,9,0,0,45,47,3,
  	4,2,0,46,45,1,0,0,0,46,47,1,0,0,0,47,49,1,0,0,0,48,36,1,0,0,0,48,42,1,
  	0,0,0,49,9,1,0,0,0,50,52,3,4,2,0,51,50,1,0,0,0,51,52,1,0,0,0,52,53,1,
  	0,0,0,53,54,5,10,0,0,54,55,3,6,3,0,55,56,5,11,0,0,56,64,1,0,0,0,57,59,
  	3,4,2,0,58,57,1,0,0,0,58,59,1,0,0,0,59,60,1,0,0,0,60,61,5,10,0,0,61,62,
  	5,17,0,0,62,64,5,11,0,0,63,51,1,0,0,0,63,58,1,0,0,0,64,11,1,0,0,0,65,
  	66,5,8,0,0,66,67,5,12,0,0,67,68,3,2,1,0,68,70,5,9,0,0,69,71,3,4,2,0,70,
  	69,1,0,0,0,70,71,1,0,0,0,71,13,1,0,0,0,72,74,3,4,2,0,73,72,1,0,0,0,73,
  	74,1,0,0,0,74,75,1,0,0,0,75,76,5,10,0,0,76,77,5,13,0,0,77,78,3,6,3,0,
  	78,79,5,11,0,0,79,87,1,0,0,0,80,82,3,4,2,0,81,80,1,0,0,0,81,82,1,0,0,
  	0,82,83,1,0,0,0,83,84,5,10,0,0,84,85,5,17,0,0,85,87,5,11,0,0,86,73,1,
  	0,0,0,86,81,1,0,0,0,87,15,1,0,0,0,88,92,3,0,0,0,89,91,5,24,0,0,90,89,
  	1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,94,92,
  	1,0,0,0,95,99,5,16,0,0,96,98,5,24,0,0,97,96,1,0,0,0,98,101,1,0,0,0,99,
  	97,1,0,0,0,99,100,1,0,0,0,100,102,1,0,0,0,101,99,1,0,0,0,102,103,3,20,
  	10,0,103,17,1,0,0,0,104,106,3,4,2,0,105,104,1,0,0,0,105,106,1,0,0,0,106,
  	107,1,0,0,0,107,125,5,6,0,0,108,110,5,24,0,0,109,108,1,0,0,0,110,113,
  	1,0,0,0,111,109,1,0,0,0,111,112,1,0,0,0,112,114,1,0,0,0,113,111,1,0,0,
  	0,114,118,3,16,8,0,115,117,5,24,0,0,116,115,1,0,0,0,117,120,1,0,0,0,118,
  	116,1,0,0,0,118,119,1,0,0,0,119,121,1,0,0,0,120,118,1,0,0,0,121,122,5,
  	2,0,0,122,124,1,0,0,0,123,111,1,0,0,0,124,127,1,0,0,0,125,123,1,0,0,0,
  	125,126,1,0,0,0,126,131,1,0,0,0,127,125,1,0,0,0,128,130,5,24,0,0,129,
  	128,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,132,134,1,
  	0,0,0,133,131,1,0,0,0,134,138,3,20,10,0,135,137,5,24,0,0,136,135,1,0,
  	0,0,137,140,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,139,141,1,0,0,0,140,
  	138,1,0,0,0,141,142,5,7,0,0,142,19,1,0,0,0,143,247,5,14,0,0,144,159,3,
  	2,1,0,145,147,5,24,0,0,146,145,1,0,0,0,147,150,1,0,0,0,148,146,1,0,0,
  	0,148,149,1,0,0,0,149,151,1,0,0,0,150,148,1,0,0,0,151,155,5,15,0,0,152,
  	154,5,24,0,0,153,152,1,0,0,0,154,157,1,0,0,0,155,153,1,0,0,0,155,156,
  	1,0,0,0,156,158,1,0,0,0,157,155,1,0,0,0,158,160,3,20,10,0,159,148,1,0,
  	0,0,159,160,1,0,0,0,160,247,1,0,0,0,161,176,3,8,4,0,162,164,5,24,0,0,
  	163,162,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,168,
  	1,0,0,0,167,165,1,0,0,0,168,172,5,15,0,0,169,171,5,24,0,0,170,169,1,0,
  	0,0,171,174,1,0,0,0,172,170,1,0,0,0,172,173,1,0,0,0,173,175,1,0,0,0,174,
  	172,1,0,0,0,175,177,3,20,10,0,176,165,1,0,0,0,176,177,1,0,0,0,177,247,
  	1,0,0,0,178,193,3,10,5,0,179,181,5,24,0,0,180,179,1,0,0,0,181,184,1,0,
  	0,0,182,180,1,0,0,0,182,183,1,0,0,0,183,185,1,0,0,0,184,182,1,0,0,0,185,
  	189,5,15,0,0,186,188,5,24,0,0,187,186,1,0,0,0,188,191,1,0,0,0,189,187,
  	1,0,0,0,189,190,1,0,0,0,190,192,1,0,0,0,191,189,1,0,0,0,192,194,3,20,
  	10,0,193,182,1,0,0,0,193,194,1,0,0,0,194,247,1,0,0,0,195,210,3,12,6,0,
  	196,198,5,24,0,0,197,196,1,0,0,0,198,201,1,0,0,0,199,197,1,0,0,0,199,
  	200,1,0,0,0,200,202,1,0,0,0,201,199,1,0,0,0,202,206,5,15,0,0,203,205,
  	5,24,0,0,204,203,1,0,0,0,205,208,1,0,0,0,206,204,1,0,0,0,206,207,1,0,
  	0,0,207,209,1,0,0,0,208,206,1,0,0,0,209,211,3,20,10,0,210,199,1,0,0,0,
  	210,211,1,0,0,0,211,247,1,0,0,0,212,227,3,14,7,0,213,215,5,24,0,0,214,
  	213,1,0,0,0,215,218,1,0,0,0,216,214,1,0,0,0,216,217,1,0,0,0,217,219,1,
  	0,0,0,218,216,1,0,0,0,219,223,5,15,0,0,220,222,5,24,0,0,221,220,1,0,0,
  	0,222,225,1,0,0,0,223,221,1,0,0,0,223,224,1,0,0,0,224,226,1,0,0,0,225,
  	223,1,0,0,0,226,228,3,20,10,0,227,216,1,0,0,0,227,228,1,0,0,0,228,247,
  	1,0,0,0,229,244,3,18,9,0,230,232,5,24,0,0,231,230,1,0,0,0,232,235,1,0,
  	0,0,233,231,1,0,0,0,233,234,1,0,0,0,234,236,1,0,0,0,235,233,1,0,0,0,236,
  	240,5,15,0,0,237,239,5,24,0,0,238,237,1,0,0,0,239,242,1,0,0,0,240,238,
  	1,0,0,0,240,241,1,0,0,0,241,243,1,0,0,0,242,240,1,0,0,0,243,245,3,20,
  	10,0,244,233,1,0,0,0,244,245,1,0,0,0,245,247,1,0,0,0,246,143,1,0,0,0,
  	246,144,1,0,0,0,246,161,1,0,0,0,246,178,1,0,0,0,246,195,1,0,0,0,246,212,
  	1,0,0,0,246,229,1,0,0,0,247,21,1,0,0,0,248,249,5,12,0,0,249,250,5,20,
  	0,0,250,251,5,18,0,0,251,252,5,23,0,0,252,253,5,18,0,0,253,23,1,0,0,0,
  	254,258,5,23,0,0,255,257,5,24,0,0,256,255,1,0,0,0,257,260,1,0,0,0,258,
  	256,1,0,0,0,258,259,1,0,0,0,259,261,1,0,0,0,260,258,1,0,0,0,261,265,5,
  	1,0,0,262,264,5,24,0,0,263,262,1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,
  	0,265,266,1,0,0,0,266,268,1,0,0,0,267,265,1,0,0,0,268,272,5,4,0,0,269,
  	271,5,24,0,0,270,269,1,0,0,0,271,274,1,0,0,0,272,270,1,0,0,0,272,273,
  	1,0,0,0,273,275,1,0,0,0,274,272,1,0,0,0,275,279,3,20,10,0,276,278,5,24,
  	0,0,277,276,1,0,0,0,278,281,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,
  	282,1,0,0,0,281,279,1,0,0,0,282,283,5,5,0,0,283,25,1,0,0,0,284,286,3,
  	22,11,0,285,284,1,0,0,0,286,289,1,0,0,0,287,285,1,0,0,0,287,288,1,0,0,
  	0,288,293,1,0,0,0,289,287,1,0,0,0,290,292,5,24,0,0,291,290,1,0,0,0,292,
  	295,1,0,0,0,293,291,1,0,0,0,293,294,1,0,0,0,294,299,1,0,0,0,295,293,1,
  	0,0,0,296,298,3,24,12,0,297,296,1,0,0,0,298,301,1,0,0,0,299,297,1,0,0,
  	0,299,300,1,0,0,0,300,27,1,0,0,0,301,299,1,0,0,0,44,40,46,48,51,58,63,
  	70,73,81,86,92,99,105,111,118,125,131,138,148,155,159,165,172,176,182,
  	189,193,199,206,210,216,223,227,233,240,244,246,258,265,272,279,287,293,
  	299
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
    setState(28);
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

//----------------- LocContext ------------------------------------------------------------------

fmcSGrammar::LocContext::LocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::LocContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}


size_t fmcSGrammar::LocContext::getRuleIndex() const {
  return fmcSGrammar::RuleLoc;
}

void fmcSGrammar::LocContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoc(this);
}

void fmcSGrammar::LocContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoc(this);
}

fmcSGrammar::LocContext* fmcSGrammar::loc() {
  LocContext *_localctx = _tracker.createInstance<LocContext>(_ctx, getState());
  enterRule(_localctx, 4, fmcSGrammar::RuleLoc);

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
  enterRule(_localctx, 6, fmcSGrammar::RuleBinder);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
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

fmcSGrammar::LocContext* fmcSGrammar::AppContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
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
  enterRule(_localctx, 8, fmcSGrammar::RuleApp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(36);
      match(fmcSGrammar::LSQUARE);
      setState(37);
      term();
      setState(38);
      match(fmcSGrammar::RSQUARE);
      setState(40);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(39);
        loc();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(42);
      match(fmcSGrammar::LSQUARE);
      setState(43);
      lit();
      setState(44);
      match(fmcSGrammar::RSQUARE);
      setState(46);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(45);
        loc();
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

fmcSGrammar::LocContext* fmcSGrammar::AbsContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
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
  enterRule(_localctx, 10, fmcSGrammar::RuleAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(51);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(50);
        loc();
      }
      setState(53);
      match(fmcSGrammar::LTRIAN);
      setState(54);
      binder();
      setState(55);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(58);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(57);
        loc();
      }
      setState(60);
      match(fmcSGrammar::LTRIAN);
      setState(61);
      match(fmcSGrammar::UNDERSCORE);
      setState(62);
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

fmcSGrammar::VarContext* fmcSGrammar::LocAppContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

tree::TerminalNode* fmcSGrammar::LocAppContext::RSQUARE() {
  return getToken(fmcSGrammar::RSQUARE, 0);
}

fmcSGrammar::LocContext* fmcSGrammar::LocAppContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
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
  enterRule(_localctx, 12, fmcSGrammar::RuleLocApp);
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
    setState(65);
    match(fmcSGrammar::LSQUARE);
    setState(66);
    match(fmcSGrammar::HASH);
    setState(67);
    var();
    setState(68);
    match(fmcSGrammar::RSQUARE);
    setState(70);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(69);
      loc();
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

fmcSGrammar::LocContext* fmcSGrammar::LocAbsContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
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
  enterRule(_localctx, 14, fmcSGrammar::RuleLocAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(86);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(73);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(72);
        loc();
      }
      setState(75);
      match(fmcSGrammar::LTRIAN);
      setState(76);
      match(fmcSGrammar::AT);
      setState(77);
      binder();
      setState(78);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(81);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(80);
        loc();
      }
      setState(83);
      match(fmcSGrammar::LTRIAN);
      setState(84);
      match(fmcSGrammar::UNDERSCORE);
      setState(85);
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

fmcSGrammar::LitContext* fmcSGrammar::CondContext::lit() {
  return getRuleContext<fmcSGrammar::LitContext>(0);
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
  enterRule(_localctx, 16, fmcSGrammar::RuleCond);
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
    setState(88);
    lit();
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(89);
      match(fmcSGrammar::WS);
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
    match(fmcSGrammar::ARROW);
    setState(99);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(96);
      match(fmcSGrammar::WS);
      setState(101);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(102);
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

fmcSGrammar::TermContext* fmcSGrammar::CondsContext::term() {
  return getRuleContext<fmcSGrammar::TermContext>(0);
}

tree::TerminalNode* fmcSGrammar::CondsContext::RCURLY() {
  return getToken(fmcSGrammar::RCURLY, 0);
}

fmcSGrammar::LocContext* fmcSGrammar::CondsContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
}

std::vector<fmcSGrammar::CondContext *> fmcSGrammar::CondsContext::cond() {
  return getRuleContexts<fmcSGrammar::CondContext>();
}

fmcSGrammar::CondContext* fmcSGrammar::CondsContext::cond(size_t i) {
  return getRuleContext<fmcSGrammar::CondContext>(i);
}

std::vector<tree::TerminalNode *> fmcSGrammar::CondsContext::COMMA() {
  return getTokens(fmcSGrammar::COMMA);
}

tree::TerminalNode* fmcSGrammar::CondsContext::COMMA(size_t i) {
  return getToken(fmcSGrammar::COMMA, i);
}

std::vector<tree::TerminalNode *> fmcSGrammar::CondsContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::CondsContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
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
  enterRule(_localctx, 18, fmcSGrammar::RuleConds);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(104);
      loc();
    }
    setState(107);
    match(fmcSGrammar::LCURLY);
    setState(125);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(111);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(108);
          match(fmcSGrammar::WS);
          setState(113);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(114);
        cond();
        setState(118);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(115);
          match(fmcSGrammar::WS);
          setState(120);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(121);
        match(fmcSGrammar::COMMA); 
      }
      setState(127);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
    setState(131);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(128);
      match(fmcSGrammar::WS);
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(134);
    term();
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
  enterRule(_localctx, 20, fmcSGrammar::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(143);
      match(fmcSGrammar::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(144);
      var();
      setState(159);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(148);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(145);
          match(fmcSGrammar::WS);
          setState(150);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(151);
        match(fmcSGrammar::DOT);
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
      setState(161);
      app();
      setState(176);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(165);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(162);
          match(fmcSGrammar::WS);
          setState(167);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(168);
        match(fmcSGrammar::DOT);
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
      setState(178);
      abs();
      setState(193);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(182);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(179);
          match(fmcSGrammar::WS);
          setState(184);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(185);
        match(fmcSGrammar::DOT);
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
      setState(195);
      locApp();
      setState(210);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(199);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(196);
          match(fmcSGrammar::WS);
          setState(201);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(202);
        match(fmcSGrammar::DOT);
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
      setState(212);
      locAbs();
      setState(227);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(216);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(213);
          match(fmcSGrammar::WS);
          setState(218);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(219);
        match(fmcSGrammar::DOT);
        setState(223);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(220);
          match(fmcSGrammar::WS);
          setState(225);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(226);
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
      setState(229);
      conds();
      setState(244);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(233);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(230);
          match(fmcSGrammar::WS);
          setState(235);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(236);
        match(fmcSGrammar::DOT);
        setState(240);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(237);
          match(fmcSGrammar::WS);
          setState(242);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(243);
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
  enterRule(_localctx, 22, fmcSGrammar::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(248);
    match(fmcSGrammar::HASH);
    setState(249);
    match(fmcSGrammar::INCLUDE);
    setState(250);
    match(fmcSGrammar::QUOTE);
    setState(251);
    match(fmcSGrammar::ID);
    setState(252);
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
  enterRule(_localctx, 24, fmcSGrammar::RuleFunction);
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
    match(fmcSGrammar::ID);
    setState(258);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(255);
      match(fmcSGrammar::WS);
      setState(260);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(261);
    match(fmcSGrammar::EQ);
    setState(265);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(262);
      match(fmcSGrammar::WS);
      setState(267);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(268);
    match(fmcSGrammar::LPAREN);
    setState(272);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(269);
      match(fmcSGrammar::WS);
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(275);
    term();
    setState(279);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(276);
      match(fmcSGrammar::WS);
      setState(281);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(282);
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
  enterRule(_localctx, 26, fmcSGrammar::RuleProgram);
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
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::HASH) {
      setState(284);
      include();
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(293);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(290);
      match(fmcSGrammar::WS);
      setState(295);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(299);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::ID) {
      setState(296);
      function();
      setState(301);
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
