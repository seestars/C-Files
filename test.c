#include<stdio.h>
int fun(int b[],int n)
{int i,r=1;
for(i=0;i<=n;i++) r=r*b[i];
return r;}
int main(void)
{int m,a[]={2,3,4,5,6,7,8,9};
m=fun(a,4);
printf("%d\n",m);
return 0;}