#include<stdio.h>
int main()
{
	int i,j,k=0,m=9;
	for(i=0;i<5;i++,m--)
	{
		for(j=0;j<m;j++)
		{
			(j<k)?printf(" "):printf("*");
		}
		printf("\n");
		k++;
	}
}
