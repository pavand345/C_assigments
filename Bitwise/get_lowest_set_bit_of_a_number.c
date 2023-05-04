/*Write a C program to get highest set bit of a number.*/

#include<stdio.h>
int fun(int);
int main()
{
	int data;
	printf("Enter the data : ");
	scanf("%d",&data);
	int (*fp)(int)=fun;
	fp(data);
}
int fun(int data)
{
	int pos;
	for(pos=0;pos<=7;pos--)
	{
		if((data>>pos)&1)
		{
			printf("The highest set bit is %d position\n",pos);
			return 0;
		}
	}
}
