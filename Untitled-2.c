#include <stdio.h>
#include <math.h>
int main()
{
    double s,t,x;
    int n=1;

    scanf("%lf", &x);
    t=x;s=x;
    while (fabs(t)>=1e-7) {
        n = n + 2;
        t = t * (-x * x) / (n * (n - 1));
        s = s + t;
    }

    printf("sin(%lf) = %lf\n", x, s);

    return 0;
}
