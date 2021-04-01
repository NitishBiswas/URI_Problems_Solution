#include<stdio.h>
main()
{
    int n,i,j,sum=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        int c=x/2;
        for(j=1;j<=c;j++){
            if(x%j==0)
                sum+=j;
        }
        if(sum==x){
            printf("%d eh perfeito\n",x);
        }else{
            printf("%d nao eh perfeito\n",x);
        }
        sum=0;
    }
}
