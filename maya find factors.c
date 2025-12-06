#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, N;
        scanf("%d %d", &X, &N);

        // Each test case is worth X/10 points
        int points_per_case = X / 10;

        // Chef's score = points per case * number of cases passed
        int score = points_per_case * N;

        printf("%d\n", score);
    }

    return 0;
}
