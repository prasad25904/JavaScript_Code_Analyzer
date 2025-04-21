%{
#include "ast.h"
#include "symbol_table.h"
#include "semantic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex(void);
extern FILE *yyin;
extern char *yytext;
extern int yylineno;

void yyerror(const char *s) {
    fprintf(stderr, "Parser Error at line %d: %s\n", yylineno, s);
}

ASTNode *root;
SymbolTable *symbolTable;

char* escape_string(const char *str) {
    char *escaped = malloc(strlen(str)*2 + 1);
    char *ptr = escaped;
    while (*str) {
        if (*str == '"') {
            *ptr++ = '\\';
        }
        *ptr++ = *str++;
    }
    *ptr = '\0';
    return escaped;
}
%}

%union {
    char *str;
    int num;
    struct ASTNode *node;
}

/* Tokens */
%token OR AND
%token FUNCTION VAR LET CONST IF ELSE WHILE RETURN
%token INSTANCEOF IN TYPEOF VOID DELETE NEW THIS
%token PLUS_PLUS MINUS_MINUS LEFT_SHIFT RIGHT_SHIFT UNSIGNED_RIGHT_SHIFT
%token <num> NUMBER
%token <str> IDENTIFIER STRING BOOLEAN
%token ASSIGN PLUS MINUS MULTIPLY DIVIDE MODULO
%token NOT BIT_NOT BIT_AND BIT_OR BIT_XOR
%token EQUALITY NEQ STRICT_EQUALITY STRICT_INEQUALITY
%token LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL
%token LBRACE RBRACE LPAREN RPAREN SEMICOLON COMMA LBRACKET RBRACKET COLON DOT

/* Non-terminals */
%type <node> program function_def statement statement_list expression 
%type <node> if_statement if_else_statement while_statement arg_list param_list 
%type <node> object_properties object_property array_elements primary_expr
%type <node> literal identifier array_literal object_literal 
%type <node> assignment_expr conditional_expr
%type <node> logical_or_expr logical_and_expr
%type <node> bitwise_or_expr bitwise_xor_expr bitwise_and_expr
%type <node> equality_expr relational_expr shift_expr
%type <node> additive_expr multiplicative_expr unary_expr postfix_expr

/* Operator precedence */
%left COMMA
%right ASSIGN
%left OR
%left AND
%left BIT_OR
%left BIT_XOR
%left BIT_AND
%left EQUALITY NEQ STRICT_EQUALITY STRICT_INEQUALITY
%left LESS_THAN GREATER_THAN LESS_EQUAL GREATER_EQUAL INSTANCEOF IN
%left LEFT_SHIFT RIGHT_SHIFT UNSIGNED_RIGHT_SHIFT
%left PLUS MINUS
%left MULTIPLY DIVIDE MODULO
%right NOT BIT_NOT TYPEOF VOID DELETE NEW
%right PLUS_PLUS MINUS_MINUS
%left DOT LBRACKET
%nonassoc LPAREN

%expect 1  /* Expected dangling else conflict */

%%

program:
      function_def                        { root = $1; }
    | program function_def                { $$ = new_node("Program", $1, $2); }
    | statement_list                      { root = $1; }
    ;

function_def:
      FUNCTION IDENTIFIER LPAREN param_list RPAREN LBRACE statement_list RBRACE
    {
        ASTNode *paramsNode = new_node("Params", $4, NULL);
        ASTNode *bodyNode = $7;
        $$ = new_node("Function", new_node($2, NULL, paramsNode), bodyNode);
        free($2);
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
      IF LPAREN expression RPAREN statement
    { $$ = new_node("If", $3, $5); }
    ;

if_else_statement:
      IF LPAREN expression RPAREN statement ELSE statement
    { $$ = new_node("IfElse", $3, new_node("Else", $5, $7)); }
    ;

while_statement:
      WHILE LPAREN expression RPAREN statement
    { $$ = new_node("While", $3, $5); }
    ;

statement:
      VAR IDENTIFIER ASSIGN expression SEMICOLON
    { $$ = new_node("VarDecl", new_node($2, NULL, NULL), $4); free($2); }
    | LET IDENTIFIER ASSIGN expression SEMICOLON
    { $$ = new_node("LetDecl", new_node($2, NULL, NULL), $4); free($2); }
    | CONST IDENTIFIER ASSIGN expression SEMICOLON
    { $$ = new_node("ConstDecl", new_node($2, NULL, NULL), $4); free($2); }
    | expression SEMICOLON
    { $$ = $1; }
    | if_statement
    | if_else_statement
    | while_statement
    | RETURN expression SEMICOLON
    { $$ = new_node("Return", $2, NULL); }
    | LBRACE statement_list RBRACE
    { $$ = $2; }
    | error SEMICOLON                     { $$ = NULL; }
    ;

expression:
      assignment_expr
    ;

assignment_expr:
      conditional_expr
    | IDENTIFIER ASSIGN assignment_expr   { $$ = new_node("Assignment", new_node($1, NULL, NULL), $3); free($1); }
    ;

conditional_expr:
      logical_or_expr
    | logical_or_expr '?' expression ':' conditional_expr 
    { $$ = new_node("Ternary", $1, new_node(":", $3, $5)); }
    ;

logical_or_expr:
      logical_and_expr
    | logical_or_expr OR logical_and_expr { $$ = new_node("LogicalOr", $1, $3); }
    ;

logical_and_expr:
      bitwise_or_expr
    | logical_and_expr AND bitwise_or_expr { $$ = new_node("LogicalAnd", $1, $3); }
    ;

bitwise_or_expr:
      bitwise_xor_expr
    | bitwise_or_expr BIT_OR bitwise_xor_expr { $$ = new_node("BitwiseOr", $1, $3); }
    ;

bitwise_xor_expr:
      bitwise_and_expr
    | bitwise_xor_expr BIT_XOR bitwise_and_expr { $$ = new_node("BitwiseXor", $1, $3); }
    ;

bitwise_and_expr:
      equality_expr
    | bitwise_and_expr BIT_AND equality_expr { $$ = new_node("BitwiseAnd", $1, $3); }
    ;

equality_expr:
      relational_expr
    | equality_expr EQUALITY relational_expr { $$ = new_node("Equality", $1, $3); }
    | equality_expr NEQ relational_expr    { $$ = new_node("Inequality", $1, $3); }
    | equality_expr STRICT_EQUALITY relational_expr { $$ = new_node("StrictEquality", $1, $3); }
    | equality_expr STRICT_INEQUALITY relational_expr { $$ = new_node("StrictInequality", $1, $3); }
    ;

relational_expr:
      shift_expr
    | relational_expr LESS_THAN shift_expr { $$ = new_node("LessThan", $1, $3); }
    | relational_expr GREATER_THAN shift_expr { $$ = new_node("GreaterThan", $1, $3); }
    | relational_expr LESS_EQUAL shift_expr { $$ = new_node("LessEqual", $1, $3); }
    | relational_expr GREATER_EQUAL shift_expr { $$ = new_node("GreaterEqual", $1, $3); }
    | relational_expr INSTANCEOF shift_expr { $$ = new_node("InstanceOf", $1, $3); }
    | relational_expr IN shift_expr       { $$ = new_node("In", $1, $3); }
    ;

shift_expr:
      additive_expr
    | shift_expr LEFT_SHIFT additive_expr { $$ = new_node("LeftShift", $1, $3); }
    | shift_expr RIGHT_SHIFT additive_expr { $$ = new_node("RightShift", $1, $3); }
    | shift_expr UNSIGNED_RIGHT_SHIFT additive_expr { $$ = new_node("UnsignedRightShift", $1, $3); }
    ;

additive_expr:
      multiplicative_expr
    | additive_expr PLUS multiplicative_expr { $$ = new_node("Add", $1, $3); }
    | additive_expr MINUS multiplicative_expr { $$ = new_node("Subtract", $1, $3); }
    ;

multiplicative_expr:
      unary_expr
    | multiplicative_expr MULTIPLY unary_expr { $$ = new_node("Multiply", $1, $3); }
    | multiplicative_expr DIVIDE unary_expr { $$ = new_node("Divide", $1, $3); }
    | multiplicative_expr MODULO unary_expr { $$ = new_node("Modulo", $1, $3); }
    ;

unary_expr:
      postfix_expr
    | NOT unary_expr                     { $$ = new_node("LogicalNot", $2, NULL); }
    | BIT_NOT unary_expr                  { $$ = new_node("BitwiseNot", $2, NULL); }
    | PLUS unary_expr                     { $$ = new_node("UnaryPlus", $2, NULL); }
    | MINUS unary_expr                    { $$ = new_node("UnaryMinus", $2, NULL); }
    | TYPEOF unary_expr                   { $$ = new_node("TypeOf", $2, NULL); }
    | VOID unary_expr                     { $$ = new_node("Void", $2, NULL); }
    | DELETE unary_expr                   { $$ = new_node("Delete", $2, NULL); }
    | NEW unary_expr                      { $$ = new_node("New", $2, NULL); }
    ;

postfix_expr:
      primary_expr
    | postfix_expr LBRACKET expression RBRACKET { $$ = new_node("ArrayAccess", $1, $3); }
    | postfix_expr DOT IDENTIFIER         { $$ = new_node("MemberAccess", $1, new_node($3, NULL, NULL)); free($3); }
    | postfix_expr LPAREN arg_list RPAREN { $$ = new_node("Call", $1, $3); }
    | postfix_expr PLUS_PLUS              { $$ = new_node("PostIncrement", $1, NULL); }
    | postfix_expr MINUS_MINUS            { $$ = new_node("PostDecrement", $1, NULL); }
    ;

primary_expr:
      literal
    | identifier
    | array_literal
    | object_literal
    | LPAREN expression RPAREN            { $$ = $2; }
    | THIS                                { $$ = new_node("This", NULL, NULL); }
    ;

literal:
      NUMBER {
        char buf[20];
        sprintf(buf, "%d", $1);
        $$ = new_node(buf, NULL, NULL);
      }
    | STRING                             { $$ = new_node($1, NULL, NULL); free($1); }
    | BOOLEAN                            { $$ = new_node($1, NULL, NULL); free($1); }
    ;

identifier:
      IDENTIFIER                         { $$ = new_node($1, NULL, NULL); free($1); }
    ;

array_literal:
      LBRACKET array_elements RBRACKET   { $$ = new_node("Array", $2, NULL); }
    ;

object_literal:
      LBRACE object_properties RBRACE    { $$ = new_node("Object", $2, NULL); }
    ;

object_properties:
      /* empty */                        { $$ = NULL; }
    | object_property                    { $$ = $1; }
    | object_properties COMMA object_property { $$ = new_node("ObjectProperties", $1, $3); }
    ;

object_property:
      IDENTIFIER COLON expression        { $$ = new_node("Property", new_node($1, NULL, NULL), $3); free($1); }
    | STRING COLON expression            { $$ = new_node("Property", new_node($1, NULL, NULL), $3); free($1); }
    ;

array_elements:
      /* empty */                        { $$ = NULL; }
    | expression                         { $$ = $1; }
    | array_elements COMMA expression    { $$ = new_node("ArrayElements", $1, $3); }
    ;

%%

void print_ast_indented(ASTNode *node, int depth) {
    if (!node) return;
    
    // Print indentation
    for (int i = 0; i < depth; i++) 
        printf("  ");
    
    // Print node name
    printf("%s", node->name);
    
    // Handle special cases for better formatting
    if (node->left || node->right) {
        printf("\n");
        print_ast_indented(node->left, depth + 1);
        print_ast_indented(node->right, depth + 1);
    } else {
        printf("\n");
    }
}

ASTNode *new_node(char *name, ASTNode *left, ASTNode *right) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->name = strdup(name);
    node->left = left;
    node->right = right;
    return node;
}

void export_ast_to_dot(ASTNode *node, FILE *out) {
    static int node_id = 0;
    int current_id = node_id++;

    char *escaped_name = escape_string(node->name);
    fprintf(out, "  node%d [label=\"%s\"];\n", current_id, escaped_name);
    free(escaped_name);

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
    symbolTable = create_symbol_table();
    
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            fprintf(stderr, "Error opening file %s\n", argv[1]);
            return 1;
        }
        yyin = file;
    }

    yyparse();

    // Perform semantic analysis
    semantic_check(root, symbolTable);
    print_symbol_table(symbolTable);

    // Print AST to console
    printf("\nAbstract Syntax Tree:\n");
    print_ast_indented(root, 0);

    // Export AST to files
    FILE *dotfile = fopen("ast.dot", "w");
    if (dotfile) {
        fprintf(dotfile, "digraph AST {\n");
        export_ast_to_dot(root, dotfile);
        fprintf(dotfile, "}\n");
        fclose(dotfile);
        printf("\nAST exported to ast.dot\n");
    }

    FILE *jsonfile = fopen("ast.json", "w");
    if (jsonfile) {
        export_ast_to_json(root, jsonfile);
        fclose(jsonfile);
        printf("AST exported to ast.json\n");
    }

    free_symbol_table(symbolTable);
    return 0;
}