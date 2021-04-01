#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,max;
    while(scanf("%d",&n)!=EOF){
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<n;i++){
            if(max<a[i])
                max=a[i];
        }
        if(max<10)
            printf("1\n");
        else if(max>=10&&max<20)
            printf("2\n");
        else if(max>=20)
            printf("3\n");
    }
    return 0;
}
