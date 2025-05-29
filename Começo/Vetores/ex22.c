#include <stdio.h>

int main() {
    int vetora[10], vetorb[10], vetorc[10];

    printf("Olá! Você me informará 10 números do vetor A e 10 do vetor B.\n");

    // Leitura dos vetores A e B
    for (int i = 0; i < 10; i++) {
        printf("%i/10 do vetor A: ", i + 1);
        scanf("%i", &vetora[i]);

        if (i % 2 == 0) {
            vetorc[i] = vetora[i];  // posições pares do vetor A vão para C
        }

        printf("%i/10 do vetor B: ", i + 1);
        scanf("%i", &vetorb[i]);

        if (i % 2 == 1) {
            vetorc[i] = vetorb[i];  // posições ímpares do vetor B vão para C
        }
    }

    // Impressão do vetor C
    printf("\nO vetor C (pares de A e ímpares de B) é:\n");
    for (int i = 0; i < 10; i++) {
        printf("C[%d] = %d\n", i, vetorc[i]);
    }

    return 0;
}


    /*Fac¸a um programa que leia dois vetores de 10 posic¸oes e calcule outro vetor contendo, ˜
nas posic¸oes pares os valores do primeiro e nas posic¸ ˜ oes impares os valores do se- ˜
gundo.*/