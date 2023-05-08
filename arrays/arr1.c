//Write a C program to find sum of all array elements. - using recursion.
//


#include <stdio.h>

int array_sum(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    } 
    else 
    {
        return arr[n-1] + array_sum(arr, n-1);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    printf("The sum of all elements in the array is %d", array_sum(arr, n));
    
    return 0;
}

