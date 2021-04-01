#include <stdio.h>
main()
{
    int a[20];
    int i;
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,a[19-i]);
    }
    return 0;
}
