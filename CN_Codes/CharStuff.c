
#include <stdio.h>
#include <string.h>

int main() {
    char s[100], d[200];
    int i, j = 0;

    printf("Enter data: ");
    scanf("%99s", s);

    d[j++] = 'F';

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'F' || s[i] == 'E')
            d[j++] = 'E';
        d[j++] = s[i];
    }

    d[j++] = 'F';
    d[j] = '\0';

    printf("Stuffed data: %s\n", d);
    return 0;
}
