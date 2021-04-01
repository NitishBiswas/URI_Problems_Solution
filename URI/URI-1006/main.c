#include <stdio.h>
 
int main() {
 
    double a,b,c,mid;
    scanf("%lf%lf%lf",&a,&b,&c);
    mid=(a/10*2)+(b/10*3)+(c/10*5);
    printf("MEDIA = %.1lf\n",mid);
 
    return 0;
}