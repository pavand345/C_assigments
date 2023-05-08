// Write a C program to find maximum and minimum element in an array. - using recursion.


#include <stdio.h>
int findMin(int arr[], int size);
int findMax(int arr[], int size);
int main()
{
    int arr[10] = {1, 5, 8, 2, 9, 4, 3, 7, 6, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum element in array: %d\n", findMin(arr, size));
    printf("Maximum element in array: %d\n", findMax(arr, size));
    return 0;
}
int findMin(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    int min = findMin(arr, size - 1);
    if (arr[size - 1] < min)
        min = arr[size - 1];
    return min;
}

int findMax(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    int max = findMax(arr, size - 1);
    if (arr[size - 1] > max)
        max = arr[size - 1];
    return max;
}

