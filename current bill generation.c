#include <stdio.h>

int main()
{
    int customer_id;
    float units, charges;

    printf("enter customer id:");
    scanf("%d", &customer_id);

    printf("enter units consumed:");
    scanf("%f", &units);

    if (units >= 0 && units <= 200)
        charges = 0.5 * units;
    else if (units >= 201 && units <= 400)
        charges = 100 + (units - 200) * 0.65;
    else if (units >= 401 && units <= 600)
        charges = 230 + (units - 400) * 0.80;
    else
        charges = 390 + (units - 600) * 1.50;

    printf("electricity bill charges is %.2f", charges);

    return 0;
}
