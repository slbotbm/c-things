#include <stdio.h>

char lower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 'a' + (c - 'A');
    }
    return c;
}
void main()
{
    printf("%c\n", lower('C'));
}
