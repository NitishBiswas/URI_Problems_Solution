#include <stdio.h>
main()
{
    double a[100],r,n;
    int i;
    scanf("%lf",&n);
    r=n;
    for(i=0;i<100;i++){
        printf("N[%d] = %.4lf\n",i,r);
        r=n/2;
        n=r;
    }
    return 0;
}
