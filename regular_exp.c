#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter string: ");
    scanf("%99s", s);

    while (islower(s[i]))
        i++;

    if (i == 0) {
        printf("Invalid pattern");
        return 0;
    }

    while (isdigit(s[i]))
        i++;

    if (s[i] == '\0')
        printf("Valid pattern");
    else
        printf("Invalid pattern");

    return 0;
}