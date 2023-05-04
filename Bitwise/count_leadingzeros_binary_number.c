/* Write a C program to count leading zeros in a binary number.*/


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
	for(int pos=7;pos>=0;pos--)
	{
		if((data>>pos)&1)
		{
			printf("The count of leading zeros is : %d\n",cnt);
			return 0;
		}
		cnt++;
	}
	if(cnt==8)
		printf("The count of leading zeros is : %d\n",cnt);
}
