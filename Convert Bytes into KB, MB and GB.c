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
}
