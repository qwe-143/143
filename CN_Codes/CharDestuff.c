 
#include <stdio.h>
#include <string.h>

int main() {
    char s[200], d[100];
    int i, j = 0, n;

    printf("Enter stuffed data: ");
    scanf("%199s", s);

    n = strlen(s);

    for (i = 1; i < n - 1; i++) {
        if (s[i] == 'E')
            i++;
        d[j++] = s[i];
    }

    d[j] = '\0';
    printf("De-stuffed data: %s\n", d);
    return 0;
}
