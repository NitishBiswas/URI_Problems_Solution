#include <stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]==0){
            printf("NULL\n");
        }else if(a[i]>0){
            if(a[i]%2==0){
                printf("EVEN POSITIVE\n");
            }else{
                printf("ODD POSITIVE\n");
            }
        }else{
            if(a[i]%2==0){
                printf("EVEN NEGATIVE\n");
            }else{
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}
