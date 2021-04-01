#include<stdio.h>
main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    a=0,b=1;

    for(i=1;i<=n-1;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;

    }
    printf("%d\n",a);
    return 0;
}
