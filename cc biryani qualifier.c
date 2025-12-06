#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int total_cost = X * Y;
        printf("%d\n", total_cost);
    }

    return 0;
}
