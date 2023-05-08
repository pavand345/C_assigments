// Write a C program to merge two arrays to third array.




#include<stdio.h>
int main()
{
    int n1,n2,n3,i,j;
    printf("Enter the size of the frst array : ");
    scanf("%d",&n1);
    int arr[n1];
    printf("Enter the array elements : \n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the size of the 2nd array : ");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter the array elements : \n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    n3=n1+n2;
    int arr3[n3];
    for(i=0;i<n1;i++)
        arr3[i]=arr[i];
    for(i=n1,j=0;i<n3;i++,j++)
        arr3[i]=arr2[j];
    printf("After mergeing array elements are : \n");
    for(i=0;i<n3;i++)
    {
        printf("%d ",arr3[i]);
    }
    printf("\n");
}
