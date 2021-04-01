#include <stdio.h>
main()
{
    int i,j,n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            k++;
            printf("%d ",k);
        }
        printf("PUM\n");
        k++;
    }
    return 0;
}
