#include <stdio.h>
main()
{
    int n,sum=0;
    float i=0.0,r;
    while(1){
        scanf("%d",&n);
        if(n<0)
            break;
        sum+=n;
        i++;
    }
    r=sum/i;
    printf("%.2f\n",r);
    return 0;
}
