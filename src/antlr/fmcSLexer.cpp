
// Generated from ./fmcSLexer.g4 by ANTLR 4.13.2


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
      "UNDERSCORE", "QUOTE", "DEFAULT", "INCLUDE", "INT", "STR", "ID", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,24,130,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,
  	1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,19,1,20,4,20,
  	104,8,20,11,20,12,20,105,1,21,1,21,5,21,110,8,21,10,21,12,21,113,9,21,
  	1,21,1,21,1,22,1,22,5,22,119,8,22,10,22,12,22,122,9,22,1,23,4,23,125,
  	8,23,11,23,12,23,126,1,23,1,23,0,0,24,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,
  	20,41,21,43,22,45,23,47,24,1,0,5,1,0,48,57,1,0,34,34,3,0,65,90,95,95,
  	97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,12,13,32,32,133,0,1,1,0,
  	0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,
  	1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,
  	0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,
  	0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,
  	1,0,0,0,0,47,1,0,0,0,1,49,1,0,0,0,3,51,1,0,0,0,5,53,1,0,0,0,7,55,1,0,
  	0,0,9,57,1,0,0,0,11,59,1,0,0,0,13,61,1,0,0,0,15,63,1,0,0,0,17,65,1,0,
  	0,0,19,67,1,0,0,0,21,69,1,0,0,0,23,71,1,0,0,0,25,73,1,0,0,0,27,75,1,0,
  	0,0,29,77,1,0,0,0,31,79,1,0,0,0,33,82,1,0,0,0,35,84,1,0,0,0,37,86,1,0,
  	0,0,39,94,1,0,0,0,41,103,1,0,0,0,43,107,1,0,0,0,45,116,1,0,0,0,47,124,
  	1,0,0,0,49,50,5,61,0,0,50,2,1,0,0,0,51,52,5,44,0,0,52,4,1,0,0,0,53,54,
  	5,59,0,0,54,6,1,0,0,0,55,56,5,40,0,0,56,8,1,0,0,0,57,58,5,41,0,0,58,10,
  	1,0,0,0,59,60,5,123,0,0,60,12,1,0,0,0,61,62,5,125,0,0,62,14,1,0,0,0,63,
  	64,5,91,0,0,64,16,1,0,0,0,65,66,5,93,0,0,66,18,1,0,0,0,67,68,5,60,0,0,
  	68,20,1,0,0,0,69,70,5,62,0,0,70,22,1,0,0,0,71,72,5,35,0,0,72,24,1,0,0,
  	0,73,74,5,64,0,0,74,26,1,0,0,0,75,76,5,42,0,0,76,28,1,0,0,0,77,78,5,46,
  	0,0,78,30,1,0,0,0,79,80,5,45,0,0,80,81,5,62,0,0,81,32,1,0,0,0,82,83,5,
  	95,0,0,83,34,1,0,0,0,84,85,5,34,0,0,85,36,1,0,0,0,86,87,5,100,0,0,87,
  	88,5,101,0,0,88,89,5,102,0,0,89,90,5,97,0,0,90,91,5,117,0,0,91,92,5,108,
  	0,0,92,93,5,116,0,0,93,38,1,0,0,0,94,95,5,105,0,0,95,96,5,110,0,0,96,
  	97,5,99,0,0,97,98,5,108,0,0,98,99,5,117,0,0,99,100,5,100,0,0,100,101,
  	5,101,0,0,101,40,1,0,0,0,102,104,7,0,0,0,103,102,1,0,0,0,104,105,1,0,
  	0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,42,1,0,0,0,107,111,5,34,0,0,108,
  	110,8,1,0,0,109,108,1,0,0,0,110,113,1,0,0,0,111,109,1,0,0,0,111,112,1,
  	0,0,0,112,114,1,0,0,0,113,111,1,0,0,0,114,115,5,34,0,0,115,44,1,0,0,0,
  	116,120,7,2,0,0,117,119,7,3,0,0,118,117,1,0,0,0,119,122,1,0,0,0,120,118,
  	1,0,0,0,120,121,1,0,0,0,121,46,1,0,0,0,122,120,1,0,0,0,123,125,7,4,0,
  	0,124,123,1,0,0,0,125,126,1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,
  	128,1,0,0,0,128,129,6,23,0,0,129,48,1,0,0,0,5,0,105,111,120,126,1,6,0,
  	0
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
