#include <stdio.h>
//#include <stdlib.h>  // for abs()

// Function to update values in place
void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    update(&a, &b);
    printf("%d\n%d\n", a, b);

    return 0;
}

