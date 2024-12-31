#include <stdio.h>
#include <unistd.h>

void setColor(int color) {
    printf("\033[0;%dm", color);
}

void resetColor() {
    printf("\033[0m");
}

void printRainbow() {
    int colors[] = {31, 33, 32, 36, 34, 35}; // Red, Yellow, Green, Cyan, Blue, Magenta
    int colorCount = sizeof(colors) / sizeof(colors[0]);

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            setColor(colors[(i + j) % colorCount]);
            printf("█");
        }
        resetColor();
        printf("\n");
    }
}

int main() {
    printRainbow();
    return 0;
}