lexer grammar fmcSLexer;

EQ : '=' ;
COMMA : ',' ;
SEMI : ';' ;
LPAREN : '(' ;
RPAREN : ')' ;
LCURLY : '{' ;
RCURLY : '}' ;
LSQUARE : '[' ;
RSQUARE : ']' ;
LTRIAN : '<' ;
RTRIAN : '>' ;
HASH : '#' ;
AT : '@' ;
STAR : '*' ;
DOT : '.' ;
ARROW : '->' ;
UNDERSCORE : '_' ;
QUOTE : '"' ;

DEFAULT : 'default' ;
INCLUDE : 'include' ;

INT : [0-9]+ ;
STR: '"' ~["]* '"';

ID: [a-zA-Z_][a-zA-Z_0-9]* ;

WS: [ \t\n\r\f]+ -> skip ;
