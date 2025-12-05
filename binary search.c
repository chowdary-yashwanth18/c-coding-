//practice program on binary search.
#include <stdio.h>

int main()
{
    int a[100], n, i, search, low, high, mid, found = 0;

    printf("\n enter array size:");
    scanf("%d", &n);

    printf("\n enter the elements in ascending order:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n enter search element:");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (search == a[mid])
        {
            printf("\n search element found at location %d", mid);
            found = 1;
            break;
        }
        else if (search < a[mid])
        {
            high = mid - 1;
        }
        else //if(search > a[mid])
        {
            low = mid + 1;
        }
    }

          if (found == 0)
    {
        printf("\n unsuccessful search");
    }

    return 0;
}
