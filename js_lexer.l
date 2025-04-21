%{
#include "js_parser.tab.h"
#include <string.h>
#include <stdlib.h>

/* Manual column tracking */
int yycolumn = 1;

void remove_quotes(char* str) {
    if (str[0] == '"') {
        memmove(str, str+1, strlen(str));
        str[strlen(str)-1] = '\0';
    }
}
%}

%option noyywrap
%option yylineno
%option nounput
%option noinput
%option case-sensitive

%%

"function"     { return FUNCTION; }
"var"          { return VAR; }
"let"          { return LET; }
"const"        { return CONST; }
"if"           { return IF; }
"else"         { return ELSE; }
"while"        { return WHILE; }
"return"       { return RETURN; }
"true"         { yylval.str = strdup("true"); return BOOLEAN; }
"false"        { yylval.str = strdup("false"); return BOOLEAN; }
"instanceof"   { return INSTANCEOF; }
"in"           { return IN; }
"typeof"       { return TYPEOF; }
"void"         { return VOID; }
"delete"       { return DELETE; }
"new"          { return NEW; }
"this"         { return THIS; }

"++"           { return PLUS_PLUS; }
"--"           { return MINUS_MINUS; }
"<<"           { return LEFT_SHIFT; }
">>"           { return RIGHT_SHIFT; }
">>>"          { return UNSIGNED_RIGHT_SHIFT; }
"||"           { return OR; }
"&&"           { return AND; }
"=="           { return EQUALITY; }
"!="           { return NEQ; }
"==="          { return STRICT_EQUALITY; }
"!=="          { return STRICT_INEQUALITY; }
"<="           { return LESS_EQUAL; }
">="           { return GREATER_EQUAL; }
"<"            { return LESS_THAN; }
">"            { return GREATER_THAN; }

"="            { return ASSIGN; }
"+"            { return PLUS; }
"-"            { return MINUS; }
"*"            { return MULTIPLY; }
"/"            { return DIVIDE; }
"%"            { return MODULO; }
"!"            { return NOT; }
"~"            { return BIT_NOT; }
"&"            { return BIT_AND; }
"|"            { return BIT_OR; }
"^"            { return BIT_XOR; }
"."            { return DOT; }

"{"            { return LBRACE; }
"}"            { return RBRACE; }
"("            { return LPAREN; }
")"            { return RPAREN; }
";"            { return SEMICOLON; }
":"            { return COLON; }
","            { return COMMA; }
"["            { return LBRACKET; }
"]"            { return RBRACKET; }

[0-9]+         { yylval.num = atoi(yytext); return NUMBER; }
\"([^\\\"]|\\.)*\"  { 
    yylval.str = strdup(yytext); 
    remove_quotes(yylval.str);
    return STRING; 
}

[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }

[ \t]+         { yycolumn += yyleng; }
\n             { yylineno++; yycolumn = 1; }
\r\n           { yylineno++; yycolumn = 1; }
\r             { yylineno++; yycolumn = 1; }

.              { 
    fprintf(stderr, "Lexical error at line %d, column %d: unexpected character '%s'\n", 
            yylineno, yycolumn, yytext); 
    return 0; 
}

%%

/* Remove yywrap implementation since we're using %option noyywrap */