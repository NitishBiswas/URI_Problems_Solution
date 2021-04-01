#include<stdio.h>
main()
{
    int x,y;
    float result;
    scanf("%d%d",&x,&y);
    switch(x)
    {
    case 1:
        result=y*4.00;
        printf("Total: R$ %.2f\n",result);
        break;
    case 2:
        result=y*4.5;
        printf("Total: R$ %.2f\n",result);
        break;
    case 3:
        result=y*5.00;
        printf("Total: R$ %.2f\n",result);
        break;
    case 4:
        result=y*2.00;
        printf("Total: R$ %.2f\n",result);
        break;
    case 5:
        result=y*1.50;
        printf("Total: R$ %.2f\n",result);
        break;
    }
    return 0;
}
