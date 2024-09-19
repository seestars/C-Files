/* 单纯做个玩的程序，十分粗糙。:D */
#include <stdio.h>
#include <stdbool.h>
void donut(int x, int test);

int main(void)
{
    int int_test1 = 0;
    bool true_or_false = true;

    while(true_or_false)                        // 判定是否继续运行程序
    {
    printf("hello. "
            "Please enter a number: ");
    true_or_false = scanf("%d", &int_test1);    // 检验输入是否正确

    if (true_or_false == false)                 // 输入不正确则退出程序
        break;
    else if (int_test1 <= 0)                    // 检验数值是否 > 0
    {
        printf("Enter an number bigger than 0\n");
        continue;
    }
    else                                        // 无错误，运行donut函数
    {   donut(int_test1, 1);
        printf("\n");
    }

    }
    printf("Good Bye~\n");

    return 0;
}

void donut(int x, int test)                     // 输入数值x，打印x个0
{
    if (test++ < x && x > 0)
        donut(x, test);
    printf("0");
}