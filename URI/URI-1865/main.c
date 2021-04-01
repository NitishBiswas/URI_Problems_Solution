#include <stdio.h>
int main()
{
    int n,i,m;
    char ara[1000];
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%s",ara);
        scanf("%d",&m);
        if(ara[0]=='T' && ara[1]=='h' && ara[2]=='o' && ara[3]=='r')
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
