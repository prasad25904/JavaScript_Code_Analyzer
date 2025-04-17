%code requires {
    #include "ast.h"
}

%{
#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char *s) {
    fprintf(stderr, "Parser Error: %s\n", s);
}

ASTNode *root;
%}

%union {
    char *str;
    int num;
    ASTNode *node;
}

%token FUNCTION VAR LET CONST IF ELSE WHILE RETURN
%token <num> NUMBER
%token <str> IDENTIFIER STRING
%token ASSIGN PLUS MINUS MULTIPLY DIVIDE
%token EQUALITY LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
%token LBRACE RBRACE LPAREN RPAREN SEMICOLON COMMA LBRACKET RBRACKET COLON

%type <node> program function_def statement statement_list expression if_statement if_else_statement while_statement arg_list param_list object_pairs

%left PLUS MINUS
%left MULTIPLY DIVIDE
%nonassoc LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL

%%

program:
      function_def                        { root = $1; }
    | program function_def                { $$ = new_node("FunctionList", $1, $2); }
    | statement_list                      { root = $1; }
    ;

function_def:
      FUNCTION IDENTIFIER LPAREN param_list RPAREN LBRACE statement_list RBRACE
    {
        ASTNode *paramsNode = new_node("Params", $4, NULL);
        ASTNode *bodyNode = $7;
        $$ = new_node("Function", new_node($2, paramsNode, NULL), bodyNode);
        free($2);
        print_ast($$, 0);
    }
    ;

param_list:
      /* empty */                         { $$ = NULL; }
    | IDENTIFIER                          { $$ = new_node($1, NULL, NULL); free($1); }
    | param_list COMMA IDENTIFIER         { $$ = new_node("ParamList", $1, new_node($3, NULL, NULL)); free($3); }
    ;

arg_list:
      /* empty */                         { $$ = NULL; }
    | expression                          { $$ = $1; }
    | arg_list COMMA expression           { $$ = new_node("ArgList", $1, $3); }
    ;

statement_list:
      statement                           { $$ = $1; }
    | statement_list statement            { $$ = new_node("StatementList", $1, $2); }
    ;

if_statement:
      IF LPAREN expression RPAREN LBRACE statement_list RBRACE
    { $$ = new_node("If", $3, $6); }
    ;

if_else_statement:
      IF LPAREN expression RPAREN LBRACE statement_list RBRACE
      ELSE LBRACE statement_list RBRACE
    { $$ = new_node("IfElse", $3, new_node("Else", $6, $10)); }
    ;

while_statement:
      WHILE LPAREN expression RPAREN LBRACE statement_list RBRACE
    { $$ = new_node("While", $3, $6); }
    ;

statement:
      VAR IDENTIFIER ASSIGN expression SEMICOLON
    { $$ = new_node("VarDecl", new_node($2, NULL, NULL), $4); free($2); }
    | LET IDENTIFIER ASSIGN expression SEMICOLON
    { $$ = new_node("LetDecl", new_node($2, NULL, NULL), $4); free($2); }
    | CONST IDENTIFIER ASSIGN expression SEMICOLON
    { $$ = new_node("ConstDecl", new_node($2, NULL, NULL), $4); free($2); }
    | IDENTIFIER ASSIGN expression SEMICOLON
    { $$ = new_node("Assignment", new_node($1, NULL, NULL), $3); free($1); }
    | RETURN expression SEMICOLON
    { $$ = new_node("Return", $2, NULL); }
    | expression SEMICOLON
    { $$ = new_node("Expression", $1, NULL); }
    | if_statement
    | if_else_statement
    | while_statement
    | error SEMICOLON                     { $$ = NULL; }
    ;

expression:
      expression PLUS expression          { $$ = new_node("Plus", $1, $3); }
    | expression MINUS expression         { $$ = new_node("Minus", $1, $3); }
    | expression MULTIPLY expression      { $$ = new_node("Multiply", $1, $3); }
    | expression DIVIDE expression        { $$ = new_node("Divide", $1, $3); }
    | expression LESS_THAN expression     { $$ = new_node("LessThan", $1, $3); }
    | expression GREATER_THAN expression  { $$ = new_node("GreaterThan", $1, $3); }
    | expression LESS_EQUAL expression    { $$ = new_node("LessEqual", $1, $3); }
    | expression GREATER_EQUAL expression { $$ = new_node("GreaterEqual", $1, $3); }
    | IDENTIFIER                          { $$ = new_node($1, NULL, NULL); free($1); }
    | NUMBER {
        char buf[20];
        sprintf(buf, "%d", $1);
        $$ = new_node(buf, NULL, NULL);
    }
    | STRING                              { $$ = new_node($1, NULL, NULL); free($1); }
    | IDENTIFIER LPAREN arg_list RPAREN  {
        ASTNode *callArgs = $3;
        $$ = new_node("Call", new_node($1, NULL, NULL), callArgs);
        free($1);
    }
    | LBRACKET expression RBRACKET        { $$ = new_node("Array", $2, NULL); }
    | LBRACE object_pairs RBRACE          { $$ = new_node("Object", $2, NULL); }
    | LPAREN expression RPAREN            { $$ = $2; }
    ;

object_pairs:
      STRING COLON expression
    {
        $$ = new_node("Pair", new_node($1, NULL, NULL), $3);
        free($1);
    }
    | object_pairs COMMA STRING COLON expression
    {
        ASTNode *pair = new_node("Pair", new_node($3, NULL, NULL), $5);
        free($3);
        $$ = new_node("ObjectPairs", $1, pair);
    }
    ;

%%

ASTNode *new_node(char *name, ASTNode *left, ASTNode *right) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->name = strdup(name);
    node->left = left;
    node->right = right;
    return node;
}

void print_ast(ASTNode *node, int depth) {
    if (!node) return;
    for (int i = 0; i < depth; i++) printf("  ");
    printf("%s\n", node->name);
    print_ast(node->left, depth + 1);
    print_ast(node->right, depth + 1);
}

void export_ast_to_dot(ASTNode *node, FILE *out) {
    static int node_id = 0;
    int current_id = node_id++;

    fprintf(out, "  node%d [label=\"%s\"];\n", current_id, node->name);

    if (node->left) {
        int left_id = node_id;
        export_ast_to_dot(node->left, out);
        fprintf(out, "  node%d -> node%d;\n", current_id, left_id);
    }

    if (node->right) {
        int right_id = node_id;
        export_ast_to_dot(node->right, out);
        fprintf(out, "  node%d -> node%d;\n", current_id, right_id);
    }
}

void export_ast_to_json(ASTNode *node, FILE *out) {
    if (!node) {
        fprintf(out, "null");
        return;
    }

    fprintf(out, "{ \"name\": \"%s\"", node->name);

    if (node->left || node->right) {
        fprintf(out, ", \"children\": [");
        export_ast_to_json(node->left, out);
        if (node->right) {
            fprintf(out, ", ");
            export_ast_to_json(node->right, out);
        }
        fprintf(out, "]");
    }

    fprintf(out, "}");
}



int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            fprintf(stderr, "Error opening file %s\n", argv[1]);
            return 1;
        }
        yyin = file;
    }

    yyparse(); // builds the AST and assigns it to `root`

    // Export AST to Graphviz DOT format
    FILE *dotfile = fopen("ast.dot", "w");
    if (dotfile) {
        fprintf(dotfile, "digraph AST {\n");
        export_ast_to_dot(root, dotfile);
        fprintf(dotfile, "}\n");
        fclose(dotfile);
        printf("AST exported to ast.dot\n");
    } else {
        fprintf(stderr, "Error writing to ast.dot\n");
    }

    // Export AST to JSON format
    FILE *jsonfile = fopen("ast.json", "w");
    if (jsonfile) {
        export_ast_to_json(root, jsonfile);
        fclose(jsonfile);
        printf("AST exported to ast.json\n");
    } else {
        fprintf(stderr, "Error writing to ast.json\n");
    }

    return 0;
}
