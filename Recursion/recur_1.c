// Write a C program to print all natural numbers between 1 to n using recursion.



#include <stdio.h>
void printNaturalNumbers(int lowerLimit, int upperLimit);
int main()
{
    int n;
    printf("Enter n value : ");
    scanf("%d", &n);
    printf("All natural numbers from 1 to %d are: ",n);
    printNaturalNumbers(1,n);
    return 0;
}

void printNaturalNumbers(int min, int max)
{
    if(min > max)
        return;
    
    printf("%d, ",min);
    
    printNaturalNumbers(min + 1, max);
}
