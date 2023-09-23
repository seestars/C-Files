#include <stdio.h>

int main() {
    int n, m;
    int number1, number2, cache1;

    scanf("%d %d", &n,&m);
    int seat_number[n];

    for (int i = 0; i < n; i++) {
        seat_number[i] = i+1;
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &number1, &number2);
        cache1 = seat_number[number1 - 1];
        seat_number[number1 - 1] = seat_number[number2 - 1];
        seat_number[number2 - 1] = cache1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", seat_number[i]);
    }

    return 0;
}

