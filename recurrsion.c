#include<stdio.h>
int nsum( int n)
{
	//base condition to terminate the recursion when N=0
	if(n==0)
	{
		return 0;
	}
	int res = n+nsum(n-1);
	return res;
}
int main()
{

int n=5;
int sum=nsum(n);
printf("sum of first %d natural numbers is %d",n,sum);
return 0;
}

