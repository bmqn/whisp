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

seqApp      : LSQUARE seqTerm RSQUARE loc?
            | LSQUARE lit RSQUARE loc?
            ;

seqLocApp   : LSQUARE HASH var RSQUARE loc?
            ;

binder      : ID
            ;

seqAbs      : loc? LTRIAN binder RTRIAN
            | loc? LTRIAN UNDERSCORE RTRIAN
            ;

seqLocAbs   : loc? LTRIAN AT binder RTRIAN
            | loc? LTRIAN UNDERSCORE RTRIAN
            ;

cond        : lit WS* ARROW WS* seqTerm
            ;

seqConds    : loc? LCURLY (WS* cond WS* COMMA)* WS* seqTerm WS* RCURLY
            ;

seqOp       : PLUS
            | LTRIAN
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
