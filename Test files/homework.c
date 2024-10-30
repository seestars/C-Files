/*输入为角度*/
#include <stdio.h>
#include <math.h>
int main()
{
    const double pi=acos(-1.0);
    double x,r;
    double s,c;
    scanf("%lf",&x);
    r=x*pi/180;
    s=sin(r);
    c=cos(r);
    printf("sin=%f,cos=%f\n",s,c);
    return 0;
}