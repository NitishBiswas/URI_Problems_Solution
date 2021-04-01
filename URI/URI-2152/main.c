#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&i,&j,&k);
        if(i<10)
            printf("0%d:",i);
        else
            printf("%d:",i);
        if(j<10)
            printf("0%d",j);
        else
            printf("%d",j);
        if(k==0)
            printf(" - A porta fechou!\n");
        else
            printf(" - A porta abriu!\n");
    }
    return 0;
}
