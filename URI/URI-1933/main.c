#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==b)
            printf("%d\n", a);
        else if(a>b)
            printf("%d\n", a);
        else if(a<b)
            printf("%d\n", b);
    }
    return 0;
}
