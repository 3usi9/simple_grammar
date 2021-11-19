
// Generated from SimpleParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleParserVisitor.h"


/**
 * This class provides an empty implementation of SimpleParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SimpleParserBaseVisitor : public SimpleParserVisitor {
public:

  virtual antlrcpp::Any visitCompilationUnit(SimpleParser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(SimpleParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOpcode(SimpleParser::OpcodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOper(SimpleParser::OperContext *ctx) override {
    return visitChildren(ctx);
  }


};

