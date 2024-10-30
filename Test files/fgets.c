#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 40

int main() {
    char input[MAX_LENGTH + 1]; // 多留一个字节用于存储字符串结束符
    int valid = 0;

    while (!valid) {
        printf("请输入一个最多40字节的字符串：");
        fgets(input, sizeof(input), stdin);

        // 检查输入是否超过40个字节
        if (input[strlen(input) - 1] != '\n') {
            printf("输入超过了40字节，请重新输入。\n");

            // 清空缓冲区
            int c;
            while ((c = getchar()) != '\n' && c != EOF);

        } else {
            // 去掉换行符
            input[strlen(input) - 1] = '\0';
            valid = 1;
        }
    }

    printf("您输入的字符串是：%s\n", input);
    return 0;
}