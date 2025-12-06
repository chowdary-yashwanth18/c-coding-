#include<stdio.h>
int main()
{
	char str[6] ="hello";
	char *ptr =str;
	printf("%c",*ptr);
	printf("%c",*(ptr+1));
	printf("%c",*(ptr+2));
	printf("%c",*(ptr+3));
	printf("%c",*(ptr+4));
	return 0;
}

