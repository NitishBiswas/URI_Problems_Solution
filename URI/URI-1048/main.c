#include <stdio.h>
main()
{
    float n,a;
    scanf("%f",&n);
    if(n>=0&&n<=400.00){
        a=(n*15)/100;
        printf("Novo salario: %.2f\n",n+a);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 15 %%\n");
    }
    if(n>400.00&&n<=800.00){
        a=(n*12)/100;
        printf("Novo salario: %.2f\n",n+a);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 12 %%\n");
    }
    if(n>800.00&&n<=1200.00){
        a=(n*10)/100;
        printf("Novo salario: %.2f\n",n+a);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 10 %%\n");
    }
    if(n>1200.00&&n<=2000.00){
        a=(n*7)/100;
        printf("Novo salario: %.2f\n",n+a);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 7 %%\n");
    }
    if(n>2000.00){
        a=(n*4)/100;
        printf("Novo salario: %.2f\n",n+a);
        printf("Reajuste ganho: %.2f\n",a);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
