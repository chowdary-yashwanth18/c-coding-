#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,trace=0;
    printf("enter the order of the matrix:");
    scanf("%d %d",&r,&c);
    if(r!=c)
    printf("enter a square matrix to find the trace");
    else
    {
        printf("enter %d matrix elements\n",(r*c));
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
        }
        printf("the given matrix is:\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            printf("\t %d",a[i][j]);
            printf("\n");
        }
        //printf("\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
           { if(i==j)
            trace=trace+a[i][j];}
        }
        printf("trace=%d",trace);
        
    }
    return 0;
}
