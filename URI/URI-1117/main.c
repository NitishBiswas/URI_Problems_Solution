#include <stdio.h>
main()
{
    float n,sum=0.0;
    int i=0;
    while(1){
        scanf("%f",&n);
        if(n>10.0||n<0.0){
            printf("nota invalida\n");
        }else{
            i++;
            sum+=n;
            if(i==2){
                printf("media = %.2f\n",(sum/2));
                break;
            }
        }
    }
    return 0;
}
