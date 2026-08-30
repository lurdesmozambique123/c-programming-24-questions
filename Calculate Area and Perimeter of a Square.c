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
}#include <stdio.h>

int main()
{
    float bytes, kb, mb, gb;

    printf("Enter size in bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;

    printf("Kilobytes = %.2f KB\n", kb);
    printf("Megabytes = %.2f MB\n", mb);
    printf("Gigabytes = %.2f GB\n", gb);

    return 0;
}#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("Temperature in Fahrenheit = %.2f", fahrenheit);

    return 0;
}#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("Temperature in Celsius = %.2f", celsius);

    return 0;
}#include <stdio.h>

int main()
{
    float p, r, n, interest;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    printf("Enter time: ");
    scanf("%f", &n);

    interest = (p * r * n) / 100;

    printf("Simple Interest = %.2f", interest);

    return 0;
}#include <stdio.h>

int main()
{
    float side, area, perimeter;

    printf("Enter side of square: ");
    scanf("%f", &side);

    area = side * side;
    perimeter = 4 * side;

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f", perimeter);

    return 0;
}
