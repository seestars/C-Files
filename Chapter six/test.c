// test.c
#include <stdio.h>
int main (void)
{
    int test1;
    int test2;
    test1 = (test2 = 246,231);

    int test3 = 6;
    test3 /= 3;

    printf("test1 = %d, test2 = %d\n", test1 ,test2);
    printf("%d\n", test3);


    return 0;
}