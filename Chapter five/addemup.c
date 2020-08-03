// addemuo.c —— 几种常见的语句
#include <stdio.h>
int main()                      // 计算前20个整数的和
{
    int count, sum;             // 声明¹

    count = 0;                  // 表达式语句
    sum   = 0;                  // 表达式语句
    while ( count++ < 20 )      // 迭代语句
        sum = sum + count;
    printf("sum = %d\n", sum);  // 表达式语句²

    return 0;                   // 跳转语句
}

/*
1. 根据C标准，声明不是语句。这与C++有所不同
2. 在C语言中，赋值个函数调用的都是表达式。
*/