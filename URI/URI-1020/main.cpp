#include<stdio.h>
int main()
{
    int n,y,m,d;
    scanf("%d",&n);
    y=n/365;
    printf("%d ano(s)\n",y);
    y=y*365;
    y=n-y;
    m=y/30;
    printf("%d mes(es)\n",m);
    m=m*30;
    d=y-m;
    printf("%d dia(s)\n",d);
    return 0;
}
