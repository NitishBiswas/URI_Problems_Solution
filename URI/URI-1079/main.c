#include <stdio.h>
main()
{
    int n,i;
    float n1,n2,n3,result,total;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f%f%f",&n1,&n2,&n3);
        total=n1*2+n2*3+n3*5;
        result=total/10;
        printf("%.1f\n",result);
    }
    return 0;
}
