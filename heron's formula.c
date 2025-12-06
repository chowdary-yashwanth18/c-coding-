//program to calculate area of triangle using heron's formula.
#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,s,herons_formula,area;
 printf("enter a,b,c values:");
 scanf("%f%f%f",&a,&b,&c);
 s=(a+b+c)/2;
 herons_formula=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("the area of triangle is %.2f",herons_formula);
 return 0;
}

