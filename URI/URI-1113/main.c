#include <stdio.h>
main()
{
    int x,y,exit;
    while(1){
        scanf("%d%d",&x,&y);
        if(x==y){
            goto exit;
        }else if(x>y){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
    }
    exit:
    return 0;
}
