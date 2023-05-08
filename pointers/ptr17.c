#include <stdio.h>

void bubble_sort(int *arr, int size);

int main()
{
    int arr[] = {4, 2, 7, 1, 9, 3, 6, 5, 8};
    int size = sizeof(arr) / sizeof(int);

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    bubble_sort(arr, size);

    printf("\nAfter sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubble_sort(int *arr, int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
       	{
            if (*(arr + j) > *(arr + j + 1))
	    {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

