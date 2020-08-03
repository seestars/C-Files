// 测试专用
#include <stdio.h>
int main(void) {
    long double amount;

    printf("请输入一定量水的夸脱数： ");
    scanf("%Lf", &amount);
    printf("%Lf 夸脱水有水分子数 %Lf 个", amount, amount * 950 / 3.0e-23);

    return 0;
}