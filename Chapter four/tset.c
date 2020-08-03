// test.c
#include <stdio.h>
int main(void) {
    const char test[100];
    double cash;

    printf("Please enter your family name: ");
    scanf("%s", test);
    printf("\nThen enter a number: ");
    scanf("%lf", &cash);
    printf("\nThe %s family just may be $%-2.2f dollars richer!\n", test, cash);

    return 0;
}