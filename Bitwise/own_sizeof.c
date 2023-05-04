#include<stdio.h>
#define MY_SIZE(var)  ((char*)(&var+1)-(char*)(&var))
int main()
{
	int a;
	printf("sizeof = %ld \n",MY_SIZE(a));
}

