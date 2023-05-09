//Write a C program to find sum of all even or odd numbers in given range using recursion.



#include <stdio.h>
int printEven(int cur, int max);
int printOdd(int cur, int max);
int main()
{
    int min,max;
    printf("Enter minimum value: ");
    scanf("%d", &min);
    printf("Enter maximum value : ");
    scanf("%d", &max);
    printf("The sum of Even Numbers from %d to %d is: %d\n", min,max,printEven(min,max));
    printf("The sum of Odd Numbers from %d to %d is: %d\n", min,max,printOdd(min,max));
    return 0;
}
int printEven(int cur, int max)
{
    static int total=0;
    if(cur%2==0)
        total=total+cur;
    if(cur==max)
        return total;
    printEven(cur+1, max);
}
int printOdd(int cur, int max)
{
    static int sum=0;
    if(cur%2!=0)
        sum=sum+cur;
    if(cur==max)
        return sum;
    printOdd(cur+1, max);
}
