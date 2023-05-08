#include <stdio.h>

void multiple(int a, int b, int *sum, int *diff, int *mul, float *quot)
{
    *sum = a + b;
    *diff = a - b;
    *mul = a * b;
    *quot = (float)a / b;
}

int main()
{
    int num1, num2, sum, diff, mul;
    float quot;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    multiple(num1, num2, &sum, &diff, &mul, &quot);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", mul);
    printf("Quotient = %.2f\n", quot);

    return 0;
}

