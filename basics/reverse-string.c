#include <stdio.h>
#include <string.h>
int main()
{
    char t[1000];
    char *copy();
    void reverse();
    copy("Hello world", t);
    printf("%s\n", t);
    reverse(t);
    printf("%s\n", t);
    reverse(copy("XY", t));
    printf("%s\n", t);
    reverse(copy("Even", t));
    printf("%s\n", t);
    reverse(copy("Odd", t));
    printf("%s\n", t);
    reverse(copy("civic", t));
    printf("%s\n", t);
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for (i = 0; (s2[i] = s1[i]); i++)
        ;
    return s2;
}

void reverse(t) char t[];
{
    int i;
    int length = strlen(t);
    for (i = 0; i < length / 2; i++)
    {
        char temp = t[i];
        t[i] = t[length - i - 1];
        t[length - i - 1] = temp;
    }
}