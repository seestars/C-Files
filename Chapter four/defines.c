// defines.c -- 使用limit.h和float头文件中定义的明示常量
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
    printf("Some number limits for this system:\n");
    printf("Binggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e \n", DBL_MAX);
    printf("Smallest normal flost: %e\n", FLT_MIN);
    printf("flost precision = %d digits\n", FLT_DIG);
    printf("flost epsilon = %e", FLT_EPSILON);

    return 0;
}