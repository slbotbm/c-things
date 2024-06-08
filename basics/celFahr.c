#include <stdio.h>

void main()
{
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Fahrenheit to Celsius table for 0-300 degree F");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    lower = 0;
    celsius = lower;
    printf("Celsius to Fahrenheit table for 0-300 degree C");
    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * (celsius + 32.0);
        printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
