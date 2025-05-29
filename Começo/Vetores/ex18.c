#include <stdio.h>

int main() {
    int vetor[10];
    int multiplos;

    printf("Oie, me diga 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Agora selecione um número para ver os múltiplos dentro da sua lista:\n");
    scanf("%d", &multiplos);

    printf("Os múltiplos de %d são: ", multiplos);
    int encontrou = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % multiplos == 0) {
            printf("%d ", vetor[i]);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum múltiplo encontrado.");
    }

    printf("\n");
    return 0;
}
