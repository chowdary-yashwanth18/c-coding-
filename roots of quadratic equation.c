#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, r1, r2, d;

    printf("enter a, b, c values:");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d == 0)
    {
        printf("\n roots are real and equal");
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);

        printf("\n root1 = %f and root2 = %f", r1, r2);
    }
    else if (d > 0)
    {
        printf("\n roots are real and distinct");
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("\n root1 = %.2f", r1);
        printf("\n root2 = %.2f", r2);
    }
    else
        printf("\n roots are imaginary");

    return 0;
}
