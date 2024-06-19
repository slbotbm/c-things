#include <stdio.h>

int main()
{
    char line[100];
    FILE *in_file, *out_file;
    in_file = fopen("Book1.txt", "r");
    out_file = fopen("Book2.txt", "w");
    if (in_file == NULL)
    {
        printf("指定したファイルが見つかりません。");
        return 0;
    }
    while (fgets(line, 100, in_file) != NULL)
    {
        fputs(line, out_file);
    }
    fclose(in_file);
    fclose(out_file);
    return 1;
}