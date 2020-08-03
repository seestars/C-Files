// squares.c —— 计算 1 ~ 20 的平方
#include <stdio.h>
int main(void) {
    int num = 1;

    while (num++ < 20)
    {
        printf("%4d %6d\n", num, num * num);
    }
    
    return 0;
}