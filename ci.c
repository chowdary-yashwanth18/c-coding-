//program for compound interest.
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,ci;
	printf("principal amount p:");
	scanf("%f",&p);
	printf("time period in years t:");
	scanf("%f",&t);
	printf("rate in percent r:");
	scanf("%f",&r);
	ci=p*(pow(1+r/100,t)-1);
	printf("the compound interest is %.2f",ci);
	return 0;
}
