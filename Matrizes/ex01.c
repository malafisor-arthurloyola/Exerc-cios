#include <stdio.h>

int main() {
    int matriz[4][4];
    int cont=0; 

    printf("Oi, vou ler uma matriz de 3x3 elementos\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("matriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Soma dos elementos abaixo da diagonal principal
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j]>10) {
                cont+=1;
            }
        }
    }

    printf("Há %i numeros maiores que 10", cont);

    return 0;
}

    /*Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/