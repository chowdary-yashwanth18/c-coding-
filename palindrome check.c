//program to check a palindrome or not.
#include<stdio.h>
int main()
{
	int n,t,sum=0,remainder;
	printf("enter an integer: \n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		remainder=n%10;
		sum=(sum*10)+remainder;
		n=n/10;
	}
	if (t==sum)
	printf("%d is a palindrome number",t);
	else
	printf("%d is not a palindrome number",t);
	return 0;
}
