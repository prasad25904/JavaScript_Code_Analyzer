#include "ast.h"
#include "symbol_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Perform semantic analysis on the AST
void semantic_check(ASTNode *node) {
    if (!node) return;

    if (strcmp(node->name, "VarDecl") == 0 ||
        strcmp(node->name, "LetDecl") == 0 ||
        strcmp(node->name, "ConstDecl") == 0) {
        const char *type;
        if (strcmp(node->name, "VarDecl") == 0) type = "var";
        else if (strcmp(node->name, "LetDecl") == 0) type = "let";
        else type = "const";

        if (!find_symbol(node->left->name)) {
            add_symbol(node->left->name, type);
        } else {
            printf("Semantic Warning: Variable '%s' already declared.\n", node->left->name);
        }
    }

    if (strcmp(node->name, "Assignment") == 0) {
        if (!find_symbol(node->left->name)) {
            printf("Semantic Error: Variable '%s' not declared before assignment.\n", node->left->name);
        }
    }

    semantic_check(node->left);
    semantic_check(node->right);
}
