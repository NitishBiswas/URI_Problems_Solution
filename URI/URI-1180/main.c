#include <stdio.h>
main()
{
    int n,i,count,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
            count=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,count);
    return 0;
}
