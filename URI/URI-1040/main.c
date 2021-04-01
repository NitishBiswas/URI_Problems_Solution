#include <stdio.h>
main()
{
    float N1,N2,N3,N4,ave,N5,reave;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    ave=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    if(ave>=7.0){
        printf("Media: %.1f\n",ave);
        printf("Aluno aprovado.\n");
    }else if(ave<5.0){
        printf("Media: %.1f\n",ave);
        printf("Aluno reprovado.\n");
    }else if(ave>=5.0 && ave<=6.9){
        printf("Media: %.1f\n",ave);
        printf("Aluno em exame.\n");
        scanf("%f",&N5);
        printf("Nota do exame: %.1f\n",N5);
        reave=(ave+N5)/2;
        if(reave>=5.0){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",reave);
    }
    return 0;
}
