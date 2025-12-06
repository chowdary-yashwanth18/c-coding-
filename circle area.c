//area of circle.
#include<stdio.h>

float const PI=3.14;
int main()
{
	float r,area;
	printf("radius:");
	scanf("%f",&r);
	area=PI*(r*r);
	printf("area is %.2f",area);
	return 0;
}
