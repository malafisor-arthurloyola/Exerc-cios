#include <stdio.h>

int main() {
    float vetorr[10];   // Vetor original
    float vetorq[10];   // Vetor com os quadrados

    // Leitura dos 10 valores reais
    for (int i = 0; i < 10; i++) {
        printf("Me diga um número real (%d/10): ", i + 1);
        scanf("%f", &vetorr[i]);
    }

    // Cálculo do quadrado dos valores
    for (int i = 0; i < 10; i++) {
        vetorq[i] = vetorr[i] * vetorr[i];
    }

    // Impressão dos vetores
    printf("\nValores originais:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetorr[i]);
    }

    printf("\n\nQuadrados dos valores:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", vetorq[i]);
    }

    printf("\n");
    return 0;
}
