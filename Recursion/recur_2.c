//Write a C program to print all even or odd numbers in given range using recursion.



#include <stdio.h>
void printEven(int cur, int limit);
void printOdd(int cur, int limit);
int main()
{
    int min,max;
    printf("Enter minimum value: ");
    scanf("%d", &min);
    printf("Enter maximum value : ");
    scanf("%d", &max);
    printf("Even Numbers from %d to %d are: ", min,max);
    printEven(min,max); 
    printf("\nOdd Numbers from %d to %d are: ", min,max);
    printOdd(min,max); 
    return 0;
}
void printEven(int cur, int limit)
{
    if(cur > limit)
        return;
    if(cur%2==0)
        printf("%d, ", cur);
    printEven(++cur, limit);
}
void printOdd(int cur, int limit)
{
    if(cur > limit)
        return;
    if(cur%2!=0)
        printf("%d, ", cur);
    printOdd(++cur, limit);
}
