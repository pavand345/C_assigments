#include<stdio.h>
int main()
{
        int i,j,k=65,m=97;
        for(i=5;i>0;i--,k++,m++)
        {
                for(j=1;j<=5;j++)
                {
                        	(j<i)?printf(" "):((i%2)!=0)?printf("%c",k):printf("%c",m);
                }
                printf("\n");
        }
}

