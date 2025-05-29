#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10];
    int cont_impar = 0, cont_par = 0;

    printf("Olá, digite 10 números inteiros, direi quais são ímpares e quais são pares:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0) {
            v2[cont_par] = v[i];
            cont_par++;
        } else {
            v1[cont_impar] = v[i];
            cont_impar++;
        }
    }

    printf("\nValores ímpares (v1): ");
    for (int i = 0; i < cont_impar; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nValores pares (v2): ");
    for (int i = 0; i < cont_par; i++) {
        printf("%d ", v2[i]);
    }

    printf("\n");

    return 0;
}

    /*Leia 10 numeros inteiros e armazene em um vetor ´ v. Crie dois novos vetores v1 e v2.
Copie os valores ´ımpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no m ˆ aximo 10 elementos, mas nem todos os elementos s ´ ao˜
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/