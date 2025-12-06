//c program on element insertion in an array.
#include <stdio.h>
int main()
{
    int a[100], n, i, pos, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if(n>a[100])
    printf("overflow condition");
    
    else
    {
	
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert element: ");
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    for (i = n - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    } 

    return 0;
}
