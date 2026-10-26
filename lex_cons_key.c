#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[200], token[50];
    int i = 0, j;

    printf("Enter statement: ");
    fgets(s, sizeof(s), stdin);

    while (s[i] != '\0') {
        if (isspace(s[i])) {
            i++;
        }
        else if (isalpha(s[i])) {
            j = 0;
            while (isalnum(s[i]))
                token[j++] = s[i++];
            token[j] = '\0';

            if (strcmp(token, "int") == 0 ||
                strcmp(token, "float") == 0 ||
                strcmp(token, "if") == 0 ||
                strcmp(token, "return") == 0)
                printf("%s : Keyword\n", token);
            else
                printf("%s : Identifier\n", token);
        }
        else if (isdigit(s[i])) {
            printf("%c : Constant\n", s[i++]);
        }
        else if (strchr("+-*/=", s[i])) {
            printf("%c : Operator\n", s[i++]);
        }
        else {
            printf("%c : Special symbol\n", s[i++]);
        }
    }

    return 0;
}