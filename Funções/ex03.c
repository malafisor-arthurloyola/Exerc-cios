#include <stdio.h>

// --- DECLARAÇÕES (PROTÓTIPOS) DAS FUNÇÕES ---
// Avisando o compilador que essas funções existem e como elas são.
int ehletra(char c);
int ehvogal(char c);
int ehconsoante(char c);
// --- FIM DAS DECLARAÇÕES ---

int ehletra(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}

int ehvogal(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return 1;
    } else {
        return 0;
    }
}

int ehconsoante(char c) {
    // Atenção: O erro que você recebeu foi para 'ehLetra' (com L maiúsculo), mas suas funções são 'ehletra' (com l minúsculo).
    // Vou usar os nomes com l minúsculo que você definiu nas funções.
    if (ehletra(c) == 1 && ehvogal(c) != 1) { // Usa ehletra e ehvogal (minúsculas)
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char verify;

    printf("Olá! Me fale um caractere e direi se ele eh letra, vogal ou consoante.\n");
    printf("Digite um caractere: ");
    scanf(" %c", &verify);

    printf("\nResultados para '%c':\n", verify);

    // As chamadas aqui precisam usar os nomes corretos das suas funções (ehletra, ehvogal, ehconsoante)
    if (ehletra(verify)) { // Chamando ehletra
        printf(" -> '%c' é uma LETRA. ✅\n", verify);
    } else {
        printf(" -> '%c' NÃO é uma letra. ❌\n", verify);
    }

    if (ehvogal(verify)) { // Chamando ehvogal
        printf(" -> '%c' é uma VOGAL. ✅\n", verify);
    } else {
        printf(" -> '%c' NÃO é uma vogal. ❌\n", verify);
    }

    if (ehconsoante(verify)) { // Chamando ehconsoante
        printf(" -> '%c' é uma CONSOANTE. ✅\n", verify);
    } else {
        printf(" -> '%c' NÃO é uma consoante. ❌\n", verify);
    }

    printf("\nObrigado por usar o testador! 👋\n");

    return 0;
}