#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef struct Symbol {
    char *name;
    char *type;
    struct Symbol *next;  // For chaining in hash table
} Symbol;

typedef struct {
    Symbol **table;
    int size;
} SymbolTable;

SymbolTable* create_symbol_table();
void free_symbol_table(SymbolTable *table);
void add_symbol(SymbolTable *table, const char* name, const char* type);
Symbol* find_symbol(SymbolTable *table, const char* name);
void print_symbol_table(SymbolTable *table);

#endif
