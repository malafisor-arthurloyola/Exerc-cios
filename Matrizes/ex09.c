#include <stdio.h>

int main() {
    int matriz[3][3];
    int soma = 0;

    printf("Oi, vou ler uma matriz de 3x3 elementos\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma dos elementos abaixo da diagonal principal
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j) {
                soma += matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma);

    return 0;
}

    /*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao abaixo da ˜
diagonal principal.
*/