#include <stdio.h>
main()
{
    int n,i,sumC=0,sumR=0,sumS=0,sum;
    float p1,p2,p3;
    scanf("%d",&n);
    int a[n];
    char b[n];
    for(i=0;i<n;i++){
        scanf("%d %c",&a[i],&b[i]);
    }

    for(i=0;i<n;i++){
        if(b[i]=='C'){
            sumC=sumC+a[i];
        }
        if(b[i]=='R'){
            sumR=sumR+a[i];
        }
        if(b[i]=='S'){
            sumS=sumS+a[i];
        }
    }
    sum=sumC+sumR+sumS;
    p1=(sumC*100.00)/sum;
    p2=(sumR*100.00)/sum;
    p3=(sumS*100.00)/sum;

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",sumC);
    printf("Total de ratos: %d\n",sumR);
    printf("Total de sapos: %d\n",sumS);
    printf("Percentual de coelhos: %.2f %\n",p1);
    printf("Percentual de ratos: %.2f %\n",p2);
    printf("Percentual de sapos: %.2f %\n",p3);
    return 0;
}
