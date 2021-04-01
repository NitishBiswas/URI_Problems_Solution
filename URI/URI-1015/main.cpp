#include <stdio.h>
#include<math.h> 
int main() {
 
    double x1,y1,x2,y2,x,y,result;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    x=(x2-x1)*(x2-x1);
    y=(y2-y1)*(y2-y1);
    result=x+y;
    printf("%.4lf\n",sqrt(result));
    return 0;
}