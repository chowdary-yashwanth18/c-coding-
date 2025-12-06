//distance travelled by object.
#include<stdio.h>
int main()
{
	float u,a,d;
	int t;
	printf("acceleration:");
	scanf("%f",&a);
	printf("initial velocity:");
	scanf("%f",&u);
	printf("time period:");
	scanf("%d",&t);
	d=(u*t)+(a*t*t)/2;
	printf("distance travelled is %.2f",d);
	return 0;
}
