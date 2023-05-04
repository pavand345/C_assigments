#include<stdio.h>
int main()
{
        int i,j,k=1;
        for(i=0;i<6;i++)
        {
                for(j=0;j<=i;j++)
                {
                         ((i%2)==0)?printf("%d",k):printf("*");

                }
                printf("\n");
		((i%2)==0)?k++:0;
        }
} 
