#include<stdio.h>
void flip_bit(int);
void main()
{
	int data;
	printf("Enter the data : ");
	scanf("%d",&data);
	void (*fp)(int)=flip_bit;
	fp(data);
}
void flip_bit(int data)
{
	int flipped_bits;
	flipped_bits=~data;
	printf("original data : %d\n",data);
	printf("flipped data : %d\n",flipped_bits);
}
