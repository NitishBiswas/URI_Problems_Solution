#include <stdio.h>
main()
{
    int n,x,y,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x<y){
            for(j=x+1;j<y;j++){
                if(j%2==1){
                    sum+=j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }else{
            for(j=y+1;j<x;j++){
                if(j%2==1){
                    sum+=j;
                }
            }
            printf("%d\n",sum);
            sum=0;
        }
    }
    return 0;
}
