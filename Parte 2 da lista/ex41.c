#include <stdio.h>

    int main(){

        int a1, a2;

        printf("Me diga dois valores");
        scanf("%i %i", &a1, &a2);

        if (a1 == a2)
        {
            printf("Números iguais");
        }
        if (a1 > a2)
        {
            printf("Primeiro é maior");
        }
        if (a2 > a1) 
        {
            printf("Segundo é maior");
        }
        return 0;
    }
        /*Ler dois valores e imprimir uma das três mensagens a seguir:
“Números iguais”, caso os números sejam iguais
“Primeiro é maior”, caso o primeiro seja maior que o segundo
“Segundo maior”, caso o segundo seja maior que o primeiro*/


    