#include <stdio.h>

int main()
{
    int num = 10;           // declaring and initializing an integer variable
    int *p;                 // declaring a pointer variable
    p = &num;               // initializing the pointer with the address of num

    printf("The value of num is %d\n", num);
    printf("The address of num is %p\n", &num);
    printf("The value of p is %p\n", p);
    printf("The value pointed to by p is %d\n", *p);

    *p = 20;                // changing the value of num through the pointer

    printf("The new value of num is %d\n", num);

    return 0;
}

