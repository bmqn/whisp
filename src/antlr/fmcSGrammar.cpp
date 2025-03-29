
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
      "seqLocAbs", "cond", "seqConds", "bitSftL", "bitSftR", "seqOp", "seqTerm", 
      "include", "function", "program"
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
  	4,1,26,345,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,3,
  	3,3,46,8,3,1,4,1,4,1,4,1,4,3,4,52,8,4,1,4,1,4,1,4,1,4,3,4,58,8,4,3,4,
  	60,8,4,1,5,1,5,1,5,1,5,1,5,3,5,67,8,5,1,6,1,6,1,7,3,7,72,8,7,1,7,1,7,
  	1,7,1,7,1,7,3,7,79,8,7,1,7,1,7,1,7,3,7,84,8,7,1,8,3,8,87,8,8,1,8,1,8,
  	1,8,1,8,1,8,1,8,3,8,95,8,8,1,8,1,8,1,8,3,8,100,8,8,1,9,1,9,5,9,104,8,
  	9,10,9,12,9,107,9,9,1,9,1,9,5,9,111,8,9,10,9,12,9,114,9,9,1,9,1,9,1,10,
  	3,10,119,8,10,1,10,1,10,5,10,123,8,10,10,10,12,10,126,9,10,1,10,1,10,
  	5,10,130,8,10,10,10,12,10,133,9,10,1,10,1,10,5,10,137,8,10,10,10,12,10,
  	140,9,10,1,10,5,10,143,8,10,10,10,12,10,146,9,10,1,10,1,10,5,10,150,8,
  	10,10,10,12,10,153,9,10,1,10,1,10,1,11,1,11,1,11,1,12,1,12,1,12,1,13,
  	1,13,1,13,1,13,3,13,167,8,13,1,14,1,14,1,14,5,14,172,8,14,10,14,12,14,
  	175,9,14,1,14,1,14,5,14,179,8,14,10,14,12,14,182,9,14,1,14,3,14,185,8,
  	14,1,14,1,14,5,14,189,8,14,10,14,12,14,192,9,14,1,14,1,14,5,14,196,8,
  	14,10,14,12,14,199,9,14,1,14,3,14,202,8,14,1,14,1,14,5,14,206,8,14,10,
  	14,12,14,209,9,14,1,14,1,14,5,14,213,8,14,10,14,12,14,216,9,14,1,14,3,
  	14,219,8,14,1,14,1,14,5,14,223,8,14,10,14,12,14,226,9,14,1,14,1,14,5,
  	14,230,8,14,10,14,12,14,233,9,14,1,14,3,14,236,8,14,1,14,1,14,5,14,240,
  	8,14,10,14,12,14,243,9,14,1,14,1,14,5,14,247,8,14,10,14,12,14,250,9,14,
  	1,14,3,14,253,8,14,1,14,1,14,5,14,257,8,14,10,14,12,14,260,9,14,1,14,
  	1,14,5,14,264,8,14,10,14,12,14,267,9,14,1,14,3,14,270,8,14,1,14,1,14,
  	5,14,274,8,14,10,14,12,14,277,9,14,1,14,1,14,5,14,281,8,14,10,14,12,14,
  	284,9,14,1,14,3,14,287,8,14,3,14,289,8,14,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,16,1,16,5,16,299,8,16,10,16,12,16,302,9,16,1,16,1,16,5,16,306,8,
  	16,10,16,12,16,309,9,16,1,16,1,16,5,16,313,8,16,10,16,12,16,316,9,16,
  	1,16,1,16,5,16,320,8,16,10,16,12,16,323,9,16,1,16,1,16,1,17,5,17,328,
  	8,17,10,17,12,17,331,9,17,1,17,5,17,334,8,17,10,17,12,17,337,9,17,1,17,
  	5,17,340,8,17,10,17,12,17,343,9,17,1,17,0,0,18,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,0,1,1,0,23,24,383,0,36,1,0,0,0,2,38,1,0,0,
  	0,4,40,1,0,0,0,6,45,1,0,0,0,8,59,1,0,0,0,10,61,1,0,0,0,12,68,1,0,0,0,
  	14,83,1,0,0,0,16,99,1,0,0,0,18,101,1,0,0,0,20,118,1,0,0,0,22,156,1,0,
  	0,0,24,159,1,0,0,0,26,166,1,0,0,0,28,288,1,0,0,0,30,290,1,0,0,0,32,296,
  	1,0,0,0,34,329,1,0,0,0,36,37,7,0,0,0,37,1,1,0,0,0,38,39,5,25,0,0,39,3,
  	1,0,0,0,40,41,5,25,0,0,41,5,1,0,0,0,42,46,5,25,0,0,43,44,5,25,0,0,44,
  	46,5,20,0,0,45,42,1,0,0,0,45,43,1,0,0,0,46,7,1,0,0,0,47,48,5,8,0,0,48,
  	49,3,28,14,0,49,51,5,9,0,0,50,52,3,4,2,0,51,50,1,0,0,0,51,52,1,0,0,0,
  	52,60,1,0,0,0,53,54,5,8,0,0,54,55,3,0,0,0,55,57,5,9,0,0,56,58,3,4,2,0,
  	57,56,1,0,0,0,57,58,1,0,0,0,58,60,1,0,0,0,59,47,1,0,0,0,59,53,1,0,0,0,
  	60,9,1,0,0,0,61,62,5,8,0,0,62,63,5,12,0,0,63,64,3,2,1,0,64,66,5,9,0,0,
  	65,67,3,4,2,0,66,65,1,0,0,0,66,67,1,0,0,0,67,11,1,0,0,0,68,69,5,25,0,
  	0,69,13,1,0,0,0,70,72,3,4,2,0,71,70,1,0,0,0,71,72,1,0,0,0,72,73,1,0,0,
  	0,73,74,5,10,0,0,74,75,3,12,6,0,75,76,5,11,0,0,76,84,1,0,0,0,77,79,3,
  	4,2,0,78,77,1,0,0,0,78,79,1,0,0,0,79,80,1,0,0,0,80,81,5,10,0,0,81,82,
  	5,17,0,0,82,84,5,11,0,0,83,71,1,0,0,0,83,78,1,0,0,0,84,15,1,0,0,0,85,
  	87,3,4,2,0,86,85,1,0,0,0,86,87,1,0,0,0,87,88,1,0,0,0,88,89,5,10,0,0,89,
  	90,5,13,0,0,90,91,3,12,6,0,91,92,5,11,0,0,92,100,1,0,0,0,93,95,3,4,2,
  	0,94,93,1,0,0,0,94,95,1,0,0,0,95,96,1,0,0,0,96,97,5,10,0,0,97,98,5,17,
  	0,0,98,100,5,11,0,0,99,86,1,0,0,0,99,94,1,0,0,0,100,17,1,0,0,0,101,105,
  	3,0,0,0,102,104,5,26,0,0,103,102,1,0,0,0,104,107,1,0,0,0,105,103,1,0,
  	0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,105,1,0,0,0,108,112,5,16,0,0,
  	109,111,5,26,0,0,110,109,1,0,0,0,111,114,1,0,0,0,112,110,1,0,0,0,112,
  	113,1,0,0,0,113,115,1,0,0,0,114,112,1,0,0,0,115,116,3,28,14,0,116,19,
  	1,0,0,0,117,119,3,4,2,0,118,117,1,0,0,0,118,119,1,0,0,0,119,120,1,0,0,
  	0,120,138,5,6,0,0,121,123,5,26,0,0,122,121,1,0,0,0,123,126,1,0,0,0,124,
  	122,1,0,0,0,124,125,1,0,0,0,125,127,1,0,0,0,126,124,1,0,0,0,127,131,3,
  	18,9,0,128,130,5,26,0,0,129,128,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,
  	0,131,132,1,0,0,0,132,134,1,0,0,0,133,131,1,0,0,0,134,135,5,2,0,0,135,
  	137,1,0,0,0,136,124,1,0,0,0,137,140,1,0,0,0,138,136,1,0,0,0,138,139,1,
  	0,0,0,139,144,1,0,0,0,140,138,1,0,0,0,141,143,5,26,0,0,142,141,1,0,0,
  	0,143,146,1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,147,1,0,0,0,146,
  	144,1,0,0,0,147,151,3,28,14,0,148,150,5,26,0,0,149,148,1,0,0,0,150,153,
  	1,0,0,0,151,149,1,0,0,0,151,152,1,0,0,0,152,154,1,0,0,0,153,151,1,0,0,
  	0,154,155,5,7,0,0,155,21,1,0,0,0,156,157,5,10,0,0,157,158,5,10,0,0,158,
  	23,1,0,0,0,159,160,5,11,0,0,160,161,5,11,0,0,161,25,1,0,0,0,162,167,5,
  	19,0,0,163,167,5,10,0,0,164,167,3,22,11,0,165,167,3,24,12,0,166,162,1,
  	0,0,0,166,163,1,0,0,0,166,164,1,0,0,0,166,165,1,0,0,0,167,27,1,0,0,0,
  	168,289,5,14,0,0,169,184,3,6,3,0,170,172,5,26,0,0,171,170,1,0,0,0,172,
  	175,1,0,0,0,173,171,1,0,0,0,173,174,1,0,0,0,174,176,1,0,0,0,175,173,1,
  	0,0,0,176,180,5,15,0,0,177,179,5,26,0,0,178,177,1,0,0,0,179,182,1,0,0,
  	0,180,178,1,0,0,0,180,181,1,0,0,0,181,183,1,0,0,0,182,180,1,0,0,0,183,
  	185,3,28,14,0,184,173,1,0,0,0,184,185,1,0,0,0,185,289,1,0,0,0,186,201,
  	3,8,4,0,187,189,5,26,0,0,188,187,1,0,0,0,189,192,1,0,0,0,190,188,1,0,
  	0,0,190,191,1,0,0,0,191,193,1,0,0,0,192,190,1,0,0,0,193,197,5,15,0,0,
  	194,196,5,26,0,0,195,194,1,0,0,0,196,199,1,0,0,0,197,195,1,0,0,0,197,
  	198,1,0,0,0,198,200,1,0,0,0,199,197,1,0,0,0,200,202,3,28,14,0,201,190,
  	1,0,0,0,201,202,1,0,0,0,202,289,1,0,0,0,203,218,3,14,7,0,204,206,5,26,
  	0,0,205,204,1,0,0,0,206,209,1,0,0,0,207,205,1,0,0,0,207,208,1,0,0,0,208,
  	210,1,0,0,0,209,207,1,0,0,0,210,214,5,15,0,0,211,213,5,26,0,0,212,211,
  	1,0,0,0,213,216,1,0,0,0,214,212,1,0,0,0,214,215,1,0,0,0,215,217,1,0,0,
  	0,216,214,1,0,0,0,217,219,3,28,14,0,218,207,1,0,0,0,218,219,1,0,0,0,219,
  	289,1,0,0,0,220,235,3,10,5,0,221,223,5,26,0,0,222,221,1,0,0,0,223,226,
  	1,0,0,0,224,222,1,0,0,0,224,225,1,0,0,0,225,227,1,0,0,0,226,224,1,0,0,
  	0,227,231,5,15,0,0,228,230,5,26,0,0,229,228,1,0,0,0,230,233,1,0,0,0,231,
  	229,1,0,0,0,231,232,1,0,0,0,232,234,1,0,0,0,233,231,1,0,0,0,234,236,3,
  	28,14,0,235,224,1,0,0,0,235,236,1,0,0,0,236,289,1,0,0,0,237,252,3,16,
  	8,0,238,240,5,26,0,0,239,238,1,0,0,0,240,243,1,0,0,0,241,239,1,0,0,0,
  	241,242,1,0,0,0,242,244,1,0,0,0,243,241,1,0,0,0,244,248,5,15,0,0,245,
  	247,5,26,0,0,246,245,1,0,0,0,247,250,1,0,0,0,248,246,1,0,0,0,248,249,
  	1,0,0,0,249,251,1,0,0,0,250,248,1,0,0,0,251,253,3,28,14,0,252,241,1,0,
  	0,0,252,253,1,0,0,0,253,289,1,0,0,0,254,269,3,20,10,0,255,257,5,26,0,
  	0,256,255,1,0,0,0,257,260,1,0,0,0,258,256,1,0,0,0,258,259,1,0,0,0,259,
  	261,1,0,0,0,260,258,1,0,0,0,261,265,5,15,0,0,262,264,5,26,0,0,263,262,
  	1,0,0,0,264,267,1,0,0,0,265,263,1,0,0,0,265,266,1,0,0,0,266,268,1,0,0,
  	0,267,265,1,0,0,0,268,270,3,28,14,0,269,258,1,0,0,0,269,270,1,0,0,0,270,
  	289,1,0,0,0,271,286,3,26,13,0,272,274,5,26,0,0,273,272,1,0,0,0,274,277,
  	1,0,0,0,275,273,1,0,0,0,275,276,1,0,0,0,276,278,1,0,0,0,277,275,1,0,0,
  	0,278,282,5,15,0,0,279,281,5,26,0,0,280,279,1,0,0,0,281,284,1,0,0,0,282,
  	280,1,0,0,0,282,283,1,0,0,0,283,285,1,0,0,0,284,282,1,0,0,0,285,287,3,
  	28,14,0,286,275,1,0,0,0,286,287,1,0,0,0,287,289,1,0,0,0,288,168,1,0,0,
  	0,288,169,1,0,0,0,288,186,1,0,0,0,288,203,1,0,0,0,288,220,1,0,0,0,288,
  	237,1,0,0,0,288,254,1,0,0,0,288,271,1,0,0,0,289,29,1,0,0,0,290,291,5,
  	12,0,0,291,292,5,22,0,0,292,293,5,18,0,0,293,294,5,25,0,0,294,295,5,18,
  	0,0,295,31,1,0,0,0,296,300,5,25,0,0,297,299,5,26,0,0,298,297,1,0,0,0,
  	299,302,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,303,1,0,0,0,302,300,
  	1,0,0,0,303,307,5,1,0,0,304,306,5,26,0,0,305,304,1,0,0,0,306,309,1,0,
  	0,0,307,305,1,0,0,0,307,308,1,0,0,0,308,310,1,0,0,0,309,307,1,0,0,0,310,
  	314,5,4,0,0,311,313,5,26,0,0,312,311,1,0,0,0,313,316,1,0,0,0,314,312,
  	1,0,0,0,314,315,1,0,0,0,315,317,1,0,0,0,316,314,1,0,0,0,317,321,3,28,
  	14,0,318,320,5,26,0,0,319,318,1,0,0,0,320,323,1,0,0,0,321,319,1,0,0,0,
  	321,322,1,0,0,0,322,324,1,0,0,0,323,321,1,0,0,0,324,325,5,5,0,0,325,33,
  	1,0,0,0,326,328,3,30,15,0,327,326,1,0,0,0,328,331,1,0,0,0,329,327,1,0,
  	0,0,329,330,1,0,0,0,330,335,1,0,0,0,331,329,1,0,0,0,332,334,5,26,0,0,
  	333,332,1,0,0,0,334,337,1,0,0,0,335,333,1,0,0,0,335,336,1,0,0,0,336,341,
  	1,0,0,0,337,335,1,0,0,0,338,340,3,32,16,0,339,338,1,0,0,0,340,343,1,0,
  	0,0,341,339,1,0,0,0,341,342,1,0,0,0,342,35,1,0,0,0,343,341,1,0,0,0,49,
  	45,51,57,59,66,71,78,83,86,94,99,105,112,118,124,131,138,144,151,166,
  	173,180,184,190,197,201,207,214,218,224,231,235,241,248,252,258,265,269,
  	275,282,286,288,300,307,314,321,329,335,341
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
    setState(36);
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
    setState(38);
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
    setState(40);
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
    setState(45);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      match(fmcSGrammar::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      match(fmcSGrammar::ID);
      setState(44);
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
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(47);
      match(fmcSGrammar::LSQUARE);
      setState(48);
      seqTerm();
      setState(49);
      match(fmcSGrammar::RSQUARE);
      setState(51);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(50);
        loc();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(53);
      match(fmcSGrammar::LSQUARE);
      setState(54);
      lit();
      setState(55);
      match(fmcSGrammar::RSQUARE);
      setState(57);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(56);
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
    setState(68);
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
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(71);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(70);
        loc();
      }
      setState(73);
      match(fmcSGrammar::LTRIAN);
      setState(74);
      binder();
      setState(75);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(78);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(77);
        loc();
      }
      setState(80);
      match(fmcSGrammar::LTRIAN);
      setState(81);
      match(fmcSGrammar::UNDERSCORE);
      setState(82);
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
    setState(99);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(86);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(85);
        loc();
      }
      setState(88);
      match(fmcSGrammar::LTRIAN);
      setState(89);
      match(fmcSGrammar::AT);
      setState(90);
      binder();
      setState(91);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(93);
        loc();
      }
      setState(96);
      match(fmcSGrammar::LTRIAN);
      setState(97);
      match(fmcSGrammar::UNDERSCORE);
      setState(98);
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
    setState(101);
    lit();
    setState(105);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(102);
      match(fmcSGrammar::WS);
      setState(107);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(108);
    match(fmcSGrammar::ARROW);
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(109);
      match(fmcSGrammar::WS);
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(115);
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
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(117);
      loc();
    }
    setState(120);
    match(fmcSGrammar::LCURLY);
    setState(138);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(124);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(121);
          match(fmcSGrammar::WS);
          setState(126);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(127);
        cond();
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
        match(fmcSGrammar::COMMA); 
      }
      setState(140);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(144);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(141);
      match(fmcSGrammar::WS);
      setState(146);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(147);
    seqTerm();
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(148);
      match(fmcSGrammar::WS);
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(fmcSGrammar::RCURLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitSftLContext ------------------------------------------------------------------

fmcSGrammar::BitSftLContext::BitSftLContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> fmcSGrammar::BitSftLContext::LTRIAN() {
  return getTokens(fmcSGrammar::LTRIAN);
}

tree::TerminalNode* fmcSGrammar::BitSftLContext::LTRIAN(size_t i) {
  return getToken(fmcSGrammar::LTRIAN, i);
}


size_t fmcSGrammar::BitSftLContext::getRuleIndex() const {
  return fmcSGrammar::RuleBitSftL;
}

void fmcSGrammar::BitSftLContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitSftL(this);
}

void fmcSGrammar::BitSftLContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitSftL(this);
}

fmcSGrammar::BitSftLContext* fmcSGrammar::bitSftL() {
  BitSftLContext *_localctx = _tracker.createInstance<BitSftLContext>(_ctx, getState());
  enterRule(_localctx, 22, fmcSGrammar::RuleBitSftL);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(fmcSGrammar::LTRIAN);
    setState(157);
    match(fmcSGrammar::LTRIAN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitSftRContext ------------------------------------------------------------------

fmcSGrammar::BitSftRContext::BitSftRContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> fmcSGrammar::BitSftRContext::RTRIAN() {
  return getTokens(fmcSGrammar::RTRIAN);
}

tree::TerminalNode* fmcSGrammar::BitSftRContext::RTRIAN(size_t i) {
  return getToken(fmcSGrammar::RTRIAN, i);
}


size_t fmcSGrammar::BitSftRContext::getRuleIndex() const {
  return fmcSGrammar::RuleBitSftR;
}

void fmcSGrammar::BitSftRContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitSftR(this);
}

void fmcSGrammar::BitSftRContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitSftR(this);
}

fmcSGrammar::BitSftRContext* fmcSGrammar::bitSftR() {
  BitSftRContext *_localctx = _tracker.createInstance<BitSftRContext>(_ctx, getState());
  enterRule(_localctx, 24, fmcSGrammar::RuleBitSftR);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(fmcSGrammar::RTRIAN);
    setState(160);
    match(fmcSGrammar::RTRIAN);
   
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

fmcSGrammar::BitSftLContext* fmcSGrammar::SeqOpContext::bitSftL() {
  return getRuleContext<fmcSGrammar::BitSftLContext>(0);
}

fmcSGrammar::BitSftRContext* fmcSGrammar::SeqOpContext::bitSftR() {
  return getRuleContext<fmcSGrammar::BitSftRContext>(0);
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
  enterRule(_localctx, 26, fmcSGrammar::RuleSeqOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(162);
      match(fmcSGrammar::PLUS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(163);
      match(fmcSGrammar::LTRIAN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(164);
      bitSftL();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(165);
      bitSftR();
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
  enterRule(_localctx, 28, fmcSGrammar::RuleSeqTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(288);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(168);
      match(fmcSGrammar::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(169);
      seqVar();
      setState(184);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
      case 1: {
        setState(173);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(170);
          match(fmcSGrammar::WS);
          setState(175);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(176);
        match(fmcSGrammar::DOT);
        setState(180);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(177);
          match(fmcSGrammar::WS);
          setState(182);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(183);
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
      setState(186);
      seqApp();
      setState(201);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
      case 1: {
        setState(190);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(187);
          match(fmcSGrammar::WS);
          setState(192);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(193);
        match(fmcSGrammar::DOT);
        setState(197);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(194);
          match(fmcSGrammar::WS);
          setState(199);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(200);
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
      setState(203);
      seqAbs();
      setState(218);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
      case 1: {
        setState(207);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(204);
          match(fmcSGrammar::WS);
          setState(209);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(210);
        match(fmcSGrammar::DOT);
        setState(214);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(211);
          match(fmcSGrammar::WS);
          setState(216);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(217);
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
      setState(220);
      seqLocApp();
      setState(235);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(224);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(221);
          match(fmcSGrammar::WS);
          setState(226);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(227);
        match(fmcSGrammar::DOT);
        setState(231);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(228);
          match(fmcSGrammar::WS);
          setState(233);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(234);
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
      setState(237);
      seqLocAbs();
      setState(252);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
      case 1: {
        setState(241);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(238);
          match(fmcSGrammar::WS);
          setState(243);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(244);
        match(fmcSGrammar::DOT);
        setState(248);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(245);
          match(fmcSGrammar::WS);
          setState(250);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(251);
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
      setState(254);
      seqConds();
      setState(269);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
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
      setState(271);
      seqOp();
      setState(286);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
      case 1: {
        setState(275);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(272);
          match(fmcSGrammar::WS);
          setState(277);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(278);
        match(fmcSGrammar::DOT);
        setState(282);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(279);
          match(fmcSGrammar::WS);
          setState(284);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(285);
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
  enterRule(_localctx, 30, fmcSGrammar::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(290);
    match(fmcSGrammar::HASH);
    setState(291);
    match(fmcSGrammar::INCLUDE);
    setState(292);
    match(fmcSGrammar::QUOTE);
    setState(293);
    match(fmcSGrammar::ID);
    setState(294);
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
  enterRule(_localctx, 32, fmcSGrammar::RuleFunction);
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
    setState(296);
    match(fmcSGrammar::ID);
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
    match(fmcSGrammar::EQ);
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
    match(fmcSGrammar::LPAREN);
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
    setState(317);
    seqTerm();
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
    setState(324);
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
  enterRule(_localctx, 34, fmcSGrammar::RuleProgram);
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
    setState(329);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::HASH) {
      setState(326);
      include();
      setState(331);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(335);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(332);
      match(fmcSGrammar::WS);
      setState(337);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(341);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::ID) {
      setState(338);
      function();
      setState(343);
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
