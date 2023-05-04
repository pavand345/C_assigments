/*

 *               *
 * *           * *
 * * *       * * *
 * * * *   * * * *
 * * * * * * * * *

*/


#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
       	{
		for (j = 1; j <= i; j++)
	       	{
			printf("* ");
		}
		for (j = 2*(5-i); j > 0; j--)
	       	{
			printf("  ");
		}
		for (j = 1; j <= i; j++)
	       	{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

