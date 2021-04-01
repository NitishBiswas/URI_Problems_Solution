#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double n,r,a,b;
    scanf("%lf",&n);
    a=(1+sqrt(5))/2.0;
    b=(1-sqrt(5))/2.0;
    r=(pow(a,n)-pow(b,n))/sqrt(5);
    printf("%.1lf\n",r);
    return 0;
}
