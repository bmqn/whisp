
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
      "lit", "var", "loc", "seqVar", "seqApp", "seqLocApp", "binder", "seqAbs", 
      "seqLocAbs", "cond", "seqConds", "seqOp", "seqTerm", "include", "function", 
      "program"
    },
    std::vector<std::string>{
      "", "'='", "','", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
      "'<'", "'>'", "'#'", "'@'", "'*'", "'.'", "'->'", "'_'", "'\"'", "'+'", 
      "'!'", "'default'", "'include'"
    },
    std::vector<std::string>{
      "", "EQ", "COMMA", "SEMI", "LPAREN", "RPAREN", "LCURLY", "RCURLY", 
      "LSQUARE", "RSQUARE", "LTRIAN", "RTRIAN", "HASH", "AT", "STAR", "DOT", 
      "ARROW", "UNDERSCORE", "QUOTE", "PLUS", "EXCLAM", "DEFAULT", "INCLUDE", 
      "INT", "STR", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,26,331,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,3,3,42,8,3,1,4,1,4,1,
  	4,1,4,3,4,48,8,4,1,4,1,4,1,4,1,4,3,4,54,8,4,3,4,56,8,4,1,5,1,5,1,5,1,
  	5,1,5,3,5,63,8,5,1,6,1,6,1,7,3,7,68,8,7,1,7,1,7,1,7,1,7,1,7,3,7,75,8,
  	7,1,7,1,7,1,7,3,7,80,8,7,1,8,3,8,83,8,8,1,8,1,8,1,8,1,8,1,8,1,8,3,8,91,
  	8,8,1,8,1,8,1,8,3,8,96,8,8,1,9,1,9,5,9,100,8,9,10,9,12,9,103,9,9,1,9,
  	1,9,5,9,107,8,9,10,9,12,9,110,9,9,1,9,1,9,1,10,3,10,115,8,10,1,10,1,10,
  	5,10,119,8,10,10,10,12,10,122,9,10,1,10,1,10,5,10,126,8,10,10,10,12,10,
  	129,9,10,1,10,1,10,5,10,133,8,10,10,10,12,10,136,9,10,1,10,5,10,139,8,
  	10,10,10,12,10,142,9,10,1,10,1,10,5,10,146,8,10,10,10,12,10,149,9,10,
  	1,10,1,10,1,11,1,11,1,12,1,12,1,12,5,12,158,8,12,10,12,12,12,161,9,12,
  	1,12,1,12,5,12,165,8,12,10,12,12,12,168,9,12,1,12,3,12,171,8,12,1,12,
  	1,12,5,12,175,8,12,10,12,12,12,178,9,12,1,12,1,12,5,12,182,8,12,10,12,
  	12,12,185,9,12,1,12,3,12,188,8,12,1,12,1,12,5,12,192,8,12,10,12,12,12,
  	195,9,12,1,12,1,12,5,12,199,8,12,10,12,12,12,202,9,12,1,12,3,12,205,8,
  	12,1,12,1,12,5,12,209,8,12,10,12,12,12,212,9,12,1,12,1,12,5,12,216,8,
  	12,10,12,12,12,219,9,12,1,12,3,12,222,8,12,1,12,1,12,5,12,226,8,12,10,
  	12,12,12,229,9,12,1,12,1,12,5,12,233,8,12,10,12,12,12,236,9,12,1,12,3,
  	12,239,8,12,1,12,1,12,5,12,243,8,12,10,12,12,12,246,9,12,1,12,1,12,5,
  	12,250,8,12,10,12,12,12,253,9,12,1,12,3,12,256,8,12,1,12,1,12,5,12,260,
  	8,12,10,12,12,12,263,9,12,1,12,1,12,5,12,267,8,12,10,12,12,12,270,9,12,
  	1,12,3,12,273,8,12,3,12,275,8,12,1,13,1,13,1,13,1,13,1,13,1,13,1,14,1,
  	14,5,14,285,8,14,10,14,12,14,288,9,14,1,14,1,14,5,14,292,8,14,10,14,12,
  	14,295,9,14,1,14,1,14,5,14,299,8,14,10,14,12,14,302,9,14,1,14,1,14,5,
  	14,306,8,14,10,14,12,14,309,9,14,1,14,1,14,1,15,5,15,314,8,15,10,15,12,
  	15,317,9,15,1,15,5,15,320,8,15,10,15,12,15,323,9,15,1,15,5,15,326,8,15,
  	10,15,12,15,329,9,15,1,15,0,0,16,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,0,2,1,0,23,24,2,0,10,10,19,19,368,0,32,1,0,0,0,2,34,1,0,0,0,4,36,
  	1,0,0,0,6,41,1,0,0,0,8,55,1,0,0,0,10,57,1,0,0,0,12,64,1,0,0,0,14,79,1,
  	0,0,0,16,95,1,0,0,0,18,97,1,0,0,0,20,114,1,0,0,0,22,152,1,0,0,0,24,274,
  	1,0,0,0,26,276,1,0,0,0,28,282,1,0,0,0,30,315,1,0,0,0,32,33,7,0,0,0,33,
  	1,1,0,0,0,34,35,5,25,0,0,35,3,1,0,0,0,36,37,5,25,0,0,37,5,1,0,0,0,38,
  	42,5,25,0,0,39,40,5,25,0,0,40,42,5,20,0,0,41,38,1,0,0,0,41,39,1,0,0,0,
  	42,7,1,0,0,0,43,44,5,8,0,0,44,45,3,24,12,0,45,47,5,9,0,0,46,48,3,4,2,
  	0,47,46,1,0,0,0,47,48,1,0,0,0,48,56,1,0,0,0,49,50,5,8,0,0,50,51,3,0,0,
  	0,51,53,5,9,0,0,52,54,3,4,2,0,53,52,1,0,0,0,53,54,1,0,0,0,54,56,1,0,0,
  	0,55,43,1,0,0,0,55,49,1,0,0,0,56,9,1,0,0,0,57,58,5,8,0,0,58,59,5,12,0,
  	0,59,60,3,2,1,0,60,62,5,9,0,0,61,63,3,4,2,0,62,61,1,0,0,0,62,63,1,0,0,
  	0,63,11,1,0,0,0,64,65,5,25,0,0,65,13,1,0,0,0,66,68,3,4,2,0,67,66,1,0,
  	0,0,67,68,1,0,0,0,68,69,1,0,0,0,69,70,5,10,0,0,70,71,3,12,6,0,71,72,5,
  	11,0,0,72,80,1,0,0,0,73,75,3,4,2,0,74,73,1,0,0,0,74,75,1,0,0,0,75,76,
  	1,0,0,0,76,77,5,10,0,0,77,78,5,17,0,0,78,80,5,11,0,0,79,67,1,0,0,0,79,
  	74,1,0,0,0,80,15,1,0,0,0,81,83,3,4,2,0,82,81,1,0,0,0,82,83,1,0,0,0,83,
  	84,1,0,0,0,84,85,5,10,0,0,85,86,5,13,0,0,86,87,3,12,6,0,87,88,5,11,0,
  	0,88,96,1,0,0,0,89,91,3,4,2,0,90,89,1,0,0,0,90,91,1,0,0,0,91,92,1,0,0,
  	0,92,93,5,10,0,0,93,94,5,17,0,0,94,96,5,11,0,0,95,82,1,0,0,0,95,90,1,
  	0,0,0,96,17,1,0,0,0,97,101,3,0,0,0,98,100,5,26,0,0,99,98,1,0,0,0,100,
  	103,1,0,0,0,101,99,1,0,0,0,101,102,1,0,0,0,102,104,1,0,0,0,103,101,1,
  	0,0,0,104,108,5,16,0,0,105,107,5,26,0,0,106,105,1,0,0,0,107,110,1,0,0,
  	0,108,106,1,0,0,0,108,109,1,0,0,0,109,111,1,0,0,0,110,108,1,0,0,0,111,
  	112,3,24,12,0,112,19,1,0,0,0,113,115,3,4,2,0,114,113,1,0,0,0,114,115,
  	1,0,0,0,115,116,1,0,0,0,116,134,5,6,0,0,117,119,5,26,0,0,118,117,1,0,
  	0,0,119,122,1,0,0,0,120,118,1,0,0,0,120,121,1,0,0,0,121,123,1,0,0,0,122,
  	120,1,0,0,0,123,127,3,18,9,0,124,126,5,26,0,0,125,124,1,0,0,0,126,129,
  	1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,130,1,0,0,0,129,127,1,0,0,
  	0,130,131,5,2,0,0,131,133,1,0,0,0,132,120,1,0,0,0,133,136,1,0,0,0,134,
  	132,1,0,0,0,134,135,1,0,0,0,135,140,1,0,0,0,136,134,1,0,0,0,137,139,5,
  	26,0,0,138,137,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,0,140,141,1,0,0,
  	0,141,143,1,0,0,0,142,140,1,0,0,0,143,147,3,24,12,0,144,146,5,26,0,0,
  	145,144,1,0,0,0,146,149,1,0,0,0,147,145,1,0,0,0,147,148,1,0,0,0,148,150,
  	1,0,0,0,149,147,1,0,0,0,150,151,5,7,0,0,151,21,1,0,0,0,152,153,7,1,0,
  	0,153,23,1,0,0,0,154,275,5,14,0,0,155,170,3,6,3,0,156,158,5,26,0,0,157,
  	156,1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,162,1,
  	0,0,0,161,159,1,0,0,0,162,166,5,15,0,0,163,165,5,26,0,0,164,163,1,0,0,
  	0,165,168,1,0,0,0,166,164,1,0,0,0,166,167,1,0,0,0,167,169,1,0,0,0,168,
  	166,1,0,0,0,169,171,3,24,12,0,170,159,1,0,0,0,170,171,1,0,0,0,171,275,
  	1,0,0,0,172,187,3,8,4,0,173,175,5,26,0,0,174,173,1,0,0,0,175,178,1,0,
  	0,0,176,174,1,0,0,0,176,177,1,0,0,0,177,179,1,0,0,0,178,176,1,0,0,0,179,
  	183,5,15,0,0,180,182,5,26,0,0,181,180,1,0,0,0,182,185,1,0,0,0,183,181,
  	1,0,0,0,183,184,1,0,0,0,184,186,1,0,0,0,185,183,1,0,0,0,186,188,3,24,
  	12,0,187,176,1,0,0,0,187,188,1,0,0,0,188,275,1,0,0,0,189,204,3,14,7,0,
  	190,192,5,26,0,0,191,190,1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,
  	194,1,0,0,0,194,196,1,0,0,0,195,193,1,0,0,0,196,200,5,15,0,0,197,199,
  	5,26,0,0,198,197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,
  	0,0,201,203,1,0,0,0,202,200,1,0,0,0,203,205,3,24,12,0,204,193,1,0,0,0,
  	204,205,1,0,0,0,205,275,1,0,0,0,206,221,3,10,5,0,207,209,5,26,0,0,208,
  	207,1,0,0,0,209,212,1,0,0,0,210,208,1,0,0,0,210,211,1,0,0,0,211,213,1,
  	0,0,0,212,210,1,0,0,0,213,217,5,15,0,0,214,216,5,26,0,0,215,214,1,0,0,
  	0,216,219,1,0,0,0,217,215,1,0,0,0,217,218,1,0,0,0,218,220,1,0,0,0,219,
  	217,1,0,0,0,220,222,3,24,12,0,221,210,1,0,0,0,221,222,1,0,0,0,222,275,
  	1,0,0,0,223,238,3,16,8,0,224,226,5,26,0,0,225,224,1,0,0,0,226,229,1,0,
  	0,0,227,225,1,0,0,0,227,228,1,0,0,0,228,230,1,0,0,0,229,227,1,0,0,0,230,
  	234,5,15,0,0,231,233,5,26,0,0,232,231,1,0,0,0,233,236,1,0,0,0,234,232,
  	1,0,0,0,234,235,1,0,0,0,235,237,1,0,0,0,236,234,1,0,0,0,237,239,3,24,
  	12,0,238,227,1,0,0,0,238,239,1,0,0,0,239,275,1,0,0,0,240,255,3,20,10,
  	0,241,243,5,26,0,0,242,241,1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,244,
  	245,1,0,0,0,245,247,1,0,0,0,246,244,1,0,0,0,247,251,5,15,0,0,248,250,
  	5,26,0,0,249,248,1,0,0,0,250,253,1,0,0,0,251,249,1,0,0,0,251,252,1,0,
  	0,0,252,254,1,0,0,0,253,251,1,0,0,0,254,256,3,24,12,0,255,244,1,0,0,0,
  	255,256,1,0,0,0,256,275,1,0,0,0,257,272,3,22,11,0,258,260,5,26,0,0,259,
  	258,1,0,0,0,260,263,1,0,0,0,261,259,1,0,0,0,261,262,1,0,0,0,262,264,1,
  	0,0,0,263,261,1,0,0,0,264,268,5,15,0,0,265,267,5,26,0,0,266,265,1,0,0,
  	0,267,270,1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,271,1,0,0,0,270,
  	268,1,0,0,0,271,273,3,24,12,0,272,261,1,0,0,0,272,273,1,0,0,0,273,275,
  	1,0,0,0,274,154,1,0,0,0,274,155,1,0,0,0,274,172,1,0,0,0,274,189,1,0,0,
  	0,274,206,1,0,0,0,274,223,1,0,0,0,274,240,1,0,0,0,274,257,1,0,0,0,275,
  	25,1,0,0,0,276,277,5,12,0,0,277,278,5,22,0,0,278,279,5,18,0,0,279,280,
  	5,25,0,0,280,281,5,18,0,0,281,27,1,0,0,0,282,286,5,25,0,0,283,285,5,26,
  	0,0,284,283,1,0,0,0,285,288,1,0,0,0,286,284,1,0,0,0,286,287,1,0,0,0,287,
  	289,1,0,0,0,288,286,1,0,0,0,289,293,5,1,0,0,290,292,5,26,0,0,291,290,
  	1,0,0,0,292,295,1,0,0,0,293,291,1,0,0,0,293,294,1,0,0,0,294,296,1,0,0,
  	0,295,293,1,0,0,0,296,300,5,4,0,0,297,299,5,26,0,0,298,297,1,0,0,0,299,
  	302,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,303,1,0,0,0,302,300,1,
  	0,0,0,303,307,3,24,12,0,304,306,5,26,0,0,305,304,1,0,0,0,306,309,1,0,
  	0,0,307,305,1,0,0,0,307,308,1,0,0,0,308,310,1,0,0,0,309,307,1,0,0,0,310,
  	311,5,5,0,0,311,29,1,0,0,0,312,314,3,26,13,0,313,312,1,0,0,0,314,317,
  	1,0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,321,1,0,0,0,317,315,1,0,0,
  	0,318,320,5,26,0,0,319,318,1,0,0,0,320,323,1,0,0,0,321,319,1,0,0,0,321,
  	322,1,0,0,0,322,327,1,0,0,0,323,321,1,0,0,0,324,326,3,28,14,0,325,324,
  	1,0,0,0,326,329,1,0,0,0,327,325,1,0,0,0,327,328,1,0,0,0,328,31,1,0,0,
  	0,329,327,1,0,0,0,48,41,47,53,55,62,67,74,79,82,90,95,101,108,114,120,
  	127,134,140,147,159,166,170,176,183,187,193,200,204,210,217,221,227,234,
  	238,244,251,255,261,268,272,274,286,293,300,307,315,321,327
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
    setState(32);
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

//----------------- SeqVarContext ------------------------------------------------------------------

fmcSGrammar::SeqVarContext::SeqVarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqVarContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}

tree::TerminalNode* fmcSGrammar::SeqVarContext::EXCLAM() {
  return getToken(fmcSGrammar::EXCLAM, 0);
}


size_t fmcSGrammar::SeqVarContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqVar;
}

void fmcSGrammar::SeqVarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqVar(this);
}

void fmcSGrammar::SeqVarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqVar(this);
}

fmcSGrammar::SeqVarContext* fmcSGrammar::seqVar() {
  SeqVarContext *_localctx = _tracker.createInstance<SeqVarContext>(_ctx, getState());
  enterRule(_localctx, 6, fmcSGrammar::RuleSeqVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(41);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      match(fmcSGrammar::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      match(fmcSGrammar::ID);
      setState(40);
      match(fmcSGrammar::EXCLAM);
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

//----------------- SeqAppContext ------------------------------------------------------------------

fmcSGrammar::SeqAppContext::SeqAppContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqAppContext::LSQUARE() {
  return getToken(fmcSGrammar::LSQUARE, 0);
}

fmcSGrammar::SeqTermContext* fmcSGrammar::SeqAppContext::seqTerm() {
  return getRuleContext<fmcSGrammar::SeqTermContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqAppContext::RSQUARE() {
  return getToken(fmcSGrammar::RSQUARE, 0);
}

fmcSGrammar::LocContext* fmcSGrammar::SeqAppContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
}

fmcSGrammar::LitContext* fmcSGrammar::SeqAppContext::lit() {
  return getRuleContext<fmcSGrammar::LitContext>(0);
}


size_t fmcSGrammar::SeqAppContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqApp;
}

void fmcSGrammar::SeqAppContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqApp(this);
}

void fmcSGrammar::SeqAppContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqApp(this);
}

fmcSGrammar::SeqAppContext* fmcSGrammar::seqApp() {
  SeqAppContext *_localctx = _tracker.createInstance<SeqAppContext>(_ctx, getState());
  enterRule(_localctx, 8, fmcSGrammar::RuleSeqApp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(43);
      match(fmcSGrammar::LSQUARE);
      setState(44);
      seqTerm();
      setState(45);
      match(fmcSGrammar::RSQUARE);
      setState(47);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(46);
        loc();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(49);
      match(fmcSGrammar::LSQUARE);
      setState(50);
      lit();
      setState(51);
      match(fmcSGrammar::RSQUARE);
      setState(53);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(52);
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

//----------------- SeqLocAppContext ------------------------------------------------------------------

fmcSGrammar::SeqLocAppContext::SeqLocAppContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqLocAppContext::LSQUARE() {
  return getToken(fmcSGrammar::LSQUARE, 0);
}

tree::TerminalNode* fmcSGrammar::SeqLocAppContext::HASH() {
  return getToken(fmcSGrammar::HASH, 0);
}

fmcSGrammar::VarContext* fmcSGrammar::SeqLocAppContext::var() {
  return getRuleContext<fmcSGrammar::VarContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqLocAppContext::RSQUARE() {
  return getToken(fmcSGrammar::RSQUARE, 0);
}

fmcSGrammar::LocContext* fmcSGrammar::SeqLocAppContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
}


size_t fmcSGrammar::SeqLocAppContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqLocApp;
}

void fmcSGrammar::SeqLocAppContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqLocApp(this);
}

void fmcSGrammar::SeqLocAppContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqLocApp(this);
}

fmcSGrammar::SeqLocAppContext* fmcSGrammar::seqLocApp() {
  SeqLocAppContext *_localctx = _tracker.createInstance<SeqLocAppContext>(_ctx, getState());
  enterRule(_localctx, 10, fmcSGrammar::RuleSeqLocApp);
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
    setState(57);
    match(fmcSGrammar::LSQUARE);
    setState(58);
    match(fmcSGrammar::HASH);
    setState(59);
    var();
    setState(60);
    match(fmcSGrammar::RSQUARE);
    setState(62);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(61);
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
  enterRule(_localctx, 12, fmcSGrammar::RuleBinder);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(fmcSGrammar::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SeqAbsContext ------------------------------------------------------------------

fmcSGrammar::SeqAbsContext::SeqAbsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqAbsContext::LTRIAN() {
  return getToken(fmcSGrammar::LTRIAN, 0);
}

fmcSGrammar::BinderContext* fmcSGrammar::SeqAbsContext::binder() {
  return getRuleContext<fmcSGrammar::BinderContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqAbsContext::RTRIAN() {
  return getToken(fmcSGrammar::RTRIAN, 0);
}

fmcSGrammar::LocContext* fmcSGrammar::SeqAbsContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqAbsContext::UNDERSCORE() {
  return getToken(fmcSGrammar::UNDERSCORE, 0);
}


size_t fmcSGrammar::SeqAbsContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqAbs;
}

void fmcSGrammar::SeqAbsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqAbs(this);
}

void fmcSGrammar::SeqAbsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqAbs(this);
}

fmcSGrammar::SeqAbsContext* fmcSGrammar::seqAbs() {
  SeqAbsContext *_localctx = _tracker.createInstance<SeqAbsContext>(_ctx, getState());
  enterRule(_localctx, 14, fmcSGrammar::RuleSeqAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(67);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(66);
        loc();
      }
      setState(69);
      match(fmcSGrammar::LTRIAN);
      setState(70);
      binder();
      setState(71);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(74);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(73);
        loc();
      }
      setState(76);
      match(fmcSGrammar::LTRIAN);
      setState(77);
      match(fmcSGrammar::UNDERSCORE);
      setState(78);
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

//----------------- SeqLocAbsContext ------------------------------------------------------------------

fmcSGrammar::SeqLocAbsContext::SeqLocAbsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqLocAbsContext::LTRIAN() {
  return getToken(fmcSGrammar::LTRIAN, 0);
}

tree::TerminalNode* fmcSGrammar::SeqLocAbsContext::AT() {
  return getToken(fmcSGrammar::AT, 0);
}

fmcSGrammar::BinderContext* fmcSGrammar::SeqLocAbsContext::binder() {
  return getRuleContext<fmcSGrammar::BinderContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqLocAbsContext::RTRIAN() {
  return getToken(fmcSGrammar::RTRIAN, 0);
}

fmcSGrammar::LocContext* fmcSGrammar::SeqLocAbsContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqLocAbsContext::UNDERSCORE() {
  return getToken(fmcSGrammar::UNDERSCORE, 0);
}


size_t fmcSGrammar::SeqLocAbsContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqLocAbs;
}

void fmcSGrammar::SeqLocAbsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqLocAbs(this);
}

void fmcSGrammar::SeqLocAbsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqLocAbs(this);
}

fmcSGrammar::SeqLocAbsContext* fmcSGrammar::seqLocAbs() {
  SeqLocAbsContext *_localctx = _tracker.createInstance<SeqLocAbsContext>(_ctx, getState());
  enterRule(_localctx, 16, fmcSGrammar::RuleSeqLocAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(81);
        loc();
      }
      setState(84);
      match(fmcSGrammar::LTRIAN);
      setState(85);
      match(fmcSGrammar::AT);
      setState(86);
      binder();
      setState(87);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(90);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(89);
        loc();
      }
      setState(92);
      match(fmcSGrammar::LTRIAN);
      setState(93);
      match(fmcSGrammar::UNDERSCORE);
      setState(94);
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

fmcSGrammar::SeqTermContext* fmcSGrammar::CondContext::seqTerm() {
  return getRuleContext<fmcSGrammar::SeqTermContext>(0);
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
  enterRule(_localctx, 18, fmcSGrammar::RuleCond);
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
    setState(97);
    lit();
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
    match(fmcSGrammar::ARROW);
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(105);
      match(fmcSGrammar::WS);
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(111);
    seqTerm();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SeqCondsContext ------------------------------------------------------------------

fmcSGrammar::SeqCondsContext::SeqCondsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqCondsContext::LCURLY() {
  return getToken(fmcSGrammar::LCURLY, 0);
}

fmcSGrammar::SeqTermContext* fmcSGrammar::SeqCondsContext::seqTerm() {
  return getRuleContext<fmcSGrammar::SeqTermContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqCondsContext::RCURLY() {
  return getToken(fmcSGrammar::RCURLY, 0);
}

fmcSGrammar::LocContext* fmcSGrammar::SeqCondsContext::loc() {
  return getRuleContext<fmcSGrammar::LocContext>(0);
}

std::vector<fmcSGrammar::CondContext *> fmcSGrammar::SeqCondsContext::cond() {
  return getRuleContexts<fmcSGrammar::CondContext>();
}

fmcSGrammar::CondContext* fmcSGrammar::SeqCondsContext::cond(size_t i) {
  return getRuleContext<fmcSGrammar::CondContext>(i);
}

std::vector<tree::TerminalNode *> fmcSGrammar::SeqCondsContext::COMMA() {
  return getTokens(fmcSGrammar::COMMA);
}

tree::TerminalNode* fmcSGrammar::SeqCondsContext::COMMA(size_t i) {
  return getToken(fmcSGrammar::COMMA, i);
}

std::vector<tree::TerminalNode *> fmcSGrammar::SeqCondsContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::SeqCondsContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}


size_t fmcSGrammar::SeqCondsContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqConds;
}

void fmcSGrammar::SeqCondsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqConds(this);
}

void fmcSGrammar::SeqCondsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqConds(this);
}

fmcSGrammar::SeqCondsContext* fmcSGrammar::seqConds() {
  SeqCondsContext *_localctx = _tracker.createInstance<SeqCondsContext>(_ctx, getState());
  enterRule(_localctx, 20, fmcSGrammar::RuleSeqConds);
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
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(113);
      loc();
    }
    setState(116);
    match(fmcSGrammar::LCURLY);
    setState(134);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
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
        cond();
        setState(127);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(124);
          match(fmcSGrammar::WS);
          setState(129);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(130);
        match(fmcSGrammar::COMMA); 
      }
      setState(136);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
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
    seqTerm();
    setState(147);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(144);
      match(fmcSGrammar::WS);
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(150);
    match(fmcSGrammar::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SeqOpContext ------------------------------------------------------------------

fmcSGrammar::SeqOpContext::SeqOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqOpContext::PLUS() {
  return getToken(fmcSGrammar::PLUS, 0);
}

tree::TerminalNode* fmcSGrammar::SeqOpContext::LTRIAN() {
  return getToken(fmcSGrammar::LTRIAN, 0);
}


size_t fmcSGrammar::SeqOpContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqOp;
}

void fmcSGrammar::SeqOpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqOp(this);
}

void fmcSGrammar::SeqOpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqOp(this);
}

fmcSGrammar::SeqOpContext* fmcSGrammar::seqOp() {
  SeqOpContext *_localctx = _tracker.createInstance<SeqOpContext>(_ctx, getState());
  enterRule(_localctx, 22, fmcSGrammar::RuleSeqOp);
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
    setState(152);
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

//----------------- SeqTermContext ------------------------------------------------------------------

fmcSGrammar::SeqTermContext::SeqTermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::SeqTermContext::STAR() {
  return getToken(fmcSGrammar::STAR, 0);
}

fmcSGrammar::SeqVarContext* fmcSGrammar::SeqTermContext::seqVar() {
  return getRuleContext<fmcSGrammar::SeqVarContext>(0);
}

tree::TerminalNode* fmcSGrammar::SeqTermContext::DOT() {
  return getToken(fmcSGrammar::DOT, 0);
}

fmcSGrammar::SeqTermContext* fmcSGrammar::SeqTermContext::seqTerm() {
  return getRuleContext<fmcSGrammar::SeqTermContext>(0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::SeqTermContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::SeqTermContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}

fmcSGrammar::SeqAppContext* fmcSGrammar::SeqTermContext::seqApp() {
  return getRuleContext<fmcSGrammar::SeqAppContext>(0);
}

fmcSGrammar::SeqAbsContext* fmcSGrammar::SeqTermContext::seqAbs() {
  return getRuleContext<fmcSGrammar::SeqAbsContext>(0);
}

fmcSGrammar::SeqLocAppContext* fmcSGrammar::SeqTermContext::seqLocApp() {
  return getRuleContext<fmcSGrammar::SeqLocAppContext>(0);
}

fmcSGrammar::SeqLocAbsContext* fmcSGrammar::SeqTermContext::seqLocAbs() {
  return getRuleContext<fmcSGrammar::SeqLocAbsContext>(0);
}

fmcSGrammar::SeqCondsContext* fmcSGrammar::SeqTermContext::seqConds() {
  return getRuleContext<fmcSGrammar::SeqCondsContext>(0);
}

fmcSGrammar::SeqOpContext* fmcSGrammar::SeqTermContext::seqOp() {
  return getRuleContext<fmcSGrammar::SeqOpContext>(0);
}


size_t fmcSGrammar::SeqTermContext::getRuleIndex() const {
  return fmcSGrammar::RuleSeqTerm;
}

void fmcSGrammar::SeqTermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeqTerm(this);
}

void fmcSGrammar::SeqTermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeqTerm(this);
}

fmcSGrammar::SeqTermContext* fmcSGrammar::seqTerm() {
  SeqTermContext *_localctx = _tracker.createInstance<SeqTermContext>(_ctx, getState());
  enterRule(_localctx, 24, fmcSGrammar::RuleSeqTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(274);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(154);
      match(fmcSGrammar::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(155);
      seqVar();
      setState(170);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
        setState(166);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(163);
          match(fmcSGrammar::WS);
          setState(168);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(169);
        seqTerm();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(172);
      seqApp();
      setState(187);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
        setState(183);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(180);
          match(fmcSGrammar::WS);
          setState(185);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(186);
        seqTerm();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(189);
      seqAbs();
      setState(204);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
        setState(200);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(197);
          match(fmcSGrammar::WS);
          setState(202);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(203);
        seqTerm();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(206);
      seqLocApp();
      setState(221);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
        setState(217);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(214);
          match(fmcSGrammar::WS);
          setState(219);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(220);
        seqTerm();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(223);
      seqLocAbs();
      setState(238);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
        setState(234);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(231);
          match(fmcSGrammar::WS);
          setState(236);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(237);
        seqTerm();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(240);
      seqConds();
      setState(255);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
        setState(251);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(248);
          match(fmcSGrammar::WS);
          setState(253);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(254);
        seqTerm();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(257);
      seqOp();
      setState(272);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
        setState(268);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(265);
          match(fmcSGrammar::WS);
          setState(270);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(271);
        seqTerm();
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
  enterRule(_localctx, 26, fmcSGrammar::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    match(fmcSGrammar::HASH);
    setState(277);
    match(fmcSGrammar::INCLUDE);
    setState(278);
    match(fmcSGrammar::QUOTE);
    setState(279);
    match(fmcSGrammar::ID);
    setState(280);
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

fmcSGrammar::SeqTermContext* fmcSGrammar::FunctionContext::seqTerm() {
  return getRuleContext<fmcSGrammar::SeqTermContext>(0);
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
  enterRule(_localctx, 28, fmcSGrammar::RuleFunction);
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
    setState(282);
    match(fmcSGrammar::ID);
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
    match(fmcSGrammar::EQ);
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
    match(fmcSGrammar::LPAREN);
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
    seqTerm();
    setState(307);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(304);
      match(fmcSGrammar::WS);
      setState(309);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(310);
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
  enterRule(_localctx, 30, fmcSGrammar::RuleProgram);
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
    setState(315);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::HASH) {
      setState(312);
      include();
      setState(317);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(321);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(318);
      match(fmcSGrammar::WS);
      setState(323);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(327);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::ID) {
      setState(324);
      function();
      setState(329);
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
