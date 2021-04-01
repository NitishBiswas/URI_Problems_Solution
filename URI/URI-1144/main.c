#include <stdio.h>
main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d %d %d\n%d %d %d\n",i,i*i,i*i*i,i,((i*i)+1),((i*i*i)+1));
    }
    return 0;
}
