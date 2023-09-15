#include <stdio.h>

int main() {
    long int x, y, m, i, v = 0;
    long int c = 0;
    int d = 0;

    scanf("%ld %ld", &x, &m);
    long int num[x];
    for (i = 0; i < x; i++)
    {
        scanf("%ld", &num[i]);
    }
    i = 0;

    for (i = 0; i < d; i++) {
        c = 0;
        for (v = i; v < d; v++)
        {
            c += num[v];
            if (c == m)
            {
                y++;
                break;
            }
        }
    }

    printf("%ld", y);

    return 0;
    }