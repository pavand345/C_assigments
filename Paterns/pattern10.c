#include<stdio.h>
int main()
{
	int i,j,size=6,k;
	for(i=0;i<size;i++)
	{
		for(k=0;k<size-i;k++)
			printf(" ");
		for(j=0;j<2*(size-k)-1;j++)
			printf("*");
		printf("\n");
	}
}
