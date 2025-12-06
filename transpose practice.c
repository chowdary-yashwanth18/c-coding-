// C program to find transpose of a matrix
#include <stdio.h>

int main() {
    int a[10][10], t[10][10];
    int r, c, i, j;

    printf("Enter the order of the matrix: ");
    scanf("%d %d", &r, &c);

    printf("Enter %d elements of the matrix:\n", r * c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Printing given matrix
    printf("\nGiven matrix is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Transpose logic
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    // Printing transpose
    printf("\nTranspose of the matrix is:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
