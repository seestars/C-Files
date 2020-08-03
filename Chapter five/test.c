// test.c —— 测试
#include <stdio.h>
#define TEN 'g'
int main(void)
{
    char n = 'a';

    while (n++ < TEN)
        printf("%c", n);
    printf("\n");
    return 0;
}

