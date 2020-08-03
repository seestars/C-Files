// 做作业的地方
#include <stdio.h>
#include <float.h>
int main(void)
{
    double test1 = 1.0/3.0;
    float  test2 = 1.0/3.0;

    printf("First  : %.6f %.6f\n", test1, test2);
    printf("Second : %.12f %.12f\n", test1, test2);
    printf("Third  : %.16f %.16f\n", test1, test2);
    printf("Fourth : %d %d\n", FLT_DIG, DBL_DIG);

    return 0;
}