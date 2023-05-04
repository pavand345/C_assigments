#include<stdio.h>
void fun(int,int);
void main()
{
	int data,pos;
	printf("Enter the data : ");
	scanf("%d",&data);
	printf("enter the postion : ");
	scanf("%d",&pos);
	void (*fp)(int,int)=fun;
	fp(data,pos);
}
void fun(int data,int pos)
{
	if((data>>pos)&1)
		printf("The %d position of %d is set\n",pos,data);
	else
		printf("The %d position of %d is clear\n",pos,data);
}
