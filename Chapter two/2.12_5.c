// 2.12_5.c —— 打印书2.12 编程练习 5. (p37)
#include<stdio.h>
void br(void);
void ic(void);
int main() {
    br();ic();
    printf("\n");
    ic();
    printf("\n");
    br();

    return 0;
}

void br(void){
    printf("Brazil,Russia");
}

void ic(void){
    printf("India,China");
}
