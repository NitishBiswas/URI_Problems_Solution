#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,c1=0,c2=0,c3=0,c4=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2==0)
            c1++;
        if(a[i]%3==0)
            c2++;
        if(a[i]%4==0)
            c3++;
        if(a[i]%5==0)
            c4++;
    }
    printf("%d Multiplo(s) de 2\n",c1);
    printf("%d Multiplo(s) de 3\n",c2);
    printf("%d Multiplo(s) de 4\n",c3);
    printf("%d Multiplo(s) de 5\n",c4);
    return 0;
}
