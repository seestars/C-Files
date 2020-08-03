// jolly.c —— 打印书2.12 编程练习 4. (p37)
#include<stdio.h>
void jolly(void);
void deny(void);
int main() {
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void){
    printf("For he's joolly good fellow!\n");
}

void deny(void){
    printf("Which nobody can deny!\n");
}