#include <stdio.h>
main()
{
    int n,i=0,j=0,k=0;
    while(1){
        scanf("%d",&n);
        if(n==4)
            break;
        switch(n)
        {
            case 1:i++;
                break;
            case 2:j++;
                break;
            case 3:k++;
                break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",i);
    printf("Gasolina: %d\n",j);
    printf("Diesel: %d\n",k);
    return 0;
}
