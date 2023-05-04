#include<stdio.h>
void set_the_bit(int,int);
void main()
{
	int data,pos;
	printf("Enter the data : ");
	scanf("%d",&data);
	printf("Enter the position : ");
	scanf("%d",&pos);
	void (*fp)(int,int)=set_the_bit;
	fp(data,pos);
}
void set_the_bit(int data,int pos)
{
	printf("After modification of %d position\nThe data is : %d\n",pos,data=data&~(1<<pos));
}
