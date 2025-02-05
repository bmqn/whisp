
// Generated from fmcSGrammar.g4 by ANTLR 4.13.2


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
      "conds", "op", "term", "include", "function", "program"
    },
    std::vector<std::string>{
      "", "'='", "','", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
      "'<'", "'>'", "'#'", "'@'", "'*'", "'.'", "'->'", "'_'", "'\"'", "'+'", 
      "'default'", "'include'"
    },
    std::vector<std::string>{
      "", "EQ", "COMMA", "SEMI", "LPAREN", "RPAREN", "LCURLY", "RCURLY", 
      "LSQUARE", "RSQUARE", "LTRIAN", "RTRIAN", "HASH", "AT", "STAR", "DOT", 
      "ARROW", "UNDERSCORE", "QUOTE", "PLUS", "DEFAULT", "INCLUDE", "INT", 
      "STR", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,25,324,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,4,1,4,3,4,43,8,4,1,4,1,4,
  	1,4,1,4,3,4,49,8,4,3,4,51,8,4,1,5,3,5,54,8,5,1,5,1,5,1,5,1,5,1,5,3,5,
  	61,8,5,1,5,1,5,1,5,3,5,66,8,5,1,6,1,6,1,6,1,6,1,6,3,6,73,8,6,1,7,3,7,
  	76,8,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,84,8,7,1,7,1,7,1,7,3,7,89,8,7,1,8,
  	1,8,5,8,93,8,8,10,8,12,8,96,9,8,1,8,1,8,5,8,100,8,8,10,8,12,8,103,9,8,
  	1,8,1,8,1,9,3,9,108,8,9,1,9,1,9,5,9,112,8,9,10,9,12,9,115,9,9,1,9,1,9,
  	5,9,119,8,9,10,9,12,9,122,9,9,1,9,1,9,5,9,126,8,9,10,9,12,9,129,9,9,1,
  	9,5,9,132,8,9,10,9,12,9,135,9,9,1,9,1,9,5,9,139,8,9,10,9,12,9,142,9,9,
  	1,9,1,9,1,10,1,10,1,11,1,11,1,11,5,11,151,8,11,10,11,12,11,154,9,11,1,
  	11,1,11,5,11,158,8,11,10,11,12,11,161,9,11,1,11,3,11,164,8,11,1,11,1,
  	11,5,11,168,8,11,10,11,12,11,171,9,11,1,11,1,11,5,11,175,8,11,10,11,12,
  	11,178,9,11,1,11,3,11,181,8,11,1,11,1,11,5,11,185,8,11,10,11,12,11,188,
  	9,11,1,11,1,11,5,11,192,8,11,10,11,12,11,195,9,11,1,11,3,11,198,8,11,
  	1,11,1,11,5,11,202,8,11,10,11,12,11,205,9,11,1,11,1,11,5,11,209,8,11,
  	10,11,12,11,212,9,11,1,11,3,11,215,8,11,1,11,1,11,5,11,219,8,11,10,11,
  	12,11,222,9,11,1,11,1,11,5,11,226,8,11,10,11,12,11,229,9,11,1,11,3,11,
  	232,8,11,1,11,1,11,5,11,236,8,11,10,11,12,11,239,9,11,1,11,1,11,5,11,
  	243,8,11,10,11,12,11,246,9,11,1,11,3,11,249,8,11,1,11,1,11,5,11,253,8,
  	11,10,11,12,11,256,9,11,1,11,1,11,5,11,260,8,11,10,11,12,11,263,9,11,
  	1,11,3,11,266,8,11,3,11,268,8,11,1,12,1,12,1,12,1,12,1,12,1,12,1,13,1,
  	13,5,13,278,8,13,10,13,12,13,281,9,13,1,13,1,13,5,13,285,8,13,10,13,12,
  	13,288,9,13,1,13,1,13,5,13,292,8,13,10,13,12,13,295,9,13,1,13,1,13,5,
  	13,299,8,13,10,13,12,13,302,9,13,1,13,1,13,1,14,5,14,307,8,14,10,14,12,
  	14,310,9,14,1,14,5,14,313,8,14,10,14,12,14,316,9,14,1,14,5,14,319,8,14,
  	10,14,12,14,322,9,14,1,14,0,0,15,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,0,2,1,0,22,23,2,0,10,10,19,19,361,0,30,1,0,0,0,2,32,1,0,0,0,4,34,1,
  	0,0,0,6,36,1,0,0,0,8,50,1,0,0,0,10,65,1,0,0,0,12,67,1,0,0,0,14,88,1,0,
  	0,0,16,90,1,0,0,0,18,107,1,0,0,0,20,145,1,0,0,0,22,267,1,0,0,0,24,269,
  	1,0,0,0,26,275,1,0,0,0,28,308,1,0,0,0,30,31,7,0,0,0,31,1,1,0,0,0,32,33,
  	5,24,0,0,33,3,1,0,0,0,34,35,5,24,0,0,35,5,1,0,0,0,36,37,5,24,0,0,37,7,
  	1,0,0,0,38,39,5,8,0,0,39,40,3,22,11,0,40,42,5,9,0,0,41,43,3,4,2,0,42,
  	41,1,0,0,0,42,43,1,0,0,0,43,51,1,0,0,0,44,45,5,8,0,0,45,46,3,0,0,0,46,
  	48,5,9,0,0,47,49,3,4,2,0,48,47,1,0,0,0,48,49,1,0,0,0,49,51,1,0,0,0,50,
  	38,1,0,0,0,50,44,1,0,0,0,51,9,1,0,0,0,52,54,3,4,2,0,53,52,1,0,0,0,53,
  	54,1,0,0,0,54,55,1,0,0,0,55,56,5,10,0,0,56,57,3,6,3,0,57,58,5,11,0,0,
  	58,66,1,0,0,0,59,61,3,4,2,0,60,59,1,0,0,0,60,61,1,0,0,0,61,62,1,0,0,0,
  	62,63,5,10,0,0,63,64,5,17,0,0,64,66,5,11,0,0,65,53,1,0,0,0,65,60,1,0,
  	0,0,66,11,1,0,0,0,67,68,5,8,0,0,68,69,5,12,0,0,69,70,3,2,1,0,70,72,5,
  	9,0,0,71,73,3,4,2,0,72,71,1,0,0,0,72,73,1,0,0,0,73,13,1,0,0,0,74,76,3,
  	4,2,0,75,74,1,0,0,0,75,76,1,0,0,0,76,77,1,0,0,0,77,78,5,10,0,0,78,79,
  	5,13,0,0,79,80,3,6,3,0,80,81,5,11,0,0,81,89,1,0,0,0,82,84,3,4,2,0,83,
  	82,1,0,0,0,83,84,1,0,0,0,84,85,1,0,0,0,85,86,5,10,0,0,86,87,5,17,0,0,
  	87,89,5,11,0,0,88,75,1,0,0,0,88,83,1,0,0,0,89,15,1,0,0,0,90,94,3,0,0,
  	0,91,93,5,25,0,0,92,91,1,0,0,0,93,96,1,0,0,0,94,92,1,0,0,0,94,95,1,0,
  	0,0,95,97,1,0,0,0,96,94,1,0,0,0,97,101,5,16,0,0,98,100,5,25,0,0,99,98,
  	1,0,0,0,100,103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,
  	0,103,101,1,0,0,0,104,105,3,22,11,0,105,17,1,0,0,0,106,108,3,4,2,0,107,
  	106,1,0,0,0,107,108,1,0,0,0,108,109,1,0,0,0,109,127,5,6,0,0,110,112,5,
  	25,0,0,111,110,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,114,1,0,0,
  	0,114,116,1,0,0,0,115,113,1,0,0,0,116,120,3,16,8,0,117,119,5,25,0,0,118,
  	117,1,0,0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,123,1,
  	0,0,0,122,120,1,0,0,0,123,124,5,2,0,0,124,126,1,0,0,0,125,113,1,0,0,0,
  	126,129,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,133,1,0,0,0,129,127,
  	1,0,0,0,130,132,5,25,0,0,131,130,1,0,0,0,132,135,1,0,0,0,133,131,1,0,
  	0,0,133,134,1,0,0,0,134,136,1,0,0,0,135,133,1,0,0,0,136,140,3,22,11,0,
  	137,139,5,25,0,0,138,137,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,
  	141,1,0,0,0,141,143,1,0,0,0,142,140,1,0,0,0,143,144,5,7,0,0,144,19,1,
  	0,0,0,145,146,7,1,0,0,146,21,1,0,0,0,147,268,5,14,0,0,148,163,3,2,1,0,
  	149,151,5,25,0,0,150,149,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,0,152,
  	153,1,0,0,0,153,155,1,0,0,0,154,152,1,0,0,0,155,159,5,15,0,0,156,158,
  	5,25,0,0,157,156,1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,
  	0,0,160,162,1,0,0,0,161,159,1,0,0,0,162,164,3,22,11,0,163,152,1,0,0,0,
  	163,164,1,0,0,0,164,268,1,0,0,0,165,180,3,8,4,0,166,168,5,25,0,0,167,
  	166,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,172,1,
  	0,0,0,171,169,1,0,0,0,172,176,5,15,0,0,173,175,5,25,0,0,174,173,1,0,0,
  	0,175,178,1,0,0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,
  	176,1,0,0,0,179,181,3,22,11,0,180,169,1,0,0,0,180,181,1,0,0,0,181,268,
  	1,0,0,0,182,197,3,10,5,0,183,185,5,25,0,0,184,183,1,0,0,0,185,188,1,0,
  	0,0,186,184,1,0,0,0,186,187,1,0,0,0,187,189,1,0,0,0,188,186,1,0,0,0,189,
  	193,5,15,0,0,190,192,5,25,0,0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,
  	1,0,0,0,193,194,1,0,0,0,194,196,1,0,0,0,195,193,1,0,0,0,196,198,3,22,
  	11,0,197,186,1,0,0,0,197,198,1,0,0,0,198,268,1,0,0,0,199,214,3,12,6,0,
  	200,202,5,25,0,0,201,200,1,0,0,0,202,205,1,0,0,0,203,201,1,0,0,0,203,
  	204,1,0,0,0,204,206,1,0,0,0,205,203,1,0,0,0,206,210,5,15,0,0,207,209,
  	5,25,0,0,208,207,1,0,0,0,209,212,1,0,0,0,210,208,1,0,0,0,210,211,1,0,
  	0,0,211,213,1,0,0,0,212,210,1,0,0,0,213,215,3,22,11,0,214,203,1,0,0,0,
  	214,215,1,0,0,0,215,268,1,0,0,0,216,231,3,14,7,0,217,219,5,25,0,0,218,
  	217,1,0,0,0,219,222,1,0,0,0,220,218,1,0,0,0,220,221,1,0,0,0,221,223,1,
  	0,0,0,222,220,1,0,0,0,223,227,5,15,0,0,224,226,5,25,0,0,225,224,1,0,0,
  	0,226,229,1,0,0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,230,1,0,0,0,229,
  	227,1,0,0,0,230,232,3,22,11,0,231,220,1,0,0,0,231,232,1,0,0,0,232,268,
  	1,0,0,0,233,248,3,18,9,0,234,236,5,25,0,0,235,234,1,0,0,0,236,239,1,0,
  	0,0,237,235,1,0,0,0,237,238,1,0,0,0,238,240,1,0,0,0,239,237,1,0,0,0,240,
  	244,5,15,0,0,241,243,5,25,0,0,242,241,1,0,0,0,243,246,1,0,0,0,244,242,
  	1,0,0,0,244,245,1,0,0,0,245,247,1,0,0,0,246,244,1,0,0,0,247,249,3,22,
  	11,0,248,237,1,0,0,0,248,249,1,0,0,0,249,268,1,0,0,0,250,265,3,20,10,
  	0,251,253,5,25,0,0,252,251,1,0,0,0,253,256,1,0,0,0,254,252,1,0,0,0,254,
  	255,1,0,0,0,255,257,1,0,0,0,256,254,1,0,0,0,257,261,5,15,0,0,258,260,
  	5,25,0,0,259,258,1,0,0,0,260,263,1,0,0,0,261,259,1,0,0,0,261,262,1,0,
  	0,0,262,264,1,0,0,0,263,261,1,0,0,0,264,266,3,22,11,0,265,254,1,0,0,0,
  	265,266,1,0,0,0,266,268,1,0,0,0,267,147,1,0,0,0,267,148,1,0,0,0,267,165,
  	1,0,0,0,267,182,1,0,0,0,267,199,1,0,0,0,267,216,1,0,0,0,267,233,1,0,0,
  	0,267,250,1,0,0,0,268,23,1,0,0,0,269,270,5,12,0,0,270,271,5,21,0,0,271,
  	272,5,18,0,0,272,273,5,24,0,0,273,274,5,18,0,0,274,25,1,0,0,0,275,279,
  	5,24,0,0,276,278,5,25,0,0,277,276,1,0,0,0,278,281,1,0,0,0,279,277,1,0,
  	0,0,279,280,1,0,0,0,280,282,1,0,0,0,281,279,1,0,0,0,282,286,5,1,0,0,283,
  	285,5,25,0,0,284,283,1,0,0,0,285,288,1,0,0,0,286,284,1,0,0,0,286,287,
  	1,0,0,0,287,289,1,0,0,0,288,286,1,0,0,0,289,293,5,4,0,0,290,292,5,25,
  	0,0,291,290,1,0,0,0,292,295,1,0,0,0,293,291,1,0,0,0,293,294,1,0,0,0,294,
  	296,1,0,0,0,295,293,1,0,0,0,296,300,3,22,11,0,297,299,5,25,0,0,298,297,
  	1,0,0,0,299,302,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,303,1,0,0,
  	0,302,300,1,0,0,0,303,304,5,5,0,0,304,27,1,0,0,0,305,307,3,24,12,0,306,
  	305,1,0,0,0,307,310,1,0,0,0,308,306,1,0,0,0,308,309,1,0,0,0,309,314,1,
  	0,0,0,310,308,1,0,0,0,311,313,5,25,0,0,312,311,1,0,0,0,313,316,1,0,0,
  	0,314,312,1,0,0,0,314,315,1,0,0,0,315,320,1,0,0,0,316,314,1,0,0,0,317,
  	319,3,26,13,0,318,317,1,0,0,0,319,322,1,0,0,0,320,318,1,0,0,0,320,321,
  	1,0,0,0,321,29,1,0,0,0,322,320,1,0,0,0,47,42,48,50,53,60,65,72,75,83,
  	88,94,101,107,113,120,127,133,140,152,159,163,169,176,180,186,193,197,
  	203,210,214,220,227,231,237,244,248,254,261,265,267,279,286,293,300,308,
  	314,320
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
    setState(30);
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
    setState(36);
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
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      match(fmcSGrammar::LSQUARE);
      setState(39);
      term();
      setState(40);
      match(fmcSGrammar::RSQUARE);
      setState(42);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(41);
        loc();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(44);
      match(fmcSGrammar::LSQUARE);
      setState(45);
      lit();
      setState(46);
      match(fmcSGrammar::RSQUARE);
      setState(48);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(47);
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
    setState(65);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(53);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(52);
        loc();
      }
      setState(55);
      match(fmcSGrammar::LTRIAN);
      setState(56);
      binder();
      setState(57);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(60);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(59);
        loc();
      }
      setState(62);
      match(fmcSGrammar::LTRIAN);
      setState(63);
      match(fmcSGrammar::UNDERSCORE);
      setState(64);
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
    setState(67);
    match(fmcSGrammar::LSQUARE);
    setState(68);
    match(fmcSGrammar::HASH);
    setState(69);
    var();
    setState(70);
    match(fmcSGrammar::RSQUARE);
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(71);
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
    setState(88);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(74);
        loc();
      }
      setState(77);
      match(fmcSGrammar::LTRIAN);
      setState(78);
      match(fmcSGrammar::AT);
      setState(79);
      binder();
      setState(80);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(82);
        loc();
      }
      setState(85);
      match(fmcSGrammar::LTRIAN);
      setState(86);
      match(fmcSGrammar::UNDERSCORE);
      setState(87);
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
    setState(90);
    lit();
    setState(94);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(91);
      match(fmcSGrammar::WS);
      setState(96);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(97);
    match(fmcSGrammar::ARROW);
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(98);
      match(fmcSGrammar::WS);
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
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
    setState(107);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(106);
      loc();
    }
    setState(109);
    match(fmcSGrammar::LCURLY);
    setState(127);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(113);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(110);
          match(fmcSGrammar::WS);
          setState(115);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(116);
        cond();
        setState(120);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(117);
          match(fmcSGrammar::WS);
          setState(122);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(123);
        match(fmcSGrammar::COMMA); 
      }
      setState(129);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
    setState(133);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(130);
      match(fmcSGrammar::WS);
      setState(135);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    term();
    setState(140);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(137);
      match(fmcSGrammar::WS);
      setState(142);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(143);
    match(fmcSGrammar::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

fmcSGrammar::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::OpContext::PLUS() {
  return getToken(fmcSGrammar::PLUS, 0);
}

tree::TerminalNode* fmcSGrammar::OpContext::LTRIAN() {
  return getToken(fmcSGrammar::LTRIAN, 0);
}


size_t fmcSGrammar::OpContext::getRuleIndex() const {
  return fmcSGrammar::RuleOp;
}

void fmcSGrammar::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void fmcSGrammar::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}

fmcSGrammar::OpContext* fmcSGrammar::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 20, fmcSGrammar::RuleOp);
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
    setState(145);
    _la = _input->LA(1);
    if (!(_la == fmcSGrammar::LTRIAN

    || _la == fmcSGrammar::PLUS)) {
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

fmcSGrammar::OpContext* fmcSGrammar::TermContext::op() {
  return getRuleContext<fmcSGrammar::OpContext>(0);
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
  enterRule(_localctx, 22, fmcSGrammar::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(267);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(147);
      match(fmcSGrammar::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(148);
      var();
      setState(163);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(152);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(149);
          match(fmcSGrammar::WS);
          setState(154);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(155);
        match(fmcSGrammar::DOT);
        setState(159);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(156);
          match(fmcSGrammar::WS);
          setState(161);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(162);
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
      setState(165);
      app();
      setState(180);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
      case 1: {
        setState(169);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(166);
          match(fmcSGrammar::WS);
          setState(171);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(172);
        match(fmcSGrammar::DOT);
        setState(176);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(173);
          match(fmcSGrammar::WS);
          setState(178);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(179);
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
      setState(182);
      abs();
      setState(197);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
      case 1: {
        setState(186);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(183);
          match(fmcSGrammar::WS);
          setState(188);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(189);
        match(fmcSGrammar::DOT);
        setState(193);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(190);
          match(fmcSGrammar::WS);
          setState(195);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(196);
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
      setState(199);
      locApp();
      setState(214);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
      case 1: {
        setState(203);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(200);
          match(fmcSGrammar::WS);
          setState(205);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(206);
        match(fmcSGrammar::DOT);
        setState(210);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(207);
          match(fmcSGrammar::WS);
          setState(212);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(213);
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
      setState(216);
      locAbs();
      setState(231);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
      case 1: {
        setState(220);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(217);
          match(fmcSGrammar::WS);
          setState(222);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(223);
        match(fmcSGrammar::DOT);
        setState(227);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(224);
          match(fmcSGrammar::WS);
          setState(229);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(230);
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
      setState(233);
      conds();
      setState(248);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
      case 1: {
        setState(237);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(234);
          match(fmcSGrammar::WS);
          setState(239);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(240);
        match(fmcSGrammar::DOT);
        setState(244);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(241);
          match(fmcSGrammar::WS);
          setState(246);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(247);
        term();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(250);
      op();
      setState(265);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
      case 1: {
        setState(254);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(251);
          match(fmcSGrammar::WS);
          setState(256);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(257);
        match(fmcSGrammar::DOT);
        setState(261);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(258);
          match(fmcSGrammar::WS);
          setState(263);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(264);
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
  enterRule(_localctx, 24, fmcSGrammar::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(269);
    match(fmcSGrammar::HASH);
    setState(270);
    match(fmcSGrammar::INCLUDE);
    setState(271);
    match(fmcSGrammar::QUOTE);
    setState(272);
    match(fmcSGrammar::ID);
    setState(273);
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
  enterRule(_localctx, 26, fmcSGrammar::RuleFunction);
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
    setState(275);
    match(fmcSGrammar::ID);
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
    match(fmcSGrammar::EQ);
    setState(286);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(283);
      match(fmcSGrammar::WS);
      setState(288);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(289);
    match(fmcSGrammar::LPAREN);
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
    setState(296);
    term();
    setState(300);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(297);
      match(fmcSGrammar::WS);
      setState(302);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(303);
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
  enterRule(_localctx, 28, fmcSGrammar::RuleProgram);
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
    setState(308);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::HASH) {
      setState(305);
      include();
      setState(310);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(314);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(311);
      match(fmcSGrammar::WS);
      setState(316);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(320);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::ID) {
      setState(317);
      function();
      setState(322);
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
