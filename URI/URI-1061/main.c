#include <stdio.h>
main()
{
    int startD,endD,startH,startM,startS,endH,endM,endS,D,H,M,S;
    char a[4],b[4],c[2],d[2],e[2],f[2];
    scanf("%s %d",&a,&startD);
    scanf("%d %s %d %s %d\n",&startH,&c,&startM,&d,&startS);
    scanf("%s %d",&b,&endD);
    scanf("%d %s %d %s %d",&endH,&e,&endM,&f,&endS);
    D=endD-startD;
    H=endH-startH;
    M=endM-startM;
    S=endS-startS;
    if(S<0){
        S+=60;
        M--;
    }
    if(M<0){
        M+=60;
        H--;
    }
    if(H<0){
        H+=24;
        D--;
    }
    printf("%d dia(s)\n",D);
    printf("%d hora(s)\n",H);
    printf("%d minuto(s)\n",M);
    printf("%d segundo(s)\n",S);
    return 0;
}
