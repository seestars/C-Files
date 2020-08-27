// test.c —— 用户输入单词，并打印一遍，并智能去除无用占位符
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main (void)
{
    char test1;
    bool inword = false;
    bool noenter = false;

    printf("Enter a char: \n");
    while ((test1 = getchar()) != '#')
    {
        if (!isspace(test1) && !inword)
        {
            inword = true;
            printf("Check it: ");
        }
        else
        {
            if (isspace(test1) && inword)
                inword = false;
        }
        if (isspace(test1))
        {
            test1 = ' ';            // 学习指针后使用清零，去掉bug
            if (!inword && noenter)
            {
                printf("\b\n");
                noenter = false;
            }
            else if (isspace(test1))
                continue;
        }
        else 
                putchar(test1);
                noenter = true;
    }
    
    return 0;
}