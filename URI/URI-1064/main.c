#include <stdio.h>
main()
{
    float a[6],result,sum=0;
    int i,count=0;
    for(i=0;i<6;i++){
        scanf("%f",&a[i]);
    }
    for(i=0;i<6;i++){
        if(a[i]>0){
            count++;
            sum+=a[i];
        }
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",sum/count);
    return 0;
}
