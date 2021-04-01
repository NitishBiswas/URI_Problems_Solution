#include <stdio.h>
main()
{
    int startH,startM,endH,endM,resultH,resultM;
    scanf("%d%d%d%d",&startH,&startM,&endH,&endM);
    resultH=endH-startH;
    if(resultH<0){
        resultH=24+resultH;
    }
    resultM=endM-startM;
    if(resultM<0){
        resultM=60+resultM;
        resultH--;
    }
    if(startH==endH&&startM==endM){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",resultH,resultM);
    }
    return 0;
}
