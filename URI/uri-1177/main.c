#include<stdio.h>
int main()
{
    int N[1000],n,i,j=0;
    scanf("%d",&n);
    for(i = 0;i < 1000;i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==n)
            j=0;
    }
    return 0;
}
