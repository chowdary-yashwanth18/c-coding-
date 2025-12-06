// C program for matrix multiplication
#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter order of matrix A:");
    scanf("%d %d", &r1, &c1);

    printf("Enter order of matrix B:");
    scanf("%d %d", &r2, &c2);

    if (c1 == r2) {

        // Reading matrix A
        printf("\nEnter elements of matrix A:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        // Reading matrix B
        printf("\nEnter elements of matrix B:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        // Matrix multiplication logic
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                c[i][j] = 0;
                for (k = 0; k < c1; k++) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        // Printing resultant matrix
        printf("\nResultant matrix is:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c2; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("\nMatrix multiplication can't be done");
    }

    return 0;
}
