//playing with characters program.
#include<stdio.h>
int main()
{
	char ch;
	char str[50];
	char sentence[100];
	printf("enter a character:");
	scanf("%c",&ch);
	printf("enter a word:");
	scanf("%s",str);
	printf("enter a sentence:");
	scanf("%s",sentence);
	printf("\n you entered: \n");
	printf("character: %c\n",ch);
	printf("word: %s\n", str);
	printf("sentence: %s", sentence);
	return 0;
}
