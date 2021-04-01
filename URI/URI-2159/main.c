#include <stdio.h>
main()
{
    double n,ans1,ans2;
    scanf("%lf",&n);
    ans1=n/log(n);
    ans2=(1.25506)*ans1;
    printf("%.1lf %.1lf\n",ans1,ans2);
    return 0;
}
