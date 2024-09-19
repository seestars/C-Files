// homeworl.c ——  复习题
#include <stdio.h>
#include <ctype.h>
int main (void)
{
    int num = 0;
    char ch;

    while ((ch = getchar()) != EOF)
    {
        if (!isspace(ch))
            num++;
    }
    printf("%d", num);

    return 0;
}