#include <stdio.h>
int main()
{
    int h,m,s,r;
    scanf("%d%d%d",&h,&m,&s);
    r= h+m+s;
    if(r<0)
        r=24+r;
    printf("%d\n",r%24);
    return 0;
}
