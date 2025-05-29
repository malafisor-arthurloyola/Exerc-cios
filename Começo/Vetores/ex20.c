#include <stdio.h>

int main() {
    int vetor[10];
    int possibilidade;
    int tryagain = 0;
    int vetor_impares[10];
    int n_impares = 0;

    printf("Ok, me diga 10 números entre 0 e 50:\n");

    // Leitura com validação
    for (int i = 0; i < 10; i++) {
        do {
            printf("%i/10: ", i + 1);
            scanf("%i", &possibilidade);

            if (possibilidade >= 0 && possibilidade <= 50) {
                vetor[i] = possibilidade;
                tryagain = 1;
            } else {
                printf("Número inválido, tente novamente.\n");
                tryagain = 0;
            }
        } while (tryagain == 0);
    }

    // Criando o vetor de ímpares
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 1) {
            vetor_impares[n_impares] = vetor[i];
            n_impares++;
        }
    }

    // Imprimindo vetor original (2 por linha)
    printf("\nVetor completo:\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", vetor[i]);
        if (i % 2 == 1) printf("\n");
    }

    // Imprimindo vetor de ímpares (2 por linha)
    if (n_impares > 0) {
        printf("\nApenas ímpares:\n");
        for (int i = 0; i < n_impares; i++) {
            printf("%2d ", vetor_impares[i]);
            if (i % 2 == 1) printf("\n");
        }
    } else {
        printf("\nNenhum número ímpar foi digitado.");
    }

    return 0;
}

    /*Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um ´
vetor com 10 posic¸oes. Preencha um segundo vetor apenas com os n ˜ umeros ´ ´ımpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha*/