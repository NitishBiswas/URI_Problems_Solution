#include <stdio.h>
main()
{
    int x,y;
    while(1){
        scanf("%d%d",&x,&y);
        if(x==0||y==0){
            return 0;
        }else if(x>0&&y>0){
            printf("primeiro\n");
        }else if(x>0&&y<0){
            printf("quarto\n");
        }else if(x<0&&y<0){
            printf("terceiro\n");
        }else if(x<0&&y>0){
            printf("segundo\n");
        }
    }
}
