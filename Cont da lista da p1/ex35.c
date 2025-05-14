#include <stdio.h>

int main() {
    int n, num;

    printf("Quantos valores você deseja inserir? ");
    scanf("%d", &n);

    printf("\nNumero\tFatorial\n");

    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);

        long long fatorial = 1;
        for (int j = 1; j <= num; j++) {
            fatorial *= j;
        }

        printf("%d\t%lld\n", num, fatorial);
    }

    return 0;
}
