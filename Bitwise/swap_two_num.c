#include<stdio.h>
void swap(int,int);
void main()
{
	int a,b;
	printf("Enter the data A = ");
	scanf("%d",&a);
	printf("Enter the data B = ");
	scanf("%d",&b);
	void (*fp)(int,int)=swap;
	fp(a,b);
}
void swap(int a,int b)
{
	a=a^b;
	b=a^b;
	a=a^b;
	printf("A = %d\nb = %d\n",a,b);
}
