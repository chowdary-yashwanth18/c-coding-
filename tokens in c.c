#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("enter a sentence:");
	scanf("%[^\n]s",str);
	printf("words in the sentence are:\n");
	for(i=0;str[i]!='0';i++)
	{
		if(str[i]==' ')
		printf("\n");
		else
		printf("%c",str[i]);
	}
}
