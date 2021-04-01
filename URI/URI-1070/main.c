#include <stdio.h>
main()
{
    int i,n;
    scanf("%d",&n);
    if(n%2==0){
        for(i=0;i<6;i++){
            printf("%d\n",n=n+1);
            n++;
        }
    }else{
        for(i=0;i<6;i++){
            printf("%d\n",n);
            n+=2;
        }
    }
    return 0;
}
