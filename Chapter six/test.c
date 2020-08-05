// test.c
#include <stdio.h>
int main (void)
{
    float test1;
    long long int test2;

    scanf("%f", &test1);
    printf("Test1 in float is %f , in long long int is %lld \n", test1, test1);

    scanf("%f", &test2);
    printf("Test2 in float is %f , in long long int is %lld \n", test2, test2);

    return 0;
}