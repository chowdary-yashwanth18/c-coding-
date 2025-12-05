#include <stdio.h>

int main()
{
    int a[10], i, large;

    printf("Enter array elements:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    large = a[0];     // assume first element is largest

    for (i = 1; i <= 10; i++)
    {
        if (a[i] > large)
            large = a[i];
    }

    printf("Largest element is %d\n", large);

    return 0;
}
