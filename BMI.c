#include <stdio.h>

int main()
{
    float weight, Height, BMI;

    printf("enter weight in kg:");
    scanf("%f", &weight);

    printf("enter Height in metres:");
    scanf("%f", &Height);

    BMI = weight / (Height * Height);

    printf("BMI is %.2f\n", BMI);

    if (BMI < 18.5)
        printf("you are underweight");
    else if (BMI > 18.5 && BMI < 25)
        printf("you are fit and healthy");
    else if (BMI > 25 && BMI < 30)
        printf("you are overweight");
    else
        printf("obesity");

    return 0;
}
