#include <stdio.h>

    int main(){
        
        char continuar ='s';
    do
    {
        int valores[6];
        

        for (int i = 0; i < 6; i++)
        {
            printf("Me fale um númeroz\n");
            scanf("%i", &valores[i]);

        }

        printf("Valores:\n");
        for (int i = 0; i < 6; i++)
        {
            printf("%i\n", valores[i]);
        }
        
        printf("Deseja continuar? (s/n)\n");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar =='S');
        return 0;
    }
    /*Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

*/