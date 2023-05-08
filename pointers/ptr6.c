#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    int temp;
    for(int i = 0; i < size; i++) {
        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {6, 7, 8, 9, 10};
    int size = 5;

    printf("Before swapping:\n");
    printf("Array 1: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    swapArrays(arr1, arr2, size);

    printf("\n\nAfter swapping:\n");
    printf("Array 1: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\nArray 2: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}

