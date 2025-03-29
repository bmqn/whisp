
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
      "lit", "var", "loc", "seqVar", "appCast", "seqApp", "seqLocApp", "binder", 
      "absCast", "seqAbs", "seqLocAbs", "cond", "seqConds", "bitSftL", "bitSftR", 
      "seqOp", "seqTerm", "include", "function", "program"
    },
    std::vector<std::string>{
      "", "'='", "','", "';'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
      "'<'", "'>'", "'#'", "'@'", "'*'", "'.'", "'->'", "'_'", "'\"'", "'+'", 
      "'!'", "'|'", "'default'", "'include'", "'as'"
    },
    std::vector<std::string>{
      "", "EQ", "COMMA", "SEMI", "LPAREN", "RPAREN", "LCURLY", "RCURLY", 
      "LSQUARE", "RSQUARE", "LTRIAN", "RTRIAN", "HASH", "AT", "STAR", "DOT", 
      "ARROW", "UNDERSCORE", "QUOTE", "PLUS", "EXCLAM", "VERTBAR", "DEFAULT", 
      "INCLUDE", "CAST", "INT", "STR", "ID", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,28,377,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,1,0,1,0,1,1,1,1,
  	1,2,1,2,1,3,1,3,1,3,3,3,50,8,3,1,4,1,4,5,4,54,8,4,10,4,12,4,57,9,4,1,
  	4,1,4,1,5,1,5,1,5,3,5,64,8,5,1,5,1,5,3,5,68,8,5,1,5,1,5,1,5,3,5,73,8,
  	5,1,5,1,5,3,5,77,8,5,3,5,79,8,5,1,6,1,6,1,6,1,6,1,6,3,6,86,8,6,1,7,1,
  	7,1,8,1,8,5,8,92,8,8,10,8,12,8,95,9,8,1,8,1,8,1,9,3,9,100,8,9,1,9,1,9,
  	1,9,3,9,105,8,9,1,9,1,9,1,9,3,9,110,8,9,1,9,1,9,1,9,3,9,115,8,9,1,10,
  	3,10,118,8,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,126,8,10,1,10,1,10,1,
  	10,3,10,131,8,10,1,11,1,11,5,11,135,8,11,10,11,12,11,138,9,11,1,11,1,
  	11,5,11,142,8,11,10,11,12,11,145,9,11,1,11,1,11,1,12,3,12,150,8,12,1,
  	12,1,12,5,12,154,8,12,10,12,12,12,157,9,12,1,12,1,12,5,12,161,8,12,10,
  	12,12,12,164,9,12,1,12,1,12,5,12,168,8,12,10,12,12,12,171,9,12,1,12,5,
  	12,174,8,12,10,12,12,12,177,9,12,1,12,1,12,5,12,181,8,12,10,12,12,12,
  	184,9,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,15,
  	1,15,3,15,199,8,15,1,16,1,16,1,16,5,16,204,8,16,10,16,12,16,207,9,16,
  	1,16,1,16,5,16,211,8,16,10,16,12,16,214,9,16,1,16,3,16,217,8,16,1,16,
  	1,16,5,16,221,8,16,10,16,12,16,224,9,16,1,16,1,16,5,16,228,8,16,10,16,
  	12,16,231,9,16,1,16,3,16,234,8,16,1,16,1,16,5,16,238,8,16,10,16,12,16,
  	241,9,16,1,16,1,16,5,16,245,8,16,10,16,12,16,248,9,16,1,16,3,16,251,8,
  	16,1,16,1,16,5,16,255,8,16,10,16,12,16,258,9,16,1,16,1,16,5,16,262,8,
  	16,10,16,12,16,265,9,16,1,16,3,16,268,8,16,1,16,1,16,5,16,272,8,16,10,
  	16,12,16,275,9,16,1,16,1,16,5,16,279,8,16,10,16,12,16,282,9,16,1,16,3,
  	16,285,8,16,1,16,1,16,5,16,289,8,16,10,16,12,16,292,9,16,1,16,1,16,5,
  	16,296,8,16,10,16,12,16,299,9,16,1,16,3,16,302,8,16,1,16,1,16,5,16,306,
  	8,16,10,16,12,16,309,9,16,1,16,1,16,5,16,313,8,16,10,16,12,16,316,9,16,
  	1,16,3,16,319,8,16,3,16,321,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,
  	18,5,18,331,8,18,10,18,12,18,334,9,18,1,18,1,18,5,18,338,8,18,10,18,12,
  	18,341,9,18,1,18,1,18,5,18,345,8,18,10,18,12,18,348,9,18,1,18,1,18,5,
  	18,352,8,18,10,18,12,18,355,9,18,1,18,1,18,1,19,5,19,360,8,19,10,19,12,
  	19,363,9,19,1,19,5,19,366,8,19,10,19,12,19,369,9,19,1,19,5,19,372,8,19,
  	10,19,12,19,375,9,19,1,19,0,0,20,0,2,4,6,8,10,12,14,16,18,20,22,24,26,
  	28,30,32,34,36,38,0,1,1,0,25,26,419,0,40,1,0,0,0,2,42,1,0,0,0,4,44,1,
  	0,0,0,6,49,1,0,0,0,8,51,1,0,0,0,10,78,1,0,0,0,12,80,1,0,0,0,14,87,1,0,
  	0,0,16,89,1,0,0,0,18,114,1,0,0,0,20,130,1,0,0,0,22,132,1,0,0,0,24,149,
  	1,0,0,0,26,187,1,0,0,0,28,190,1,0,0,0,30,198,1,0,0,0,32,320,1,0,0,0,34,
  	322,1,0,0,0,36,328,1,0,0,0,38,361,1,0,0,0,40,41,7,0,0,0,41,1,1,0,0,0,
  	42,43,5,27,0,0,43,3,1,0,0,0,44,45,5,27,0,0,45,5,1,0,0,0,46,50,5,27,0,
  	0,47,48,5,27,0,0,48,50,5,20,0,0,49,46,1,0,0,0,49,47,1,0,0,0,50,7,1,0,
  	0,0,51,55,5,24,0,0,52,54,5,28,0,0,53,52,1,0,0,0,54,57,1,0,0,0,55,53,1,
  	0,0,0,55,56,1,0,0,0,56,58,1,0,0,0,57,55,1,0,0,0,58,59,5,27,0,0,59,9,1,
  	0,0,0,60,61,5,8,0,0,61,63,3,32,16,0,62,64,3,8,4,0,63,62,1,0,0,0,63,64,
  	1,0,0,0,64,65,1,0,0,0,65,67,5,9,0,0,66,68,3,4,2,0,67,66,1,0,0,0,67,68,
  	1,0,0,0,68,79,1,0,0,0,69,70,5,8,0,0,70,72,3,0,0,0,71,73,3,8,4,0,72,71,
  	1,0,0,0,72,73,1,0,0,0,73,74,1,0,0,0,74,76,5,9,0,0,75,77,3,4,2,0,76,75,
  	1,0,0,0,76,77,1,0,0,0,77,79,1,0,0,0,78,60,1,0,0,0,78,69,1,0,0,0,79,11,
  	1,0,0,0,80,81,5,8,0,0,81,82,5,12,0,0,82,83,3,2,1,0,83,85,5,9,0,0,84,86,
  	3,4,2,0,85,84,1,0,0,0,85,86,1,0,0,0,86,13,1,0,0,0,87,88,5,27,0,0,88,15,
  	1,0,0,0,89,93,5,24,0,0,90,92,5,28,0,0,91,90,1,0,0,0,92,95,1,0,0,0,93,
  	91,1,0,0,0,93,94,1,0,0,0,94,96,1,0,0,0,95,93,1,0,0,0,96,97,5,27,0,0,97,
  	17,1,0,0,0,98,100,3,4,2,0,99,98,1,0,0,0,99,100,1,0,0,0,100,101,1,0,0,
  	0,101,102,5,10,0,0,102,104,3,14,7,0,103,105,3,16,8,0,104,103,1,0,0,0,
  	104,105,1,0,0,0,105,106,1,0,0,0,106,107,5,11,0,0,107,115,1,0,0,0,108,
  	110,3,4,2,0,109,108,1,0,0,0,109,110,1,0,0,0,110,111,1,0,0,0,111,112,5,
  	10,0,0,112,113,5,17,0,0,113,115,5,11,0,0,114,99,1,0,0,0,114,109,1,0,0,
  	0,115,19,1,0,0,0,116,118,3,4,2,0,117,116,1,0,0,0,117,118,1,0,0,0,118,
  	119,1,0,0,0,119,120,5,10,0,0,120,121,5,13,0,0,121,122,3,14,7,0,122,123,
  	5,11,0,0,123,131,1,0,0,0,124,126,3,4,2,0,125,124,1,0,0,0,125,126,1,0,
  	0,0,126,127,1,0,0,0,127,128,5,10,0,0,128,129,5,17,0,0,129,131,5,11,0,
  	0,130,117,1,0,0,0,130,125,1,0,0,0,131,21,1,0,0,0,132,136,3,0,0,0,133,
  	135,5,28,0,0,134,133,1,0,0,0,135,138,1,0,0,0,136,134,1,0,0,0,136,137,
  	1,0,0,0,137,139,1,0,0,0,138,136,1,0,0,0,139,143,5,16,0,0,140,142,5,28,
  	0,0,141,140,1,0,0,0,142,145,1,0,0,0,143,141,1,0,0,0,143,144,1,0,0,0,144,
  	146,1,0,0,0,145,143,1,0,0,0,146,147,3,32,16,0,147,23,1,0,0,0,148,150,
  	3,4,2,0,149,148,1,0,0,0,149,150,1,0,0,0,150,151,1,0,0,0,151,169,5,6,0,
  	0,152,154,5,28,0,0,153,152,1,0,0,0,154,157,1,0,0,0,155,153,1,0,0,0,155,
  	156,1,0,0,0,156,158,1,0,0,0,157,155,1,0,0,0,158,162,3,22,11,0,159,161,
  	5,28,0,0,160,159,1,0,0,0,161,164,1,0,0,0,162,160,1,0,0,0,162,163,1,0,
  	0,0,163,165,1,0,0,0,164,162,1,0,0,0,165,166,5,2,0,0,166,168,1,0,0,0,167,
  	155,1,0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,175,1,
  	0,0,0,171,169,1,0,0,0,172,174,5,28,0,0,173,172,1,0,0,0,174,177,1,0,0,
  	0,175,173,1,0,0,0,175,176,1,0,0,0,176,178,1,0,0,0,177,175,1,0,0,0,178,
  	182,3,32,16,0,179,181,5,28,0,0,180,179,1,0,0,0,181,184,1,0,0,0,182,180,
  	1,0,0,0,182,183,1,0,0,0,183,185,1,0,0,0,184,182,1,0,0,0,185,186,5,7,0,
  	0,186,25,1,0,0,0,187,188,5,10,0,0,188,189,5,10,0,0,189,27,1,0,0,0,190,
  	191,5,11,0,0,191,192,5,11,0,0,192,29,1,0,0,0,193,199,5,19,0,0,194,199,
  	5,10,0,0,195,199,5,21,0,0,196,199,3,26,13,0,197,199,3,28,14,0,198,193,
  	1,0,0,0,198,194,1,0,0,0,198,195,1,0,0,0,198,196,1,0,0,0,198,197,1,0,0,
  	0,199,31,1,0,0,0,200,321,5,14,0,0,201,216,3,6,3,0,202,204,5,28,0,0,203,
  	202,1,0,0,0,204,207,1,0,0,0,205,203,1,0,0,0,205,206,1,0,0,0,206,208,1,
  	0,0,0,207,205,1,0,0,0,208,212,5,15,0,0,209,211,5,28,0,0,210,209,1,0,0,
  	0,211,214,1,0,0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,215,1,0,0,0,214,
  	212,1,0,0,0,215,217,3,32,16,0,216,205,1,0,0,0,216,217,1,0,0,0,217,321,
  	1,0,0,0,218,233,3,10,5,0,219,221,5,28,0,0,220,219,1,0,0,0,221,224,1,0,
  	0,0,222,220,1,0,0,0,222,223,1,0,0,0,223,225,1,0,0,0,224,222,1,0,0,0,225,
  	229,5,15,0,0,226,228,5,28,0,0,227,226,1,0,0,0,228,231,1,0,0,0,229,227,
  	1,0,0,0,229,230,1,0,0,0,230,232,1,0,0,0,231,229,1,0,0,0,232,234,3,32,
  	16,0,233,222,1,0,0,0,233,234,1,0,0,0,234,321,1,0,0,0,235,250,3,18,9,0,
  	236,238,5,28,0,0,237,236,1,0,0,0,238,241,1,0,0,0,239,237,1,0,0,0,239,
  	240,1,0,0,0,240,242,1,0,0,0,241,239,1,0,0,0,242,246,5,15,0,0,243,245,
  	5,28,0,0,244,243,1,0,0,0,245,248,1,0,0,0,246,244,1,0,0,0,246,247,1,0,
  	0,0,247,249,1,0,0,0,248,246,1,0,0,0,249,251,3,32,16,0,250,239,1,0,0,0,
  	250,251,1,0,0,0,251,321,1,0,0,0,252,267,3,12,6,0,253,255,5,28,0,0,254,
  	253,1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,259,1,
  	0,0,0,258,256,1,0,0,0,259,263,5,15,0,0,260,262,5,28,0,0,261,260,1,0,0,
  	0,262,265,1,0,0,0,263,261,1,0,0,0,263,264,1,0,0,0,264,266,1,0,0,0,265,
  	263,1,0,0,0,266,268,3,32,16,0,267,256,1,0,0,0,267,268,1,0,0,0,268,321,
  	1,0,0,0,269,284,3,20,10,0,270,272,5,28,0,0,271,270,1,0,0,0,272,275,1,
  	0,0,0,273,271,1,0,0,0,273,274,1,0,0,0,274,276,1,0,0,0,275,273,1,0,0,0,
  	276,280,5,15,0,0,277,279,5,28,0,0,278,277,1,0,0,0,279,282,1,0,0,0,280,
  	278,1,0,0,0,280,281,1,0,0,0,281,283,1,0,0,0,282,280,1,0,0,0,283,285,3,
  	32,16,0,284,273,1,0,0,0,284,285,1,0,0,0,285,321,1,0,0,0,286,301,3,24,
  	12,0,287,289,5,28,0,0,288,287,1,0,0,0,289,292,1,0,0,0,290,288,1,0,0,0,
  	290,291,1,0,0,0,291,293,1,0,0,0,292,290,1,0,0,0,293,297,5,15,0,0,294,
  	296,5,28,0,0,295,294,1,0,0,0,296,299,1,0,0,0,297,295,1,0,0,0,297,298,
  	1,0,0,0,298,300,1,0,0,0,299,297,1,0,0,0,300,302,3,32,16,0,301,290,1,0,
  	0,0,301,302,1,0,0,0,302,321,1,0,0,0,303,318,3,30,15,0,304,306,5,28,0,
  	0,305,304,1,0,0,0,306,309,1,0,0,0,307,305,1,0,0,0,307,308,1,0,0,0,308,
  	310,1,0,0,0,309,307,1,0,0,0,310,314,5,15,0,0,311,313,5,28,0,0,312,311,
  	1,0,0,0,313,316,1,0,0,0,314,312,1,0,0,0,314,315,1,0,0,0,315,317,1,0,0,
  	0,316,314,1,0,0,0,317,319,3,32,16,0,318,307,1,0,0,0,318,319,1,0,0,0,319,
  	321,1,0,0,0,320,200,1,0,0,0,320,201,1,0,0,0,320,218,1,0,0,0,320,235,1,
  	0,0,0,320,252,1,0,0,0,320,269,1,0,0,0,320,286,1,0,0,0,320,303,1,0,0,0,
  	321,33,1,0,0,0,322,323,5,12,0,0,323,324,5,23,0,0,324,325,5,18,0,0,325,
  	326,5,27,0,0,326,327,5,18,0,0,327,35,1,0,0,0,328,332,5,27,0,0,329,331,
  	5,28,0,0,330,329,1,0,0,0,331,334,1,0,0,0,332,330,1,0,0,0,332,333,1,0,
  	0,0,333,335,1,0,0,0,334,332,1,0,0,0,335,339,5,1,0,0,336,338,5,28,0,0,
  	337,336,1,0,0,0,338,341,1,0,0,0,339,337,1,0,0,0,339,340,1,0,0,0,340,342,
  	1,0,0,0,341,339,1,0,0,0,342,346,5,4,0,0,343,345,5,28,0,0,344,343,1,0,
  	0,0,345,348,1,0,0,0,346,344,1,0,0,0,346,347,1,0,0,0,347,349,1,0,0,0,348,
  	346,1,0,0,0,349,353,3,32,16,0,350,352,5,28,0,0,351,350,1,0,0,0,352,355,
  	1,0,0,0,353,351,1,0,0,0,353,354,1,0,0,0,354,356,1,0,0,0,355,353,1,0,0,
  	0,356,357,5,5,0,0,357,37,1,0,0,0,358,360,3,34,17,0,359,358,1,0,0,0,360,
  	363,1,0,0,0,361,359,1,0,0,0,361,362,1,0,0,0,362,367,1,0,0,0,363,361,1,
  	0,0,0,364,366,5,28,0,0,365,364,1,0,0,0,366,369,1,0,0,0,367,365,1,0,0,
  	0,367,368,1,0,0,0,368,373,1,0,0,0,369,367,1,0,0,0,370,372,3,36,18,0,371,
  	370,1,0,0,0,372,375,1,0,0,0,373,371,1,0,0,0,373,374,1,0,0,0,374,39,1,
  	0,0,0,375,373,1,0,0,0,54,49,55,63,67,72,76,78,85,93,99,104,109,114,117,
  	125,130,136,143,149,155,162,169,175,182,198,205,212,216,222,229,233,239,
  	246,250,256,263,267,273,280,284,290,297,301,307,314,318,320,332,339,346,
  	353,361,367,373
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
    setState(40);
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
    setState(42);
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
    setState(44);
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
    setState(49);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(46);
      match(fmcSGrammar::ID);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(47);
      match(fmcSGrammar::ID);
      setState(48);
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

//----------------- AppCastContext ------------------------------------------------------------------

fmcSGrammar::AppCastContext::AppCastContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::AppCastContext::CAST() {
  return getToken(fmcSGrammar::CAST, 0);
}

tree::TerminalNode* fmcSGrammar::AppCastContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::AppCastContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::AppCastContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}


size_t fmcSGrammar::AppCastContext::getRuleIndex() const {
  return fmcSGrammar::RuleAppCast;
}

void fmcSGrammar::AppCastContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAppCast(this);
}

void fmcSGrammar::AppCastContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAppCast(this);
}

fmcSGrammar::AppCastContext* fmcSGrammar::appCast() {
  AppCastContext *_localctx = _tracker.createInstance<AppCastContext>(_ctx, getState());
  enterRule(_localctx, 8, fmcSGrammar::RuleAppCast);
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
    setState(51);
    match(fmcSGrammar::CAST);
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(52);
      match(fmcSGrammar::WS);
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
    match(fmcSGrammar::ID);
   
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

fmcSGrammar::AppCastContext* fmcSGrammar::SeqAppContext::appCast() {
  return getRuleContext<fmcSGrammar::AppCastContext>(0);
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
  enterRule(_localctx, 10, fmcSGrammar::RuleSeqApp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      match(fmcSGrammar::LSQUARE);
      setState(61);
      seqTerm();
      setState(63);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::CAST) {
        setState(62);
        appCast();
      }
      setState(65);
      match(fmcSGrammar::RSQUARE);
      setState(67);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(66);
        loc();
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(69);
      match(fmcSGrammar::LSQUARE);
      setState(70);
      lit();
      setState(72);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::CAST) {
        setState(71);
        appCast();
      }
      setState(74);
      match(fmcSGrammar::RSQUARE);
      setState(76);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(75);
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
  enterRule(_localctx, 12, fmcSGrammar::RuleSeqLocApp);
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
    setState(80);
    match(fmcSGrammar::LSQUARE);
    setState(81);
    match(fmcSGrammar::HASH);
    setState(82);
    var();
    setState(83);
    match(fmcSGrammar::RSQUARE);
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(84);
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
  enterRule(_localctx, 14, fmcSGrammar::RuleBinder);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(fmcSGrammar::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AbsCastContext ------------------------------------------------------------------

fmcSGrammar::AbsCastContext::AbsCastContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* fmcSGrammar::AbsCastContext::CAST() {
  return getToken(fmcSGrammar::CAST, 0);
}

tree::TerminalNode* fmcSGrammar::AbsCastContext::ID() {
  return getToken(fmcSGrammar::ID, 0);
}

std::vector<tree::TerminalNode *> fmcSGrammar::AbsCastContext::WS() {
  return getTokens(fmcSGrammar::WS);
}

tree::TerminalNode* fmcSGrammar::AbsCastContext::WS(size_t i) {
  return getToken(fmcSGrammar::WS, i);
}


size_t fmcSGrammar::AbsCastContext::getRuleIndex() const {
  return fmcSGrammar::RuleAbsCast;
}

void fmcSGrammar::AbsCastContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAbsCast(this);
}

void fmcSGrammar::AbsCastContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<fmcSGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAbsCast(this);
}

fmcSGrammar::AbsCastContext* fmcSGrammar::absCast() {
  AbsCastContext *_localctx = _tracker.createInstance<AbsCastContext>(_ctx, getState());
  enterRule(_localctx, 16, fmcSGrammar::RuleAbsCast);
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
    setState(89);
    match(fmcSGrammar::CAST);
    setState(93);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(90);
      match(fmcSGrammar::WS);
      setState(95);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(96);
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

fmcSGrammar::AbsCastContext* fmcSGrammar::SeqAbsContext::absCast() {
  return getRuleContext<fmcSGrammar::AbsCastContext>(0);
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
  enterRule(_localctx, 18, fmcSGrammar::RuleSeqAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(99);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(98);
        loc();
      }
      setState(101);
      match(fmcSGrammar::LTRIAN);
      setState(102);
      binder();
      setState(104);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::CAST) {
        setState(103);
        absCast();
      }
      setState(106);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(108);
        loc();
      }
      setState(111);
      match(fmcSGrammar::LTRIAN);
      setState(112);
      match(fmcSGrammar::UNDERSCORE);
      setState(113);
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
  enterRule(_localctx, 20, fmcSGrammar::RuleSeqLocAbs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(117);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(116);
        loc();
      }
      setState(119);
      match(fmcSGrammar::LTRIAN);
      setState(120);
      match(fmcSGrammar::AT);
      setState(121);
      binder();
      setState(122);
      match(fmcSGrammar::RTRIAN);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(125);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == fmcSGrammar::ID) {
        setState(124);
        loc();
      }
      setState(127);
      match(fmcSGrammar::LTRIAN);
      setState(128);
      match(fmcSGrammar::UNDERSCORE);
      setState(129);
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
  enterRule(_localctx, 22, fmcSGrammar::RuleCond);
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
    setState(132);
    lit();
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
    match(fmcSGrammar::ARROW);
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
  enterRule(_localctx, 24, fmcSGrammar::RuleSeqConds);
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
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == fmcSGrammar::ID) {
      setState(148);
      loc();
    }
    setState(151);
    match(fmcSGrammar::LCURLY);
    setState(169);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
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
        cond();
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
        match(fmcSGrammar::COMMA); 
      }
      setState(171);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(172);
      match(fmcSGrammar::WS);
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(178);
    seqTerm();
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
  enterRule(_localctx, 26, fmcSGrammar::RuleBitSftL);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(187);
    match(fmcSGrammar::LTRIAN);
    setState(188);
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
  enterRule(_localctx, 28, fmcSGrammar::RuleBitSftR);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    match(fmcSGrammar::RTRIAN);
    setState(191);
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

tree::TerminalNode* fmcSGrammar::SeqOpContext::VERTBAR() {
  return getToken(fmcSGrammar::VERTBAR, 0);
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
  enterRule(_localctx, 30, fmcSGrammar::RuleSeqOp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(193);
      match(fmcSGrammar::PLUS);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      match(fmcSGrammar::LTRIAN);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(195);
      match(fmcSGrammar::VERTBAR);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(196);
      bitSftL();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(197);
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
  enterRule(_localctx, 32, fmcSGrammar::RuleSeqTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(320);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(200);
      match(fmcSGrammar::STAR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(201);
      seqVar();
      setState(216);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
      case 1: {
        setState(205);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(202);
          match(fmcSGrammar::WS);
          setState(207);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(208);
        match(fmcSGrammar::DOT);
        setState(212);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(209);
          match(fmcSGrammar::WS);
          setState(214);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(215);
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
      setState(218);
      seqApp();
      setState(233);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
      case 1: {
        setState(222);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(219);
          match(fmcSGrammar::WS);
          setState(224);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(225);
        match(fmcSGrammar::DOT);
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
      setState(235);
      seqAbs();
      setState(250);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
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
      setState(252);
      seqLocApp();
      setState(267);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
      case 1: {
        setState(256);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(253);
          match(fmcSGrammar::WS);
          setState(258);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(259);
        match(fmcSGrammar::DOT);
        setState(263);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(260);
          match(fmcSGrammar::WS);
          setState(265);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(266);
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
      setState(269);
      seqLocAbs();
      setState(284);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(273);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(270);
          match(fmcSGrammar::WS);
          setState(275);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(276);
        match(fmcSGrammar::DOT);
        setState(280);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(277);
          match(fmcSGrammar::WS);
          setState(282);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(283);
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
      setState(286);
      seqConds();
      setState(301);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
      case 1: {
        setState(290);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(287);
          match(fmcSGrammar::WS);
          setState(292);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(293);
        match(fmcSGrammar::DOT);
        setState(297);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == fmcSGrammar::WS) {
          setState(294);
          match(fmcSGrammar::WS);
          setState(299);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(300);
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
      setState(303);
      seqOp();
      setState(318);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx)) {
      case 1: {
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
        match(fmcSGrammar::DOT);
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
  enterRule(_localctx, 34, fmcSGrammar::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(322);
    match(fmcSGrammar::HASH);
    setState(323);
    match(fmcSGrammar::INCLUDE);
    setState(324);
    match(fmcSGrammar::QUOTE);
    setState(325);
    match(fmcSGrammar::ID);
    setState(326);
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
  enterRule(_localctx, 36, fmcSGrammar::RuleFunction);
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
    setState(328);
    match(fmcSGrammar::ID);
    setState(332);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(329);
      match(fmcSGrammar::WS);
      setState(334);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(335);
    match(fmcSGrammar::EQ);
    setState(339);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(336);
      match(fmcSGrammar::WS);
      setState(341);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(342);
    match(fmcSGrammar::LPAREN);
    setState(346);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(343);
      match(fmcSGrammar::WS);
      setState(348);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(349);
    seqTerm();
    setState(353);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(350);
      match(fmcSGrammar::WS);
      setState(355);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(356);
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
  enterRule(_localctx, 38, fmcSGrammar::RuleProgram);
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
    setState(361);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::HASH) {
      setState(358);
      include();
      setState(363);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(367);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::WS) {
      setState(364);
      match(fmcSGrammar::WS);
      setState(369);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(373);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == fmcSGrammar::ID) {
      setState(370);
      function();
      setState(375);
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
