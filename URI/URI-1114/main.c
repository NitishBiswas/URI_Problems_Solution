#include <stdio.h>
main()
{
    int n;
    while(1){
        scanf("%d",&n);
        if(n==2002){
            printf("Acesso Permitido\n");
            return 0;
        }else{
            printf("Senha Invalida\n");
        }
    }
}
