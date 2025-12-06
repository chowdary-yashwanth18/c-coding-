//program to check prime number or not.
#include<stdio.h>
int main()
{
	int i,n,factors=0;
	i=1;
	printf("enter an integer:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0)
		{
			factors=factors+1;
		
		}
		i++;
    }
		if(factors==2)
		printf("prime");
		else
		printf("non prime");
		
	return 0;
}
