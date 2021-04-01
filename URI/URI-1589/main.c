#include <stdio.h>
int main()
{
    int T, R1, R2, a, b;
    scanf("%d", &T);
    for(a=1;a<=T;a++)
    {
        scanf("%d%d", &R1, &R2);
        b=R1+R2;
        printf("%d\n",b);
    }
    return 0;
}
