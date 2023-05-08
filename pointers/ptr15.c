#include <stdio.h>

int stringCompare(char *s1, char *s2);

int main()
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%[^\n]s", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    if (stringCompare(str1, str2) == 0)
    {
        printf("Strings are equal.\n");
    } 
    else
    {
        printf("Strings are not equal.\n");
    }

    return 0;
}

int stringCompare(char *s1, char *s2)
{
    while (*s1 == *s2)
    {
        if (*s1 == '\0' || *s2 == '\0')
       	{
            break;
        }
        s1++;
        s2++;
    }

    if (*s1 == '\0' && *s2 == '\0')
    {
        return 0;
    } 
    else 
    {
        return 1;
    }
}

