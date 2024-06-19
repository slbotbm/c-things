#include <stdio.h>

void main()
{
    double g = 9.8;
    for (int t = 0; t <= 50; t++)
    {
        double x = 0.5 * g * t * t / 100;
        printf("%.1f\t%.3f\n", t / 10.0, x);
    }
}