// text.c
#include <stdio.h>
int text(int text_text);
int main(void)
{
    int first = 5;
    int second;

    second = text(first);
    printf("\n%d", second);

    return 0;
}

int text(int text_text){
    while(text_text-- > 0)
        printf("#");
    return 10086;
}