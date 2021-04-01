#include <stdio.h>
int main()
{
    int n,l;
    char name[10100];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",name);
        l= strlen(name);
        printf("%.2lf\n",l*.01);
    }
    return 0;
}
