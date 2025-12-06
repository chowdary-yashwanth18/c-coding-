//program to find out sum of first n natural numbers.
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("1+2+3+......+n=%d",sum);
	return 0;
	
}
