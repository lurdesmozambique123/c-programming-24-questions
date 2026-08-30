#include <stdio.h>

int main()
{
    float a, b, difference;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    difference = a - b;

    printf("Difference = %.2f", difference);

    return 0;
}
