#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

typedef struct Symbol {
    char* name;
    char* type;
} Symbol;

Symbol* find_symbol(const char* name);
void add_symbol(const char* name, const char* type);

#endif
