#include <stdio.h>

int main() {
    char timeAzul[50], timeVermelho[50];
    int ga, gv;

    printf("Nome do time azul: ");
    scanf("%s", timeAzul);

    printf("Nome do time vermelho: ");
    scanf("%s", timeVermelho);

    printf("Quantos gols o time %s fez? ", timeAzul);
    scanf("%d", &ga);

    printf("Quantos gols o time %s fez? ", timeVermelho);
    scanf("%d", &gv);

    if (ga > gv) {
        printf("O vencedor é o time %s\n", timeAzul);
    } else if (ga == gv) {
        printf("Houve um empate entre os times\n");
    } else {
        printf("O vencedor é o time %s\n", timeVermelho);
    }

    return 0;


        /*Ler o nome de dois times e o número de gols marcados na partida (para cada time). Escrever o
nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.*/

    }