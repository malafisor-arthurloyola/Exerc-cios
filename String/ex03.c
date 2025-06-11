#include <stdio.h>
#include <string.h>

int main() {
    char a[100];   // frase original
    char b[100];   // palavra a ser trocada
    char c[100];   // palavra que substituirá b
    char d[200];   // resultado final (frase com substituição)

    printf("Olá, me diga uma frase, uma palavra a ser trocada e o que será trocado.\n");

    printf("Primeira palavra (frase):\n");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';  // remove o '\n' do fgets

    printf("Palavra a trocar:\n");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';

    printf("Palavra que será usada na troca:\n");
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';

    int i = 0, j = 0;
    int tamA = strlen(a);
    int tamB = strlen(b);
    int tamC = strlen(c);

    while (i < tamA) { /*Imagina que você tem uma régua de 6 letras (tamanho da palavra b = "banana").
Você coloca essa régua sobre a frase e vai deslizando uma letra por vez. Cada vez que a régua cobre exatamente "banana", ele substitui.*/
        // compara se a partir de a[i] tem a palavra b
        if (strncmp(&a[i], b, tamB) == 0) {
            // copia c para d[j]
            strcpy(&d[j], c);
            j += tamC;
            i += tamB;
        } else {
            // copia caractere normal
            d[j++] = a[i++];
        }
    }

    d[j] = '\0';  // finaliza string

    printf("Resultado: %s\n", d);

    return 0;
}
