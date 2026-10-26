#include <stdio.h>
#include <ctype.h>

char lhs[20], rhs[20][20];
int n;

void FIRST(char c) {
    int i, j;

    for (i = 0; i < n; i++) {
        if (lhs[i] == c) {
            if (!isupper(rhs[i][0]))
                printf("%c ", rhs[i][0]);
            else
                for (j = 0; j < n; j++)
                    if (lhs[j] == rhs[i][0])
                        FIRST(lhs[j]);
        }
    }
}

int main() {
    int i;
    char p[20], c;

    printf("Enter number of productions: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%19s", p);
        lhs[i] = p[0];
        sscanf(p + 2, "%19s", rhs[i]);
    }

    printf("Enter non-terminal: ");
    scanf(" %c", &c);

    printf("FIRST(%c) = { ", c);
    FIRST(c);
    printf("}\n");

    return 0;
}
