#include <stdio.h>
main()
{
    int n,x,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        int count=0;
        for(j=2;j<x;j++){
            if(x%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%d eh primo\n",x);
        }else{
            printf("%d nao eh primo\n",x);
        }

    }
    return 0;
}
