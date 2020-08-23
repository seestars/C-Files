// test.c —— 测试专用
#include <stdio.h>
int main (void)
{
    int test1[3] = {123, 124};          // 数组元素的编号（数组下标的编号）为{0, 1, 2}. （踩坑 + 1）
    char test2[3] = {'A', 'B', 'C'};    // 数组声明并赋值必须赋予加 “ { } ”, 并且为依次从编号0开始赋值
    int test3[2] ; test3[0] = 233;
    int test4; test4 = 666, test3[1] = 234;     // 逗号只适用于同类型语句，不同类型语句会错误（2020.8.22所发现，可能不对）

    printf("test1[0] = %d\n", test1[0]);
    printf("test1[1] = %d\n", test1[1]);
    printf("test1[2] = %d\n", test1[2]);
    printf("\n");
    printf("test2[0] = %c\n", test2[0]);
    printf("test2[1] = %c\n", test2[1]);
    printf("test2[2] = %c\n", test2[2]);
    printf("\n");
    printf("test3[0] = %d\n", test3[0]);
    printf("test3[1] = %d\n", test3[1]);
    
    printf("\ntest4 = %d\n", test4);

    return 0;
}