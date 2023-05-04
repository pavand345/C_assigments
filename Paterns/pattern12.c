#include<stdio.h>
int main()
{
	int i,j,k,s;
	for(i=0;i<5;i++)
	{
		for(s=0;s<i;s++)
			printf("  ");
		for(j=0;j<5;j++)
			printf("* ");
		printf("\n");
	}
}
