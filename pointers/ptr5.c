#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], i;
    int *p1 = arr1, *p2 = arr2;

    printf("Enter 5 integers for the first array:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", p1 + i);
    }

    for (i = 0; i < 5; i++)
    {
        *(p2 + i) = *(p1 + i);
    }

    printf("\nElements of the second array after copying:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", *(p2 + i));
    }

    return 0;
}

