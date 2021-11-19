
// Generated from SimpleParser.g4 by ANTLR 4.9.2


#include "SimpleParserVisitor.h"

#include "SimpleParser.h"


using namespace antlrcpp;
using namespace antlr4;

SimpleParser::SimpleParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SimpleParser::~SimpleParser() {
  delete _interpreter;
}

std::string SimpleParser::getGrammarFileName() const {
  return "SimpleParser.g4";
}

const std::vector<std::string>& SimpleParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SimpleParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- CompilationUnitContext ------------------------------------------------------------------

SimpleParser::CompilationUnitContext::CompilationUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleParser::CompilationUnitContext::EOF() {
  return getToken(SimpleParser::EOF, 0);
}

std::vector<SimpleParser::InstructionContext *> SimpleParser::CompilationUnitContext::instruction() {
  return getRuleContexts<SimpleParser::InstructionContext>();
}

SimpleParser::InstructionContext* SimpleParser::CompilationUnitContext::instruction(size_t i) {
  return getRuleContext<SimpleParser::InstructionContext>(i);
}


size_t SimpleParser::CompilationUnitContext::getRuleIndex() const {
  return SimpleParser::RuleCompilationUnit;
}


antlrcpp::Any SimpleParser::CompilationUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleParserVisitor*>(visitor))
    return parserVisitor->visitCompilationUnit(this);
  else
    return visitor->visitChildren(this);
}

SimpleParser::CompilationUnitContext* SimpleParser::compilationUnit() {
  CompilationUnitContext *_localctx = _tracker.createInstance<CompilationUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, SimpleParser::RuleCompilationUnit);
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
    setState(11);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SimpleParser::ADD

    || _la == SimpleParser::SUB) {
      setState(8);
      instruction();
      setState(13);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(14);
    match(SimpleParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstructionContext ------------------------------------------------------------------

SimpleParser::InstructionContext::InstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SimpleParser::OpcodeContext* SimpleParser::InstructionContext::opcode() {
  return getRuleContext<SimpleParser::OpcodeContext>(0);
}

std::vector<SimpleParser::OperContext *> SimpleParser::InstructionContext::oper() {
  return getRuleContexts<SimpleParser::OperContext>();
}

SimpleParser::OperContext* SimpleParser::InstructionContext::oper(size_t i) {
  return getRuleContext<SimpleParser::OperContext>(i);
}

tree::TerminalNode* SimpleParser::InstructionContext::COMMA() {
  return getToken(SimpleParser::COMMA, 0);
}

tree::TerminalNode* SimpleParser::InstructionContext::SEMI() {
  return getToken(SimpleParser::SEMI, 0);
}


size_t SimpleParser::InstructionContext::getRuleIndex() const {
  return SimpleParser::RuleInstruction;
}


antlrcpp::Any SimpleParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleParserVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}

SimpleParser::InstructionContext* SimpleParser::instruction() {
  InstructionContext *_localctx = _tracker.createInstance<InstructionContext>(_ctx, getState());
  enterRule(_localctx, 2, SimpleParser::RuleInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    opcode();
    setState(17);
    oper();
    setState(18);
    match(SimpleParser::COMMA);
    setState(19);
    oper();
    setState(20);
    match(SimpleParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpcodeContext ------------------------------------------------------------------

SimpleParser::OpcodeContext::OpcodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleParser::OpcodeContext::ADD() {
  return getToken(SimpleParser::ADD, 0);
}

tree::TerminalNode* SimpleParser::OpcodeContext::SUB() {
  return getToken(SimpleParser::SUB, 0);
}


size_t SimpleParser::OpcodeContext::getRuleIndex() const {
  return SimpleParser::RuleOpcode;
}


antlrcpp::Any SimpleParser::OpcodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleParserVisitor*>(visitor))
    return parserVisitor->visitOpcode(this);
  else
    return visitor->visitChildren(this);
}

SimpleParser::OpcodeContext* SimpleParser::opcode() {
  OpcodeContext *_localctx = _tracker.createInstance<OpcodeContext>(_ctx, getState());
  enterRule(_localctx, 4, SimpleParser::RuleOpcode);
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
    setState(22);
    _la = _input->LA(1);
    if (!(_la == SimpleParser::ADD

    || _la == SimpleParser::SUB)) {
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

//----------------- OperContext ------------------------------------------------------------------

SimpleParser::OperContext::OperContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SimpleParser::OperContext::DECIMAL_LITERAL() {
  return getToken(SimpleParser::DECIMAL_LITERAL, 0);
}


size_t SimpleParser::OperContext::getRuleIndex() const {
  return SimpleParser::RuleOper;
}


antlrcpp::Any SimpleParser::OperContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SimpleParserVisitor*>(visitor))
    return parserVisitor->visitOper(this);
  else
    return visitor->visitChildren(this);
}

SimpleParser::OperContext* SimpleParser::oper() {
  OperContext *_localctx = _tracker.createInstance<OperContext>(_ctx, getState());
  enterRule(_localctx, 6, SimpleParser::RuleOper);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    match(SimpleParser::DECIMAL_LITERAL);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SimpleParser::_decisionToDFA;
atn::PredictionContextCache SimpleParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SimpleParser::_atn;
std::vector<uint16_t> SimpleParser::_serializedATN;

std::vector<std::string> SimpleParser::_ruleNames = {
  "compilationUnit", "instruction", "opcode", "oper"
};

std::vector<std::string> SimpleParser::_literalNames = {
  "", "", "", "", "'('", "')'", "';'", "','"
};

std::vector<std::string> SimpleParser::_symbolicNames = {
  "", "ADD", "SUB", "DECIMAL_LITERAL", "LPAREN", "RPAREN", "SEMI", "COMMA", 
  "WS"
};

dfa::Vocabulary SimpleParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SimpleParser::_tokenNames;

SimpleParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0xa, 0x1d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x3, 0x2, 0x7, 0x2, 0xc, 0xa, 0x2, 
       0xc, 0x2, 0xe, 0x2, 0xf, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x2, 0x2, 0x6, 0x2, 0x4, 0x6, 
       0x8, 0x2, 0x3, 0x3, 0x2, 0x3, 0x4, 0x2, 0x19, 0x2, 0xd, 0x3, 0x2, 
       0x2, 0x2, 0x4, 0x12, 0x3, 0x2, 0x2, 0x2, 0x6, 0x18, 0x3, 0x2, 0x2, 
       0x2, 0x8, 0x1a, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc, 0x5, 0x4, 0x3, 0x2, 
       0xb, 0xa, 0x3, 0x2, 0x2, 0x2, 0xc, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0xd, 0xe, 0x3, 0x2, 0x2, 0x2, 0xe, 0x10, 
       0x3, 0x2, 0x2, 0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0x10, 0x11, 0x7, 
       0x2, 0x2, 0x3, 0x11, 0x3, 0x3, 0x2, 0x2, 0x2, 0x12, 0x13, 0x5, 0x6, 
       0x4, 0x2, 0x13, 0x14, 0x5, 0x8, 0x5, 0x2, 0x14, 0x15, 0x7, 0x9, 0x2, 
       0x2, 0x15, 0x16, 0x5, 0x8, 0x5, 0x2, 0x16, 0x17, 0x7, 0x8, 0x2, 0x2, 
       0x17, 0x5, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x9, 0x2, 0x2, 0x2, 0x19, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x5, 0x2, 0x2, 0x1b, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0x3, 0xd, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SimpleParser::Initializer SimpleParser::_init;
