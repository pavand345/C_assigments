#include <stdio.h>

void reverse(int *arr, int size) {
    int *start = arr;  // Pointer to the first element of the array
    int *end = arr + size - 1;  // Pointer to the last element of the array

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverse(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

