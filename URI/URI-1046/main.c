#include <stdio.h>
main()
{
    int start,end,result;
    scanf("%d%d",&start,&end);
    result=end-start;
    if(result<0)
        result=24+result;
    if(start==end){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else{
        printf("O JOGO DUROU %d HORA(S)\n",result);
    }
    return 0;
}
