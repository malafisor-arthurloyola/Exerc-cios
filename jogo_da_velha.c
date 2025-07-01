#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char tabuleiro[3][3];

void imprimeMenu();
void inicilizaTabuleiro();
void imprimeTabuleiro();
void jogadorJogador();
void jogadorComputador();
int ganhou();

int main() {
    int op;
    do {
        imprimeMenu();
        scanf("%d", &op);
        if (op == 1) {
            inicilizaTabuleiro();
            jogadorJogador();
        } else if (op == 2) {
            inicilizaTabuleiro();
            jogadorComputador();
        }
    } while (op != 3);
}

void imprimeMenu() {
    printf("\nMenu");
    printf("\n1 - Jogador contra jogador");
    printf("\n2 - Jogador contra computador");
    printf("\n3 - Sair");
    printf("\nOpcao: ");
}

void inicilizaTabuleiro() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            tabuleiro[i][j] = ' ';
}

void imprimeTabuleiro() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("|\t%c\t", tabuleiro[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
}

int ganhou() {
    // Olhando as linhas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' &&
            tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2]) {

            if (tabuleiro[i][0] == 'X') {
                return 1;
            } else {
                return 2;
            }
        }
    }

    // Olhando as colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[0][i] != ' ' &&
            tabuleiro[0][i] == tabuleiro[1][i] &&
            tabuleiro[1][i] == tabuleiro[2][i]) {

            if (tabuleiro[0][i] == 'X') {
                return 1;
            } else {
                return 2;
            }
        }
    }

    // Vendo a diagonal principal
    if (tabuleiro[0][0] != ' ' &&
        tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2]) {

        if (tabuleiro[0][0] == 'X') {
            return 1;
        } else {
            return 2;
        }
    }

    // Vendo a diagonal secundária
    if (tabuleiro[0][2] != ' ' &&
        tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0]) {

        if (tabuleiro[0][2] == 'X') {
            return 1;
        } else {
            return 2;
        }
    }

    return 0; // ninguém ganhou ainda
}

void jogadorJogador() {
    int vencedor = 0;
    int turnos = 0;

    while (turnos < 9 && vencedor == 0) {
        int l, c;

        if (turnos % 2 == 0) {
            printf("Jogador 1 (X): Escolha a posição (linha coluna): ");
        } else {
            printf("Jogador 2 (O): Escolha a posição (linha coluna): ");
        }

        scanf("%d %d", &l, &c);

        while (l < 0 || l > 2 || c < 0 || c > 2 || tabuleiro[l][c] != ' ') {
            printf("Posição inválida ou já ocupada. Tente novamente: ");
            scanf("%d %d", &l, &c);
        }

        if (turnos % 2 == 0) {
            tabuleiro[l][c] = 'X';
        } else {
            tabuleiro[l][c] = 'O';
        }

        imprimeTabuleiro();
        vencedor = ganhou();
        turnos++;
    }

    if (vencedor == 1) {
        printf("Jogador 1 venceu!\n");
    } else if (vencedor == 2) {
        printf("Jogador 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }
}

void jogadorComputador() {
    int vencedor = 0;
    int turnos = 0;
    srand(time(NULL));

    while (turnos < 9 && vencedor == 0) {
        int l, c;

        if (turnos % 2 == 0) {
            printf("Jogador (X): Escolha a posição (linha coluna): ");
            scanf("%d %d", &l, &c);

            while (l < 0 || l > 2 || c < 0 || c > 2 || tabuleiro[l][c] != ' ') {
                printf("Posição inválida ou já ocupada. Tente novamente: ");
                scanf("%d %d", &l, &c);
            }

            tabuleiro[l][c] = 'X';
        } else {
            do {
                l = rand() % 3;
                c = rand() % 3;
            } while (tabuleiro[l][c] != ' ');

            printf("Computador (O) jogou em: %d %d\n", l, c);
            tabuleiro[l][c] = 'O';
        }

        imprimeTabuleiro();
        vencedor = ganhou();
        turnos++;
    }

    if (vencedor == 1) {
        printf("Você venceu!\n");
    } else if (vencedor == 2) {
        printf("O computador venceu!\n");
    } else {
        printf("Empate!\n");
    }
}
