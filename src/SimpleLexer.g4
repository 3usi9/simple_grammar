lexer grammar SimpleLexer;

// Keywords
ADD:       [Aa][Dd][Dd];
SUB:       [Ss][Uu][Bb];

// Literals
DECIMAL_LITERAL:
        ('0' | [1-9] (Digits? | '_'+ Digits) ) [lL]?;

// Separators
LPAREN:             '(';
RPAREN:             ')';
SEMI:               ';';
COMMA:              ',';

fragment Digits
    : [0-9] ([0-9_]* [0-9])?
    ;

WS:                 [ \t\r\n\u000C]+ -> channel(HIDDEN);