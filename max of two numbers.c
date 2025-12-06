//maximum of two numbers.
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x and y:");
	scanf("%d%d",&x,&y);
	int max=x>y ? x:y;
	printf("maximum of %d and %d is: %d",x,y,max);
	return 0;
}
