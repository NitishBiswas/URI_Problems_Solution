#include <stdio.h>
main()
{
    int n,i,sum=0;
    while(1){
        scanf("%d",&n);
        if(n==0)
            break;
        if(n%2==0){
            for(i=0;i<5;i++){
                sum+=n;
                n+=2;
            }
            printf("%d\n",sum);
            sum=0;
        }else{
            for(i=0;i<5;i++){
                sum+=n+1;
                n+=2;
            }
            printf("%d\n",sum);
            sum=0;
        }
    }
    return 0;
}
