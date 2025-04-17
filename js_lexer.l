%{
#include "js_parser.tab.h"
#include <string.h>
#include <stdlib.h>
%}

%%

"function"     { return FUNCTION; }
"var"          { return VAR; }
"let"          { return LET; }
"const"        { return CONST; }
"if"           { return IF; }
"else"         { return ELSE; }
"while"        { return WHILE; }
"return"       { return RETURN; }

[0-9]+         { yylval.num = atoi(yytext); return NUMBER; }
\"([^\\\"]|\\.)*\"  { yylval.str = strdup(yytext); return STRING; }

"=="           { return EQUALITY; }
"<="           { return LESS_EQUAL; }
">="           { return GREATER_EQUAL; }
"<"            { return LESS_THAN; }
">"            { return GREATER_THAN; }

"="            { return ASSIGN; }
"+"            { return PLUS; }
"-"            { return MINUS; }
"*"            { return MULTIPLY; }
"/"            { return DIVIDE; }

"{"            { return LBRACE; }
"}"            { return RBRACE; }
"("            { return LPAREN; }
")"            { return RPAREN; }
";"            { return SEMICOLON; }
":"            { return COLON; }
","            { return COMMA; }
"["            { return LBRACKET; }
"]"            { return RBRACKET; }

[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }

[ \t\n\r]+     { /* skip whitespace */ }

.              { printf("Unknown character: %s\n", yytext); }

%%

int yywrap() {
    return 1;
}
