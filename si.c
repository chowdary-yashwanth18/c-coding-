//program to calculate simple interest.
#include <stdio.h>

int main()
 {
    int p,t,r,si;
    printf("principal amount is: ");
    scanf("%d",&p);
    printf("rate of interest is: ");
    scanf("%d",&r);
    printf("time duration is: ");
    scanf("%d",&t);
    si=(p*t*r)/100;
    printf("the simple interest is %d",si);
}
