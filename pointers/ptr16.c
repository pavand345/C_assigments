#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    printf("Original string: %s\n", str);

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

void reverse(char *str)
{
	int i,len=strlen(str)-1,temp;
	for(i=0;i<len/2;i++)
	{
		temp=*(str+i);
		*(str+i)=*(str+(len-i));
		*(str+(len-i))=temp;
	}
}

