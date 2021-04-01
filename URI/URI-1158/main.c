#include <stdio.h>
main()
{
    int n,x,y,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(x%2==1){
            for(j=1;j<=y;j++){
                sum+=x;
                x+=2;
            }
            printf("%d\n",sum);
            sum=0;
        }else{
            for(j=1;j<=y;j++){
                sum+=x+1;
                x+=2;
            }
            printf("%d\n",sum);
            sum=0;
        }
    }
    return 0;
}
