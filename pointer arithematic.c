#include<stdio.h>
int main()
{
	int a=10;int b=20;
	int *p1,*p2;
	p1=&a;
	p2=&b;
	printf("\n p1 is %u",p1);
	printf("\n p1+1 is %u",p1+1);
	printf("\n p1-p2 is %u",p1-p2);
	
}
