parser grammar SimpleParser;
options { tokenVocab=SimpleLexer; }

compilationUnit: instruction* EOF;
instruction: opcode oper COMMA oper SEMI;
opcode     : ADD | SUB;
oper       : DECIMAL_LITERAL;


