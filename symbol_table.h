#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef struct Symbol {
    char *name;
    char *type;
} Symbol;

void add_symbol(const char* name, const char* type);
Symbol* find_symbol(const char* name);
void print_symbol_table();

#endif // SYMBOL_TABLE_H
