#include <stdio.h>

    int main(){

        float vetor[10];
        float bruto;

        printf("Me diga, 10 numeros, os negativos serao atribuidos como 0\n");
        for (int i = 0; i < 10; i++)
        {
            scanf("%f", &bruto);
            if (bruto<0)
            {
                vetor[i] = 0;
            }else{
            
            vetor[i] = bruto;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%.2f", vetor[i]);
            if(i<9){
                printf(", ");
            }
        }
        return 0;
    }

    /*Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
valores negativos.*/