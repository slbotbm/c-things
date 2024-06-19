#include <stdio.h>
#include <complex.h>
#include <math.h>

void main()
{
    double a, b, c;
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    if (a == 0 && b == 0 & c == 0)
    {
        printf("解１：0\n解２：0\n");
    }
    else
    {
        complex double discriminant = csqrt(b * b - 4 * a * c);
        complex double answer1 = (-b + discriminant) / (2.0 * a);
        complex double answer2 = (-b - discriminant) / (2.0 * a);
        if (cimag(answer1) != 0.0)
        {
            if (cimag(answer1) < 0)
                printf("解１：%.2f%.2fi\n", creal(answer1), cimag(answer1));
            else
                printf("解１：%.2f+%.2fi\n", creal(answer1), cimag(answer1));
        }
        else
        {
            printf("解１：%.2f\n", creal(answer1));
        }

        if (cimag(answer2) != 0.0)
        {
            if (cimag(answer2) < 0)
                printf("解２：%.2f%.2fi\n", creal(answer2), cimag(answer2));
            else
                printf("解２：%.2f+%.2fi\n", creal(answer2), cimag(answer2));
        }
        else
        {
            printf("解２：%.2f\n", creal(answer2));
        }
    }
}
