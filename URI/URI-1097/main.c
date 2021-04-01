#include <stdio.h>
main()
{
    int i,j,k=7,temp;
    for(i=1;i<=9;i+=2){
            temp=k;
        for(j=0;j<3;j++){
            printf("I=%d J=%d\n",i,temp);
            temp--;
        }
        k+=2;
    }
    return 0;
}
