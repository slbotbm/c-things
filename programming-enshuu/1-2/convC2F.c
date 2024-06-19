#include <stdio.h>

void main()
{
    float c, f;

    printf("摂氏: ");
    scanf("%f", &c);
    f = (9.0 / 5.0) * c + 32.0;
    printf("華氏: %.2f\n", f);
}