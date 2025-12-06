#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int num;
    scanf("%d", &num);
    int temp =0;
    int sum=0;
    while(num>0)
    {temp=num%10;
    sum=sum+temp;
    num=num/10;
    
    }
    printf("%d",sum);
      
    
    return 0;
}

