#include <stdio.h>
#include<string.h>
main()
{
    char a[20],b[20],c[20];
    gets(a);
    gets(b);
    gets(c);
    if(strcmp(a,"vertebrado")==0 && strcmp(b,"ave")==0 && strcmp(c,"carnivoro")==0){
        printf("aguia\n");
    }
    if(strcmp(a,"vertebrado")==0 && strcmp(b,"ave")==0 && strcmp(c,"onivoro")==0){
        printf("pomba\n");
    }
    if(strcmp(a,"vertebrado")==0 && strcmp(b,"mamifero")==0 && strcmp(c,"onivoro")==0){
        printf("homem\n");
    }
    if(strcmp(a,"vertebrado")==0 && strcmp(b,"mamifero")==0 && strcmp(c,"herbivoro")==0){
        printf("vaca\n");
    }
    if(strcmp(a,"invertebrado")==0 && strcmp(b,"inseto")==0 && strcmp(c,"herbivoro")==0){
        printf("lagarta\n");
    }
    if(strcmp(a,"invertebrado")==0 && strcmp(b,"inseto")==0 && strcmp(c,"hematofago")==0){
        printf("pulga\n");
    }
    if(strcmp(a,"invertebrado")==0 && strcmp(b,"anelideo")==0 && strcmp(c,"hematofago")==0){
        printf("sanguessuga\n");
    }
    if(strcmp(a,"invertebrado")==0 && strcmp(b,"anelideo")==0 && strcmp(c,"onivoro")==0){
        printf("minhoca\n");
    }

    return 0;
}
