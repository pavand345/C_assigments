/* 
 

   1
   12
   123
   1234
   12345
   1234
   123
   12
   1
   		*/


#include <stdio.h>

int main() {
    int n=5, i, j;


    // Print the upper half of the pattern
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
       	{
            printf("%d", j);
        }
        printf("\n");
    }

    // Print the lower half of the pattern
    for (i = n-1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
       	{
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

