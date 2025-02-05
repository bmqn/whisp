parser grammar fmcSGrammar;
options { tokenVocab=fmcSLexer; }

lit         : INT
            | STR
            ;

var         : ID
            ;

loc         : ID
            ;

binder      : ID
            ;

app         : LSQUARE term RSQUARE loc?
            | LSQUARE lit RSQUARE loc?
            ;

abs         : loc? LTRIAN binder RTRIAN
            | loc? LTRIAN UNDERSCORE RTRIAN
            ;

locApp      : LSQUARE HASH var RSQUARE loc?
            ;

locAbs      : loc? LTRIAN AT binder RTRIAN
            | loc? LTRIAN UNDERSCORE RTRIAN
            ;

cond        : lit WS* ARROW WS* term
            ;
        
conds       : loc? LCURLY (WS* cond WS* COMMA)* WS* term WS* RCURLY
            ;

op          : PLUS
            | LTRIAN
            ;

term        : STAR
            | var (WS* DOT WS* term)?
            | app (WS* DOT WS* term)?
            | abs (WS* DOT WS* term)?
            | locApp (WS* DOT WS* term)?
            | locAbs (WS* DOT WS* term)?
            | conds (WS* DOT WS* term)?
            | op (WS* DOT WS* term)?
            ;

include     : HASH INCLUDE QUOTE ID QUOTE
            ;

function    : ID WS* EQ WS* LPAREN WS* term WS* RPAREN
            ;

program     : include* WS* function*
            ;
