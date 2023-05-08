#include <stdio.h>

#define MAX_SIZE 100

int search(int *arr, int size, int target);

int main()
{
    int arr[MAX_SIZE], size, target, index;

    printf("Enter the size of the array (max 100): ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &target);

    index = search(arr, size, target);

    if (index == -1)
    {
        printf("Element not found in array!\n");
    } 
    else
    {
        printf("Element found at index %d\n", index);
    }

    return 0;
}

int search(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*arr == target) {
            return i;
        }

        arr++;
    }

    return -1;
}

