#include <stdio.h>
#include <string.h>

int main() {
    char alpha[100], beta[100];

    printf("Enter alpha (recursive part): ");
    scanf("%99s", alpha);

    printf("Enter beta (non-recursive part): ");
    scanf("%99s", beta);

    if (beta[0] == 'A') {
        printf("Invalid: beta must not start with A.\n");
        return 0;
    }

    printf("Original grammar: A -> A%s | %s\n",
           alpha, beta);

    printf("After removing left recursion:\n");
    printf("A -> %sA'\n", beta);
    printf("A' -> %sA' | epsilon\n", alpha);

    return 0;
}