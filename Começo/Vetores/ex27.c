#include <stdio.h>

int main() {
    int vetor[10];

    printf("Me diga 10 números e direi quais são primos e suas posições:\n");

    // Lê os 10 números
    for (int i = 0; i < 10; i++) {
        scanf("%i", &vetor[i]);
    }

    // Verifica e imprime os primos
    for (int i = 0; i < 10; i++) {
        int num = vetor[i];
        int ehPrimo = 1; // Começa assumindo que é primo

        if (num <= 1) {
            ehPrimo = 0;
        } else {
            for (int j = 2; j < num; j++) {
                if (num % j == 0) {
                    ehPrimo = 0;
                    break;
                }
            }
        }

        if (ehPrimo) {
            printf("%i é primo na posição %iº\n", num, i + 1);
        }
    }

    return 0;
}


    
    
    /*Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos ´
que sao primos e suas respectivas posic¸ ˜ oes no vetor.*/