// strings1.c
#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main()
{
    char words[MAXLENGTH] = "I am string in an array";
    const char * pt1 = "Something is pointing at me.";

    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[6] = 'p';
    puts(words);

    return 0;
}
