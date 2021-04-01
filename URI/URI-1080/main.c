#include <stdio.h>
main()
{
    int a[100],i,max,count;
    for(i=0;i<100;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<100;i++){
        if(a[i]>max){
            max=a[i];
            count=i;
        }
    }
    printf("%d\n%d\n",max,count+=1);
    return 0;
}
