//Write a C program to count total number of even and odd elements in an array.



#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size, i;
    int even_count = 0, odd_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("Total even elements in the array = %d\n", even_count);
    printf("Total odd elements in the array = %d\n", odd_count);

    return 0;
}

