// test.c

#include <stdio.h>
int main(void)
{
    int c = 0;
    while (c != 10)
    {
        c++;    // 在次添加断点
    }

for (int i = 0; i < 10; i++)
{
    int a = 0;  // 在次添加断点

    a++;
}
// 在次添加断点
// 循环内的赋值可以影响到外层变量，但是循环内声明的变量在循环结束后会被释放
printf("早上好！夜之城！");
return 0;
}