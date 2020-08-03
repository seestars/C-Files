// pizza.c —— 在比萨饼程序中使用已定义的常量
#include <stdio.h>
#define PI 3.14159
#define PRINTF printf("What is the radius of your pizza?\n");
int main(void) {
    float area, circum, radius;

    PRINTF
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your baisc pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);

    return 0;
}