#include <stdio.h>

#define MAX_WORD_LENGTH 100
#define FALSE 0
#define TRUE 1

void main()
{
    int counts[MAX_WORD_LENGTH];
    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        counts[i] = 0;
    }
    char c;
    int length = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            counts[length]++;
            length = 0;
        }
        else
        {
            length++;
        }
    }
    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        if (counts[i] > 0)
        {
            printf("%d:\t", i + 1);
            for (int j = 0; j < counts[i]; j++)
            {
                printf("|");
            }
            printf("\n");
        }
    }
}
