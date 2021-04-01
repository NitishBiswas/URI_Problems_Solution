#include <stdio.h>
main()
{
    int n,i;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }else{
            for(i=1;i<n;i++){
                printf("%d ",i);
            }
            printf("%d\n",i);
        }
    }
    return 0;
}
