#include <stdio.h>
    
    int main(){
        char l;
        char continuar;
        continuar='s';

        do
        {
            printf("Caractere: \n");
        scanf(" %c", &l);

            if((l>=65 && l<90) || (l>=97 && l<=122)){
                if(l=='a' || l=='e'|| l=='i'|| l=='o'|| l=='u'|| l=='A'|| l=='E'|| l=='I'|| l=='O'|| l=='U'){
                    printf("É uma vogal\n");
                } else{
                    printf("É uma consoante\n");
                }
            } else{
                printf("Não é uma letra\n");
            }
                printf("Quer inserir outro número?\n");
                scanf(" %c", &continuar);
        } while (continuar=='s'|| continuar=='S');

        return 0;
    

}