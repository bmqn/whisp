
// Generated from fmcSLexer.g4 by ANTLR 4.13.2


#include "fmcSLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct FmcSLexerStaticData final {
  FmcSLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  FmcSLexerStaticData(const FmcSLexerStaticData&) = delete;
  FmcSLexerStaticData(FmcSLexerStaticData&&) = delete;
  FmcSLexerStaticData& operator=(const FmcSLexerStaticData&) = delete;
  FmcSLexerStaticData& operator=(FmcSLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag fmcslexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<FmcSLexerStaticData> fmcslexerLexerStaticData = nullptr;

void fmcslexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (fmcslexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(fmcslexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<FmcSLexerStaticData>(
    std::vector<std::string>{
      "EQ", "COMMA", "SEMI", "LPAREN", "RPAREN", "LCURLY", "RCURLY", "LSQUARE", 
      "RSQUARE", "LTRIAN", "RTRIAN", "HASH", "AT", "STAR", "DOT", "ARROW", 
      "UNDERSCORE", "QUOTE", "PLUS", "EXCLAM", "VERTBAR", "DEFAULT", "INCLUDE", 
      "CAST", "INT", "STR", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,28,150,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,1,0,
  	1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,
  	9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,
  	1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,
  	1,23,1,24,3,24,121,8,24,1,24,4,24,124,8,24,11,24,12,24,125,1,25,1,25,
  	5,25,130,8,25,10,25,12,25,133,9,25,1,25,1,25,1,26,1,26,5,26,139,8,26,
  	10,26,12,26,142,9,26,1,27,4,27,145,8,27,11,27,12,27,146,1,27,1,27,0,0,
  	28,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,
  	14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,
  	51,26,53,27,55,28,1,0,6,1,0,45,45,1,0,48,57,1,0,34,34,3,0,65,90,95,95,
  	97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,12,13,32,32,154,0,1,1,0,
  	0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
  	1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,
  	0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,
  	0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,
  	1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,
  	0,0,1,57,1,0,0,0,3,59,1,0,0,0,5,61,1,0,0,0,7,63,1,0,0,0,9,65,1,0,0,0,
  	11,67,1,0,0,0,13,69,1,0,0,0,15,71,1,0,0,0,17,73,1,0,0,0,19,75,1,0,0,0,
  	21,77,1,0,0,0,23,79,1,0,0,0,25,81,1,0,0,0,27,83,1,0,0,0,29,85,1,0,0,0,
  	31,87,1,0,0,0,33,90,1,0,0,0,35,92,1,0,0,0,37,94,1,0,0,0,39,96,1,0,0,0,
  	41,98,1,0,0,0,43,100,1,0,0,0,45,108,1,0,0,0,47,116,1,0,0,0,49,120,1,0,
  	0,0,51,127,1,0,0,0,53,136,1,0,0,0,55,144,1,0,0,0,57,58,5,61,0,0,58,2,
  	1,0,0,0,59,60,5,44,0,0,60,4,1,0,0,0,61,62,5,59,0,0,62,6,1,0,0,0,63,64,
  	5,40,0,0,64,8,1,0,0,0,65,66,5,41,0,0,66,10,1,0,0,0,67,68,5,123,0,0,68,
  	12,1,0,0,0,69,70,5,125,0,0,70,14,1,0,0,0,71,72,5,91,0,0,72,16,1,0,0,0,
  	73,74,5,93,0,0,74,18,1,0,0,0,75,76,5,60,0,0,76,20,1,0,0,0,77,78,5,62,
  	0,0,78,22,1,0,0,0,79,80,5,35,0,0,80,24,1,0,0,0,81,82,5,64,0,0,82,26,1,
  	0,0,0,83,84,5,42,0,0,84,28,1,0,0,0,85,86,5,46,0,0,86,30,1,0,0,0,87,88,
  	5,45,0,0,88,89,5,62,0,0,89,32,1,0,0,0,90,91,5,95,0,0,91,34,1,0,0,0,92,
  	93,5,34,0,0,93,36,1,0,0,0,94,95,5,43,0,0,95,38,1,0,0,0,96,97,5,33,0,0,
  	97,40,1,0,0,0,98,99,5,124,0,0,99,42,1,0,0,0,100,101,5,100,0,0,101,102,
  	5,101,0,0,102,103,5,102,0,0,103,104,5,97,0,0,104,105,5,117,0,0,105,106,
  	5,108,0,0,106,107,5,116,0,0,107,44,1,0,0,0,108,109,5,105,0,0,109,110,
  	5,110,0,0,110,111,5,99,0,0,111,112,5,108,0,0,112,113,5,117,0,0,113,114,
  	5,100,0,0,114,115,5,101,0,0,115,46,1,0,0,0,116,117,5,97,0,0,117,118,5,
  	115,0,0,118,48,1,0,0,0,119,121,7,0,0,0,120,119,1,0,0,0,120,121,1,0,0,
  	0,121,123,1,0,0,0,122,124,7,1,0,0,123,122,1,0,0,0,124,125,1,0,0,0,125,
  	123,1,0,0,0,125,126,1,0,0,0,126,50,1,0,0,0,127,131,5,34,0,0,128,130,8,
  	2,0,0,129,128,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,0,131,132,1,0,0,0,
  	132,134,1,0,0,0,133,131,1,0,0,0,134,135,5,34,0,0,135,52,1,0,0,0,136,140,
  	7,3,0,0,137,139,7,4,0,0,138,137,1,0,0,0,139,142,1,0,0,0,140,138,1,0,0,
  	0,140,141,1,0,0,0,141,54,1,0,0,0,142,140,1,0,0,0,143,145,7,5,0,0,144,
  	143,1,0,0,0,145,146,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,148,1,
  	0,0,0,148,149,6,27,0,0,149,56,1,0,0,0,6,0,120,125,131,140,146,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  fmcslexerLexerStaticData = std::move(staticData);
}

}

fmcSLexer::fmcSLexer(CharStream *input) : Lexer(input) {
  fmcSLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *fmcslexerLexerStaticData->atn, fmcslexerLexerStaticData->decisionToDFA, fmcslexerLexerStaticData->sharedContextCache);
}

fmcSLexer::~fmcSLexer() {
  delete _interpreter;
}

std::string fmcSLexer::getGrammarFileName() const {
  return "fmcSLexer.g4";
}

const std::vector<std::string>& fmcSLexer::getRuleNames() const {
  return fmcslexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& fmcSLexer::getChannelNames() const {
  return fmcslexerLexerStaticData->channelNames;
}

const std::vector<std::string>& fmcSLexer::getModeNames() const {
  return fmcslexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& fmcSLexer::getVocabulary() const {
  return fmcslexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView fmcSLexer::getSerializedATN() const {
  return fmcslexerLexerStaticData->serializedATN;
}

const atn::ATN& fmcSLexer::getATN() const {
  return *fmcslexerLexerStaticData->atn;
}




void fmcSLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  fmcslexerLexerInitialize();
#else
  ::antlr4::internal::call_once(fmcslexerLexerOnceFlag, fmcslexerLexerInitialize);
#endif
}
