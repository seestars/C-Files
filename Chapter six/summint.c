// summing.c —— 根据用户输入的整数求和
#include <stdio.h>
int main(void)
{
    long long num;
    long long sum = 0LL; // 把 sum 初始化为 0
    int status;

    printf("Please enter integer to be summed ");
    printf("(q to qit) : ");
    while (scanf("%lld", &num) == 1) /*  == 的意思是“等于”    */
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit) : ");
    }
    printf("Those integers sum to %lld.\n", sum);

    return 0;
}