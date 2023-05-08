// Write a C program to insert an element in an array.



#include <stdio.h>
int main()
{
    int i, n, x, pos;
    printf("Enter the number of elements in the array \n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter the new element to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);
    n=n+1;
    if((pos<0)||(pos>n))
    {
	    printf("invalid position\n");
	    return 0;
    }
    for(i = n-1; i >= pos; i--)
        array[i]=array[i-1];
    array[pos-1]=x; //Insert the element x on the specified position
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
