#include<stdio.h>
int main()
{
    int n,h,m,s;
    scanf("%d",&n);
    h=n/3600;
    printf("%d:",h);
    h=3600*h;
    n=n-h;
    m=n/60;
    printf("%d:",m);
    s=60*m;
    printf("%d\n",n-s);
    return 0;

}
