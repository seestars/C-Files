// echo.c —— 重复输入
#include <stdio.h>
int main(viod)
{
    char ch;

    while ((ch = getchar()) != '#')
        putchar(ch);

    return 0;
}