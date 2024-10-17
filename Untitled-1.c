#include <stdio.h>

int main() {
    int x, y, z;  // x: 大马数量, y: 中马数量, z: 小马数量

    printf("可能的解决方案：\n");
    printf("大马 中马 小马\n");

    for (x = 0; x <= 100; x++) {
        for (y = 0; y <= 100 - x; y++) {
            z = 100 - x - y;
            if (3 * x + 2 * y + 0.5 * z == 100) {
                printf("%4d %4d %4d\n", x, y, z);
            }
        }
    }
    return 0;
}