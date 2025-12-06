//square root of a given number.
#include<stdio.h>
#include<math.h>
int main()
{
	double number,root;
	printf("enter the number:");
	scanf("%lf",&number);
	root=sqrt(number);
	printf("square root of %.2lf is %.2lf",number,root);
	return 0;
}
