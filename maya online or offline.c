#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    float online_cost = N - (0.10 * N);
    if (online_cost < M)
    {
        printf("ONLINE
");
    } else if (online_cost > M)
    {
        printf("DINING
");
    } else
    {
        printf("EITHER
");
    }
 return 0;
}
