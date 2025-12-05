//practice program on bubble sorting technique.
#include <stdio.h>

int main()
{
    int a[100], n, i, j, temp;

    printf("Enter array size:\n");
    scanf("%d", &n);

    printf("Enter elements in array:\n");         //printf("Enter %d elements in array:\n",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

   

    /* Bubble sort logic */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            

            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    /* Printing sorted array */
    printf("\nArray elements after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}
