#include<stdio.h>
void *my_memcpy_str(void *dest,void *src,size_t n);
int main()
{
	char str[100],str2[100];
	int n,i;

	printf("Enter the str : ");
	scanf("%[^\n]s",str);

	printf("Enter the str2 : ");
	scanf(" %[^\n]s",str2);

	printf("Enter the no.of bytes u want copy : ");
	scanf(" %d",&n);

	my_memcpy_str(str,str2,n);
	printf("%s\n",str);
}
void *my_memcpy_str(void *dest,void *src,size_t n)
{
	char *s=src;
	char *d=dest;

	for(int i=0;i<n;i++)
		d[i]=s[i];

	return dest;
}
