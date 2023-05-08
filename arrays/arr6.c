//Write a C program to copy all elements from an array to another array.



#include <stdio.h>

int main()
{
    int source[100], destination[100], size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Input the elements of the source array
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &source[i]);
    }

    // Copy the elements of the source array to the destination array
    for (i = 0; i < size; i++)
    {
        destination[i] = source[i];
    }

    // Print the elements of the destination array
    printf("Elements of the destination array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}

