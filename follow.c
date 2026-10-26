#include <stdio.h>
#include <ctype.h>

char lhs[20], rhs[20][20];
int n;

void FOLLOW(char c) {
    int i, j, k;

    if (lhs[0] == c)
        printf("$ ");

    for (i = 0; i < n; i++) {
        for (j = 0; rhs[i][j] != '\0'; j++) {
            if (rhs[i][j] == c) {
                if (rhs[i][j + 1] != '\0') {
                    if (!isupper(rhs[i][j + 1]))
                        printf("%c ", rhs[i][j + 1]);
                    else {
                        for (k = 0; k < n; k++)
                            if (lhs[k] == rhs[i][j + 1])
                                printf("%c ", rhs[k][0]);
                    }
                } else if (lhs[i] != c) {
                    FOLLOW(lhs[i]);
                }
            }
        }
    }
}

int main() {
    int i;
    char p[20], c;

    printf("Enter number of productions: ");
    scanf("%d", &n);

    printf("Enter productions (S=AB):\n");
    for (i = 0; i < n; i++) {
        scanf("%19s", p);
        lhs[i] = p[0];
        sscanf(p + 2, "%19s", rhs[i]);
    }

    printf("Enter non-terminal: ");
    scanf(" %c", &c);

    printf("FOLLOW(%c) = { ", c);
    FOLLOW(c);
    printf("}\n");

    return 0;
}