#include <stdio.h>

int main()
{
    float hours, minutes;

    printf("Enter time in hours: ");
    scanf("%f", &hours);

    minutes = hours * 60;

    printf("Time in minutes = %.2f", minutes);

    return 0;
}
