/* Write a C program to count trailing zeros in a binary number.*/


#include<stdio.h>
int fun(int);
void main()
{
	int data;
	printf("Enter the data : ");
	scanf("%d",&data);
	int (*fp)(int)=fun;
	fp(data);
}
int fun(int data)
{
	int cnt=0;
	for(int pos=0;pos<=7;pos++)
	{
		if((data>>pos)&1)
		{
			printf("The count of trailing zeros is : %d\n",cnt);
			return 0;
		}
		cnt++;
	}
	if(cnt==8)
		printf("The count of trailing zeros is : %d\n",cnt);
}
