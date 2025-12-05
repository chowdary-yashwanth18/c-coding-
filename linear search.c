//Practice program on linear search.
#include <stdio.h>

int main()
{
    int a[100], n, i, search, found = 0;

    printf("\n enter array size: ");
    scanf("%d", &n);

    printf("\n enter elements in the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n enter search element:");
    scanf("%d", &search);

    /* Linear search logic */
    for (i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            printf("\n search element found at location %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\n unsuccessful search");
    }

    return 0;
}
