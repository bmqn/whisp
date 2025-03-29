parser grammar fmcSGrammar;
options { tokenVocab=fmcSLexer; }

lit         : INT
            | STR
            ;

var         : ID
            ;

loc         : ID
            ;

seqVar      : ID
            | ID EXCLAM
            ;

appCast     : CAST WS* ID
            ;

seqApp      : LSQUARE seqTerm appCast? RSQUARE loc?
            | LSQUARE lit appCast? RSQUARE loc?
            ;

seqLocApp   : LSQUARE HASH var RSQUARE loc?
            ;

binder      : ID
            ;

absCast     : CAST WS* ID
            ;

seqAbs      : loc? LTRIAN binder absCast? RTRIAN
            | loc? LTRIAN UNDERSCORE RTRIAN
            ;

seqLocAbs   : loc? LTRIAN AT binder RTRIAN
            | loc? LTRIAN UNDERSCORE RTRIAN
            ;

cond        : lit WS* ARROW WS* seqTerm
            ;

seqConds    : loc? LCURLY (WS* cond WS* COMMA)* WS* seqTerm WS* RCURLY
            ;

bitSftL     : LTRIAN LTRIAN
            ;

bitSftR     : RTRIAN RTRIAN
            ;

seqOp       : PLUS
            | LTRIAN
            | VERTBAR
            | bitSftL
            | bitSftR
            ;

seqTerm     : STAR
            | seqVar (WS* DOT WS* seqTerm)?
            | seqApp (WS* DOT WS* seqTerm)?
            | seqAbs (WS* DOT WS* seqTerm)?
            | seqLocApp (WS* DOT WS* seqTerm)?
            | seqLocAbs (WS* DOT WS* seqTerm)?
            | seqConds (WS* DOT WS* seqTerm)?
            | seqOp (WS* DOT WS* seqTerm)?
            ;

include     : HASH INCLUDE QUOTE ID QUOTE
            ;

function    : ID WS* EQ WS* LPAREN WS* seqTerm WS* RPAREN
            ;

program     : include* WS* function*
            ;
