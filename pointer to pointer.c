#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	int **pp;
	p=&a;
	pp=&p;
	printf("value of p is %d\n",p );
	printf("address  of p is %d\n",pp );
	printf("value of first pointer is %d\n",*p);
	printf("value of second pointer is %d\n",**pp);
	return 0;
}
