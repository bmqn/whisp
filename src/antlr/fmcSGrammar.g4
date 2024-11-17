parser grammar fmcSGrammar;
options { tokenVocab=fmcSLexer; }

lit         : INT
            | STR
            ;

var         : ID
            ;

binder      : ID
            ;

app         : LSQUARE term RSQUARE var?
            | LSQUARE lit RSQUARE var?
            ;

abs         : var? LTRIAN binder RTRIAN
            | var? LTRIAN UNDERSCORE RTRIAN
            ;

locApp      : LSQUARE HASH var RSQUARE var?
            ;

locAbs      : var? LTRIAN AT binder RTRIAN
            | var? LTRIAN UNDERSCORE RTRIAN
            ;

cond        : var WS* ARROW WS* term
            ;
        
conds       : var? LCURLY cond (COMMA cond)* RCURLY
            ;

term        : STAR
            | var (WS* DOT WS* term)?
            | app (WS* DOT WS* term)?
            | abs (WS* DOT WS* term)?
            | locApp (WS* DOT WS* term)?
            | locAbs (WS* DOT WS* term)?
            | conds (WS* DOT WS* term)?
            ;

include     : HASH INCLUDE QUOTE ID QUOTE
            ;

function    : ID WS* EQ WS* LPAREN WS* term WS* RPAREN
            ;

program     : include* WS* function*
            ;
