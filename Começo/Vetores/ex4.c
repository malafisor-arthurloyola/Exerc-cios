#include <stdio.h>

int main() {
    float vetor[8];
    int escolha1, escolha2;
    float soma;

    for (int i = 0; i < 8; i++) {
        printf("Me diga um número real (%d/8): ", i + 1);
        scanf("%f", &vetor[i]);  // Corrigido aqui
    }

    printf("Ok, seus valores são:\n");
    for (int i = 0; i < 8; i++) {
        printf("%.2f", vetor[i]);
        if (i < 7) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Agora escolha duas posições, de 1 à 8:\n");
    scanf("%d %d", &escolha1, &escolha2);

    // Verifica se estão dentro do intervalo válido
    if (escolha1 < 1 || escolha1 > 8 || escolha2 < 1 || escolha2 > 8) {
        printf("Posições inválidas!\n");
        return 1;
    }

    printf("Os números nessas posições são:\n%.2f, %.2f\n",
           vetor[escolha1 - 1], vetor[escolha2 - 1]);

    soma = vetor[escolha1 - 1] + vetor[escolha2 - 1];

    printf("A soma dos dois números escolhidos é: %.2f\n", soma);

    return 0;
}

    /*Faça um programa que leia um vetor de 8 posições e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .*/