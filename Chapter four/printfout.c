// printout.c -- 使用转换说嘛
#include <stdio.h>
#define PI 3.1415923
int main(void) {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    double test = 6.666;

    printf("The %d contestants ate %.2f berry pies.\n", number,
           pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$',2 * cost);
    printf("%+.6f", test);

    return 0;
}