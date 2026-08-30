#include <stdio.h>

int main()
{
    float grams, kilograms;

    printf("Enter weight in grams: ");
    scanf("%f", &grams);

    kilograms = grams / 1000;

    printf("Weight in kilograms = %.2f", kilograms);

    return 0;
#include <stdio.h>

int main()
{
    float kilograms, grams;

    printf("Enter weight in kilograms: ");
    scanf("%f", &kilograms);

    grams = kilograms * 1000;

    printf("Weight in grams = %.2f", grams);

    return 0;
}
