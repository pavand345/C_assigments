#include <stdio.h>

int main()
{
    int num1, num2, *ptr1, *ptr2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;  // ptr1 points to the address of num1
    ptr2 = &num2;  // ptr2 points to the address of num2

    sum = *ptr1 + *ptr2;  // add the values of num1 and num2 using pointers

    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

    return 0;
}

