#include <stdio.h>
 
int main() {
 
    int r;
    double pi,result;
    pi=3.14159;
    scanf("%d",&r);
    result=(4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n",result);
 
    return 0;
}