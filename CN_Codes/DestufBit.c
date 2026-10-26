
#include <stdio.h>

int main() {
    char s[200];
    int i, count = 0;

    printf("Enter stuffed bits: ");
    scanf("%199s", s);

    printf("De-stuffed bits: ");
    for (i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);

        if (s[i] == '1')
            count++;
        else
            count = 0;

        if (count == 5) {
            if (s[i + 1] == '0')
                i++;
            count = 0;
        }
    }

    printf("\n");
    return 0;
}
