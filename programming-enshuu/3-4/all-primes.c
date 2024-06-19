#include <stdio.h>

#define FALSE 0
#define TRUE 1

void main()
{
    long int n;
    printf("数を入力してください\n:");
    scanf("%ld", &n);
    long int primes[n];
    int array_pos = 0;
    for (int i = 2; i <= n; i++)
    {
        int checker = TRUE;
        for (int j = 0; j < array_pos; j++)
        {
            if (i % primes[j] == 0)
            {
                checker = FALSE;
                break;
            }
        }
        if (checker == TRUE)
        {
            primes[array_pos] = i;
            array_pos++;
        }
    }
    printf("%ld以下の素数(%d個)：\n", n, array_pos);
    for (int i = 0; i < array_pos; i++)
    {
        printf("%ld\t", primes[i]);
    }
    printf("\n");
}