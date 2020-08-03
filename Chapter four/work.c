// work.c —— 复习题
#include <stdio.h>
//#include <string.h>     // 提供strlen()函数的原型
int main() {
    float megabits , megabytes;

    printf("Please enter your megabits:      Mb/s\b\b\b\b\b\b\b\b\b");
    scanf("%f", &megabits);
    printf("Okey. Then enter your file megabytes:         MB\b\b\b\b\b\b\b\b\b\b");
    scanf("%f", &megabytes);
    printf("So good!\n"
            "At %.2f megabits per second, a file of %.2f megabytes\n"
            "downloads in %.2f seconds.", megabits, megabytes, megabytes * 8 / megabits);

    return 0;
}