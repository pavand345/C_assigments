//Write a C program to count total number of negative elements in an array.



#include <stdio.h>

int main()
{
   int arr[100], i, n, count = 0;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter %d elements in the array:\n", n);
   for(i=0; i<n; i++)
   {
      scanf("%d", &arr[i]);
   }

   for(i=0; i<n; i++)
   {
      if(arr[i] < 0)
      {
         count++;
      }
   }

   printf("Total number of negative elements in the array = %d", count);

   return 0;
}

