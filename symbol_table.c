#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbol_table.h"

#define SYMBOL_TABLE_SIZE 100

// Symbol table to store variables
Symbol* symbol_table[SYMBOL_TABLE_SIZE];

unsigned int hash(const char* str) {
    unsigned int hash_value = 0;
    while (*str) {
        hash_value = (hash_value << 5) + *str++;
    }
    return hash_value % SYMBOL_TABLE_SIZE;
}

Symbol* find_symbol(const char* name) {
    unsigned int index = hash(name);
    if (symbol_table[index] != NULL && strcmp(symbol_table[index]->name, name) == 0) {
        return symbol_table[index];
    }
    return NULL;
}

void add_symbol(const char* name, const char* type) {
    unsigned int index = hash(name);
    if (symbol_table[index] == NULL) {
        symbol_table[index] = malloc(sizeof(Symbol));
        symbol_table[index]->name = strdup(name);
        symbol_table[index]->type = strdup(type);
    } else {
        // Handle the case of symbol collision or already existing symbol
        printf("Symbol already exists: %s\n", name);
    }
}
