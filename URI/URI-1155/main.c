#include <stdio.h>
main()
{
    float n,sum=0,i;
    for(i=1;i<=100;i++){
        n=1/i;
        sum+=n;
    }
    printf("%.2f\n",sum);
    return 0;
}
