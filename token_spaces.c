#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, tokens = 0, spaces = 0;

    printf("Enter a statement: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        if (str[i] != ' ' && (i == 0 || str[i-1] == ' '))
            tokens++;
    }

    printf("Tokens = %d\n", tokens);
    printf("Whitespaces = %d\n", spaces);

    return 0;
}