#include <stdio.h>

int main(){
    int num = 1;

    while (num >= 1 && num <= 5) {
        printf("请输入代表星期几的数字（如周一：1、周二：2）：");
        scanf("%d", &num);
        switch (num) {
            case 1:printf("科技活动\n");
                    break;
            case 2:printf("社会活动\n");
                    break;
            case 3:printf("艺术活动\n");
                    break;
            case 4:printf("文艺活动\n");
                    break;
            case 5:printf("劳技活动\n");
                    break;
        }
    }

    return 0;
}