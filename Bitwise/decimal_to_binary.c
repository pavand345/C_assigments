#include<stdio.h>
void decimal(int);
void main()
{
	int data;
	printf("Enter the data : ");
	scanf("%d",&data);
	void (*fp)(int)=decimal;
	fp(data);
}
void decimal(int data)
{
	for(int bit=7;bit>=0;bit--)
	{
		if((data>>bit)&1)
			printf("1");
		else 
			printf("0");
	}
}
