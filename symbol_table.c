#include "symbol_table.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEFAULT_SIZE 100

unsigned int hash(const char* str, int size) {
    unsigned int hash_value = 0;
    while (*str) {
        hash_value = (hash_value << 5) + *str++;
    }
    return hash_value % size;
}

SymbolTable* create_symbol_table() {
    SymbolTable *st = malloc(sizeof(SymbolTable));
    st->size = DEFAULT_SIZE;
    st->table = calloc(st->size, sizeof(Symbol*));
    return st;
}

void free_symbol_table(SymbolTable *table) {
    if (!table) return;
    
    for (int i = 0; i < table->size; i++) {
        Symbol *current = table->table[i];
        while (current) {
            Symbol *temp = current;
            current = current->next;
            free(temp->name);
            free(temp->type);
            free(temp);
        }
    }
    free(table->table);
    free(table);
}

void add_symbol(SymbolTable *table, const char* name, const char* type) {
    unsigned int index = hash(name, table->size);
    Symbol *symbol = malloc(sizeof(Symbol));
    symbol->name = strdup(name);
    symbol->type = strdup(type);
    symbol->next = table->table[index];
    table->table[index] = symbol;
}

Symbol* find_symbol(SymbolTable *table, const char* name) {
    unsigned int index = hash(name, table->size);
    Symbol *current = table->table[index];
    while (current) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void print_symbol_table(SymbolTable *table) {
    printf("Symbol Table:\n");
    for (int i = 0; i < table->size; i++) {
        Symbol *current = table->table[i];
        while (current) {
            printf("%s: %s\n", current->name, current->type);
            current = current->next;
        }
    }
}