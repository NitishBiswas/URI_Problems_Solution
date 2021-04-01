#include <stdio.h>
main()
{
    float n,j=2,i,sum=1;
    for(i=3;i<=39;i+=2){
        n=i/j;
        sum+=n;
        j*=2;
    }
    printf("%.2f\n",sum);
    return 0;
}
