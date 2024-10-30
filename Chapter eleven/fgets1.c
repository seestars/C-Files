// fgets1.c -- 使用 fgets() 和 fputs()
#include <stdio.h>
#define STLEN 14 
int main()
{
    char word[STLEN];

    puts("Enter a string, please.");
    fgets(word, STLEN, stdin);
    printf("Your string twice (puts(), then fputs():\n");
    puts(word);
    fputs(word, stdout);
    puts("Enter another string, please.");
    fgets(word, STLEN, stdin);
    printf("Your string twice (puts(), then fputs():\n ");
    puts(word);
    fputs(word, stdout);
    puts("Done.");

    return 0;
}