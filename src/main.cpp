#include "SimpleLexer.h"
#include "SimpleParser.h"
#include "antlr4-runtime.h"
#include "SimpleParserBaseVisitor.h"
#include <iostream>
#include <vector>
using namespace antlr4::tree;

class MyVisitor : public SimpleParserBaseVisitor
{
public:
  std::vector<int> ve;
  std::string opcode;
public:
  virtual antlrcpp::Any
  visitOper(SimpleParser::OperContext *ctx) override
  {
    this->ve.push_back(std::stoi(ctx->getText()));
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any
  visitOpcode(SimpleParser::OpcodeContext *ctx) override
  {
    this->opcode = ctx->getText();
    return visitChildren(ctx);
  }
  
  virtual antlrcpp::Any
  visitInstruction(SimpleParser::InstructionContext *ctx) override
  {
    auto it = visitChildren(ctx);
    int result;
    bool succeed = false;
    if(strcasecmp(opcode.c_str(), "add") == 0)
      {
        result = ve[0] + ve[1];
        succeed = true;
      }
    else if(strcasecmp(opcode.c_str(), "sub") == 0)
      {
        result = ve[0] - ve[1];
        succeed = true;
      }
    else
      {
        succeed = false;        
      }
    if(succeed)
      {
        printf("%s[%d, %d] = %d\n", opcode.c_str(), ve[0], ve[1], result);
      }
    else
      {
        printf("Failed to parse.\n");
      }
    ve.clear();
    opcode = "";
    return it;
  }

};


int main()
{
  antlr4::ANTLRInputStream input("ADD 123, 321;");
  SimpleLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);
  SimpleParser parser(&tokens);
  MyVisitor visitor;
  visitor.visit(parser.compilationUnit());
}
