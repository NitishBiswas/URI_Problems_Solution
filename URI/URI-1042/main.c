#include <stdio.h>
main()
{
    int a,b,c,e,f,g,temp;
    scanf("%d%d%d",&a,&b,&c);
    e=a;
    f=b;
    g=c;
    if(e<f){
        temp=e;
        e=f;
        f=temp;
    }
    if(f<g){
        temp=f;
        f=g;
        g=temp;
    }
    if(e<f){
        temp=e;
        e=f;
        f=temp;
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",g,f,e,a,b,c);
    return 0;
}
