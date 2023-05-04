/* Write a C program to count total zeros and ones in a binary number.  */


#include<stdio.h>
void fun(int);
void main()
{
	int data;
	printf("Enter the data : ");
	scanf("%d",&data);
	void (*fp)(int)=fun;
	fp(data);
}
void fun(int data)
{
	int bit,zero=0,one=0;
	for(bit=7;bit>=0;bit--)
	{
		if((data>>bit)&1)
			one++;
		else
			zero++;
	}
	printf("zeros : %d\nones : %d\n",zero,one);
}
