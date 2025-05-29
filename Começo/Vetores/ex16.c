#include <stdio.h>

    int main(){

        float vetor[5];
        int escolha;

        printf("Ola, voce ira inserir 5 numeros.\n");
        for(int i=0; i<5; i++){
            scanf("%f", &vetor[i]);
        }
        printf("Ok, agora me diga\n Você quer:\nParar o programa(0)\nMostrar o vetor na ordem direta(1)\nMostrar o vetor na ordem inversa(2)?");
        scanf("%i", &escolha);

        if (escolha==0)
        {
            printf("Programa finalizado");
            return 0;
        } else if (escolha==1){
            for (int i = 0; i < 5; i++) {
                printf("%.2f", vetor[i]);
                    if (i < 4) {
                printf(", ");
                    }
            }
        } else if (escolha==2){
            for (int i = 4; i >=0; i--) {
                printf("%.2f", vetor[i]);
                    if (i > 0) {
                printf(", ");
                    }
            }
        } else{
            printf("Código invalido");
        }

    return 0;
    }
        



    /*Faca um programa que leia um vetor de 5 posicoes para numeros reais e, depois, um 
codigo inteiro. Se o codigo for zero, finalize o programa; se for 1, mostre o vetor na ordem
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2
escreva uma mensagem informando que o codigo e invalido.*/