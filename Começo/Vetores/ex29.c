#include <stdio.h>

int main() {
    int vetor[6]; // Usei int, já que o exercício pede números inteiros
    int vetorp[6], vetori[6]; // Máximo de 6 pares ou 6 ímpares
    int qntp = 0, qntimp = 0;
    int soma = 0;

    printf("Me diga 6 numeros:\n");

    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            vetorp[qntp] = vetor[i];
            qntp++;
        } else {
            vetori[qntimp] = vetor[i];
            qntimp++;
        }
    }

    // Imprime pares
    printf("\nValores pares digitados: ");
    for (int i = 0; i < qntp; i++) {
        printf("%d ", vetorp[i]);
        soma += vetorp[i]; // Soma dos pares
    }

    printf("\nSoma dos pares: %d", soma);

    // Imprime ímpares
    printf("\nValores ímpares digitados: ");
    for (int i = 0; i < qntimp; i++) {
        printf("%d ", vetori[i]);
    }

    printf("\nQuantidade de números ímpares: %d\n", qntimp);

    return 0;
}


/*9. Fac¸a um programa que receba 6 numeros inteiros e mostre: ´
• Os numeros pares digitados; ´
• A soma dos numeros pares digitados; ´
• Os numeros ´ ´ımpares digitados;
• A quantidade de numeros ´ ´ımpares digitados;*/