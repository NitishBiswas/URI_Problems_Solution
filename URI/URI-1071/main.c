#include <stdio.h>
main()
{
    int a,b,i,sum=0;
    scanf("%d%d",&a,&b);
    if(a>b){
        for(i=b+1;i<a;i=i+1){
            if(i%2==1||i%2==-1){
                sum+=i;
            }
        }
    }else{
        for(i=a+1;i<b;i=i+1){
            if(i%2==1||i%2==-1){
                sum+=i;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
