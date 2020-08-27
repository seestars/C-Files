// test.c —— 测试
#include <stdio.h>
char test1 (void);
int main (void)
{
    char test3, test4;
    test3 = test1();
    int test5;

    printf("%c", test3);

    test4 = getchar();
    putchar(test4);

    test5 = getchar();
    putchar(test5);

    return 0;
}

char test1 (void)
{
    char test2 = 'A';

    return test2;
}