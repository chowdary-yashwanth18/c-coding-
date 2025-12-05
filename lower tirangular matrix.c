#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j;
	printf("\n enter the order of the matrix:");
	scanf("%d %d",&r,&c);
	printf("\n enter elements in the matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("lower triangular matrix:\n");
	for(i=0;i<r;i++)
	{
	  for(j=0;j<c;j++)
	  {
	    if(i<j)
	    printf( " 0 ");
	    else
	    printf(" %d ",a[i][j]);
	  }	
	  printf("\n");
	}
return 0;	
	
}
