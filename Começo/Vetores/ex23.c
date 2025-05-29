#include <stdio.h>

int main() {
    float vetorA[5], vetorB[5];
    float produtoEscalar = 0;

    printf("Informe 5 números reais para o vetor A:\n");
    for (int i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%f", &vetorA[i]);
    }

    printf("\nInforme 5 números reais para o vetor B:\n");
    for (int i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%f", &vetorB[i]);
    }

    // Calcula o produto escalar
    for (int i = 0; i < 5; i++) {
        produtoEscalar += vetorA[i] * vetorB[i];
    }

    // Imprime os vetores
    printf("\nVetor A: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetorA[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetorB[i]);
    }

    // Imprime o produto escalar
    printf("\n\nProduto escalar: %.2f\n", produtoEscalar);

    return 0;
}

/*Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto ´
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o ˆ
produto escalar, sendo que o produto escalar e dado por: ´ x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.*/