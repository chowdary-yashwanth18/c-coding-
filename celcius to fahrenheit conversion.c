//celsius to fahrenheit conversion program.
#include<stdio.h>
int main()
{
	float celcius,fahrenheit;
	printf("enter the temperature in celcius:");
	scanf("%f",&celcius);
	fahrenheit=(1.8*celcius)+32;
	printf("temperature in fahrenheit is %.2f",fahrenheit);
	return 0;

}
