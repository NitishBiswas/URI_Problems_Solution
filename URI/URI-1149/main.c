#include <stdio.h>
int main()
{
    int X, N, a,b=0;
    scanf("%d %d", &X, &N);
    while(N<=0)
        scanf("%d", &N);
    for(a=1; a<=N; a++)
    {
        b+=X;
        X++;
    }
    printf("%d\n",b);
    return 0;
}
