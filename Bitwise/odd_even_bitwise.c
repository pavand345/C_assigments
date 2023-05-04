/* Write a C program to check whether a number is even or odd using bitwise operator. */


#include<stdio.h>
void even_odd(int);
void main()
{
	int data;
	printf("Enter the the data ; ");
	scanf("%d",&data);
	void (*fp)(int)=even_odd;
	fp(data);
}
void even_odd(int data)
{
	if(data & 1)
		printf("%d is odd number\n",data);
	else 
		printf("%d is even number\n",data);
}
