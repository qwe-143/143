#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    int i = 0;

    printf("Enter first alternative: ");
    scanf("%49s", a);

    printf("Enter second alternative: ");
    scanf("%49s", b);

    while (a[i] == b[i] && a[i] != '\0')
        i++;

    if (i == 0) {
        printf("No left factoring required");
    } else {
        printf("A -> ");
        for (int j = 0; j < i; j++)
            printf("%c", a[j]);

        printf("A'\nA' -> %s | %s",
               a[i] ? a + i : "epsilon",
               b[i] ? b + i : "epsilon");
    }

    return 0;
}