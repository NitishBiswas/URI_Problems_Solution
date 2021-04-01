#include<stdio.h>

#include<math.h>

int main()

{

    double a,b,c,r1,r2,del;

    scanf("%lf %lf %lf",&a,&b,&c);

    del=(b*b)-(4*a*c);

    r1=(-b+sqrt(del))/(2*a);

    r2=(-b-sqrt(del))/(2*a);

    if(a!=0 && del>0)

    {

        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);

    }

    else printf("Impossivel calcular\n");





    return 0;

}
