// Write a C program to find sum of digits of a given number using recursion.



#include <stdio.h>
int sumOfDigits(int num);
int main()
{
    int num, sum;
    
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    sum = sumOfDigits(num);
    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}
int sumOfDigits(int num)
{
    if(num == 0)
        return 0;
        
    return ((num % 10) + sumOfDigits(num / 10));
}
