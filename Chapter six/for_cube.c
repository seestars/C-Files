// for_cube.c —— 使用for循环创建一个立方表
#include <stdio.h>
int main (void)
{
    int num;

    printf("    n  n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, (num*num*num));

    printf("\nOr use this!\n    n  n cubed\n");
    for (num = 1; (num*num*num) <= 216; num++)
        printf("%5d %5d\n", num, (num*num*num));

    return 0;
}