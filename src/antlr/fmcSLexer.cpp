
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
      "UNDERSCORE", "QUOTE", "PLUS", "EXCLAM", "DEFAULT", "INCLUDE", "INT", 
      "STR", "ID", "WS"
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
  	4,0,26,141,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,1,17,1,17,
  	1,18,1,18,1,19,1,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,
  	1,21,1,21,1,21,1,21,1,21,1,21,1,22,3,22,112,8,22,1,22,4,22,115,8,22,11,
  	22,12,22,116,1,23,1,23,5,23,121,8,23,10,23,12,23,124,9,23,1,23,1,23,1,
  	24,1,24,5,24,130,8,24,10,24,12,24,133,9,24,1,25,4,25,136,8,25,11,25,12,
  	25,137,1,25,1,25,0,0,26,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,
  	21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,
  	22,45,23,47,24,49,25,51,26,1,0,6,1,0,45,45,1,0,48,57,1,0,34,34,3,0,65,
  	90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,12,13,32,32,145,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,1,53,1,0,0,0,
  	3,55,1,0,0,0,5,57,1,0,0,0,7,59,1,0,0,0,9,61,1,0,0,0,11,63,1,0,0,0,13,
  	65,1,0,0,0,15,67,1,0,0,0,17,69,1,0,0,0,19,71,1,0,0,0,21,73,1,0,0,0,23,
  	75,1,0,0,0,25,77,1,0,0,0,27,79,1,0,0,0,29,81,1,0,0,0,31,83,1,0,0,0,33,
  	86,1,0,0,0,35,88,1,0,0,0,37,90,1,0,0,0,39,92,1,0,0,0,41,94,1,0,0,0,43,
  	102,1,0,0,0,45,111,1,0,0,0,47,118,1,0,0,0,49,127,1,0,0,0,51,135,1,0,0,
  	0,53,54,5,61,0,0,54,2,1,0,0,0,55,56,5,44,0,0,56,4,1,0,0,0,57,58,5,59,
  	0,0,58,6,1,0,0,0,59,60,5,40,0,0,60,8,1,0,0,0,61,62,5,41,0,0,62,10,1,0,
  	0,0,63,64,5,123,0,0,64,12,1,0,0,0,65,66,5,125,0,0,66,14,1,0,0,0,67,68,
  	5,91,0,0,68,16,1,0,0,0,69,70,5,93,0,0,70,18,1,0,0,0,71,72,5,60,0,0,72,
  	20,1,0,0,0,73,74,5,62,0,0,74,22,1,0,0,0,75,76,5,35,0,0,76,24,1,0,0,0,
  	77,78,5,64,0,0,78,26,1,0,0,0,79,80,5,42,0,0,80,28,1,0,0,0,81,82,5,46,
  	0,0,82,30,1,0,0,0,83,84,5,45,0,0,84,85,5,62,0,0,85,32,1,0,0,0,86,87,5,
  	95,0,0,87,34,1,0,0,0,88,89,5,34,0,0,89,36,1,0,0,0,90,91,5,43,0,0,91,38,
  	1,0,0,0,92,93,5,33,0,0,93,40,1,0,0,0,94,95,5,100,0,0,95,96,5,101,0,0,
  	96,97,5,102,0,0,97,98,5,97,0,0,98,99,5,117,0,0,99,100,5,108,0,0,100,101,
  	5,116,0,0,101,42,1,0,0,0,102,103,5,105,0,0,103,104,5,110,0,0,104,105,
  	5,99,0,0,105,106,5,108,0,0,106,107,5,117,0,0,107,108,5,100,0,0,108,109,
  	5,101,0,0,109,44,1,0,0,0,110,112,7,0,0,0,111,110,1,0,0,0,111,112,1,0,
  	0,0,112,114,1,0,0,0,113,115,7,1,0,0,114,113,1,0,0,0,115,116,1,0,0,0,116,
  	114,1,0,0,0,116,117,1,0,0,0,117,46,1,0,0,0,118,122,5,34,0,0,119,121,8,
  	2,0,0,120,119,1,0,0,0,121,124,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,
  	123,125,1,0,0,0,124,122,1,0,0,0,125,126,5,34,0,0,126,48,1,0,0,0,127,131,
  	7,3,0,0,128,130,7,4,0,0,129,128,1,0,0,0,130,133,1,0,0,0,131,129,1,0,0,
  	0,131,132,1,0,0,0,132,50,1,0,0,0,133,131,1,0,0,0,134,136,7,5,0,0,135,
  	134,1,0,0,0,136,137,1,0,0,0,137,135,1,0,0,0,137,138,1,0,0,0,138,139,1,
  	0,0,0,139,140,6,25,0,0,140,52,1,0,0,0,6,0,111,116,122,131,137,1,6,0,0
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
