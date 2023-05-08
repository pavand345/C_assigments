//Write a C program to find second largest element in an array.



#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, secondLargest;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(arr[0] > arr[1])
    {
        largest = arr[0];
        secondLargest = arr[1];
    }
    else
    {
        largest = arr[1];
        secondLargest = arr[0];
    }

    for(i = 2; i < n; i++)
    {
        if(arr[i] > largest)
       	{
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest)
       	{
            secondLargest = arr[i];
        }
    }

    printf("The second largest element in the array is: %d\n", secondLargest);

    return 0;
}

