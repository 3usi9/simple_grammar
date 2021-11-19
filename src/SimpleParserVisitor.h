
// Generated from SimpleParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SimpleParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SimpleParser.
 */
class  SimpleParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SimpleParser.
   */
    virtual antlrcpp::Any visitCompilationUnit(SimpleParser::CompilationUnitContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(SimpleParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitOpcode(SimpleParser::OpcodeContext *context) = 0;

    virtual antlrcpp::Any visitOper(SimpleParser::OperContext *context) = 0;


};

