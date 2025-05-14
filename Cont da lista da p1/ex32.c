#include <stdio.h>

int main() {
    int N;
    char continuar = 's';

    do {
        printf("Digite um número N: ");
        scanf("%d", &N);

        double E = 1.0; // Começa com 1 (0! = 1)
        for (int i = 1; i <= N; i++) {
            double f = 1.0;
            for (int j = 1; j <= i; j++) {
                f *= j;
            }
            E += 1.0 / f;
        }

        printf("Valor aproximado de E com %d termos: %.6lf\n", N, E);

        printf("Quer inserir outro número? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
