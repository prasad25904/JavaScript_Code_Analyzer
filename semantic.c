#include "semantic.h"
#include <stdio.h>
#include <string.h>

void check_variable_declaration(ASTNode *node, SymbolTable *table) {
    if (!node || !table) return;
    
    const char *type = NULL;
    if (strcmp(node->name, "VarDecl") == 0) type = "var";
    else if (strcmp(node->name, "LetDecl") == 0) type = "let";
    else if (strcmp(node->name, "ConstDecl") == 0) type = "const";
    
    if (type && node->left) {
        if (!find_symbol(table, node->left->name)) {
            add_symbol(table, node->left->name, type);
        } else {
            printf("Semantic Warning: Variable '%s' already declared.\n", node->left->name);
        }
    }
}

void check_function_calls(ASTNode *node, SymbolTable *table) {
    // Implement function call checks as needed
    // This is a placeholder for actual implementation
}

void semantic_check(ASTNode *node, SymbolTable *table) {
    if (!node || !table) return;

    check_variable_declaration(node, table);
    
    if (strcmp(node->name, "Assignment") == 0 && node->left) {
        if (!find_symbol(table, node->left->name)) {
            printf("Semantic Error: Variable '%s' not declared before assignment.\n", node->left->name);
        }
    }

    semantic_check(node->left, table);
    semantic_check(node->right, table);
}