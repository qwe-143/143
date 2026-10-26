
#include <stdio.h>

int main() {
    char s[100];
    int i, count = 0;

    printf("Enter bits: ");
    scanf("%99s", s);

    printf("Stuffed bits: 01111110");
    for (i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);

        if (s[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5) {
            printf("0");
            count = 0;
        }
    }

    printf("01111110\n");
    return 0;
}
