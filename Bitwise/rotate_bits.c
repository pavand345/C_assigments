#include <stdio.h>

// Function to left rotate bits of a given number
unsigned int rotate_left(unsigned int num, unsigned int rot)
{
	return ((num << rot) | (num >> (32 - rot)));
}

// Function to right rotate bits of a given number
unsigned int rotate_right(unsigned int num, unsigned int rot)
{
	return ((num >> rot) | (num << (32 - rot)));
}

int main()
{
	unsigned int num, rot,ch;

	printf("Enter the number to be rotated: ");
	scanf("%u", &num);

	printf("Enter the number of positions to rotate: ");
	scanf("%u", &rot);

	printf("Original number: %u\n", num);
	printf("1.leftside\t2.rightside\nenter the choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		// Rotate left and print result
		case 1 : unsigned int rotated_num_left = rotate_left(num, rot);
			 printf("Number after left rotation by %u positions: %u\n", rot, rotated_num_left);
			 break ;

		// Rotate right and print result
		case 2 : unsigned int rotated_num_right = rotate_right(num, rot);
			 printf("Number after right rotation by %u positions: %u\n", rot, rotated_num_right);
			 break;
		default : printf("wrong input\n");
			  return 0;
	}
	return 0;
}

