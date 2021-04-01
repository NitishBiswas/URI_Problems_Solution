#include <stdio.h>
main()
{
    int n,i,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        x*=i;
    }
    printf("%d\n",x);
    return 0;
}
