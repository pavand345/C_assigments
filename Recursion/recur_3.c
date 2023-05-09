// Write a C program to find sum of all natural numbers between 1 to n using recursion.



#include <stdio.h>
int sumOfNaturalNumbers(int cur, int max);


int main()
{
    int min,max, sum;
    printf("Enter lower limit: ");
    scanf("%d", &min);
    printf("Enter upper limit: ");
    scanf("%d", &max);
    sum = sumOfNaturalNumbers(min, max);
    printf("Sum of natural numbers from %d to %d = %d\n", min, max, sum);
    return 0;
}

int sumOfNaturalNumbers(int cur, int max)
{
    if(cur == max)
        return cur;
    else
        return cur + sumOfNaturalNumbers(cur+1, max); 
}
