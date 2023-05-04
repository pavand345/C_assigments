#include<stdio.h>
void lsb(int);
void main()
{
	int data;
	printf("Enter the data : ");
	scanf("%d",&data);
	void (*fp)(int)=lsb;
	fp(data);
}
void lsb(int data)
{
	if(((data>>0)&1)==1)
		printf("lsb is set\n");
	else 
		printf("lsb is clear\n");
}
