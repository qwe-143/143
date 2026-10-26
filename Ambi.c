#include <stdio.h>

int main() {
    printf("Grammar:\n");
    printf("E -> E+E | E*E | id\n\n");

    printf("Expression: id+id*id\n\n");

    printf("Parse 1: (id+id)*id\n");
    printf("Parse 2: id+(id*id)\n\n");

    printf("Both parses are possible.\n");
    printf("Therefore, the grammar is ambiguous.\n");

    return 0;
}