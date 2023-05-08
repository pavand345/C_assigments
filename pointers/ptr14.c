#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char *ptr1, *ptr2;

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    ptr1 = str1 + strlen(str1);
    ptr2 = str2;

    while (*ptr2 != '\0')
    {
        *ptr1++ = *ptr2++;
    }

    *ptr1 = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}

