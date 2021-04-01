#include <stdio.h>
main()
{
    float n,sum=0.0;
    int i=0,j;
    while(1){
            exit:
        scanf("%f",&n);
        if(n>10.0||n<0.0){
            printf("nota invalida\n");
        }else{
            i++;
            sum+=n;
            if(i==2){
                printf("media = %.2f\n",(sum/2));
                i=0;
                sum=0;
                break;
            }
        }
    }
    while(1){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&j);
        if(j==1){
            goto exit;
        }else if(j==2){
            return 0;
        }
    }
}
