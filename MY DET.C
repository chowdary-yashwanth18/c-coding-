#include<stdio.h>
int main()
{
	
	int a;
	float b;
	char c;
	char str[15];
	printf("\n enter an integer:");
	scanf("%d",&a);
	printf("\n enter a float:");
	scanf("%f",&b);
	printf("\n enter a character:");
	scanf(" %c",&c);
	printf("\n enter a string:");
	scanf("%s",str);
	
	printf("\n you entered: \n");
	printf("integer: %d\n",a);
	printf("float: %.2f\n",b);
	printf("character: %c\n", c);
	printf("string: %s\n",str);
	return 0;
		
}
	
