#include <stdio.h>

void stringCopy(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() {
    char src[100], dest[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", src);

    stringCopy(src, dest);

    printf("Original string: %s\n", src);
    printf("Copied string: %s\n", dest);

    return 0;
}

