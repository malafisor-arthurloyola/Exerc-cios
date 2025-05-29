#include <stdio.h>

int main() {
    int vetora[10], vetorb[10], vetorc[10];

    printf("Ei, você vai me dar 20 números, 10 para o vetor A e 10 para o vetor B. Vou calcular C = A - B\n");

    for (int i = 0; i < 10; i++) {
        printf("%d/10 do A: ", i + 1);
        scanf("%d", &vetora[i]);

        printf("%d/10 do B: ", i + 1);
        scanf("%d", &vetorb[i]);
    }

    printf("\nVetor C (A - B):\n");
    for (int i = 0; i < 10; i++) {
        vetorc[i] = vetora[i] - vetorb[i];
        printf("C[%d] = %d\n", i, vetorc[i]);
    }

    return 0;
}


/*Fac¸a um programa que receba do usuario dois vetores, ´ A e B, com 10 numeros inteiros ´
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.
*/