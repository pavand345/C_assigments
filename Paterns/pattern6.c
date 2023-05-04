/*


	* * * * * * * * *
	  * * * * * * *
	    * * * * *
	      * * *
		*
	      * * *
	    * * * * *
	  * * * * * * *
	* * * * * * * * *
					*/




#include <stdio.h>

int main()
{
    int i, j, n = 5;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2*n; j++)
       	{
            if(j >= i && j < 2*n-i-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    for(i = n-2; i >= 0; i--)
    {
        for(j = 0; j < 2*n; j++)
       	{
            if(j >= i && j < 2*n-i-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

