// C program for matrix addition
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int r1, c1, r2, c2;
    int i, j;

    printf("Enter the order of matrix A:");
    scanf("%d %d", &r1, &c1);

    printf("Enter the order of matrix B:");
    scanf("%d %d", &r2, &c2);

    if (r1 == r2 && c1 == c2) 
	{
        // Reading elements of matrix A
        printf("\nEnter %d elements in matrix A:\n", r1 * c1);
        for (i = 0; i < r1; i++)
	    {
            for (j = 0; j < c1; j++)
			{
                scanf("%d", &a[i][j]);
            }
        }

        // Reading elements of matrix B
        printf("\nEnter %d elements in matrix B:\n", r2 * c2);
        for (i = 0; i < r2; i++)
		{
            for (j = 0; j < c2; j++)
			{
                scanf("%d", &b[i][j]);
            }
        }

        // Printing matrix A
        printf("\nMatrix A is:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

        // Printing matrix B
        printf("\nMatrix B is:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }

        // Addition logic
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        // Printing matrix C
        printf("\nMatrix C (A + B) is:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    } 
	    else 
        printf("\nMatrix addition is not possible (orders are different).");
    

    return 0;
}
