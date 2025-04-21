#ifndef SEMANTIC_H
#define SEMANTIC_H

#include "ast.h"
#include "symbol_table.h"

void semantic_check(ASTNode *node, SymbolTable *table);
void check_variable_declaration(ASTNode *node, SymbolTable *table);
void check_function_calls(ASTNode *node, SymbolTable *table);

#endif