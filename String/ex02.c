#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[100];
    char palavra2[100];
    char palavrao[200];  // espaço para a palavra intercalada

    printf("Olá, me diga duas palavras e intercalarei elas, formando uma palavra\n");

    printf("Primeira palavra:\n");
    fgets(palavra1, sizeof(palavra1), stdin);
    palavra1[strcspn(palavra1, "\n")] = '\0';  // remove o '\n' do fgets

    printf("Segunda palavra:\n");
    fgets(palavra2, sizeof(palavra2), stdin);
    palavra2[strcspn(palavra2, "\n")] = '\0';
    
    //Verificando o tamanho da palavra

    int len1 = strlen(palavra1);
    int len2 = strlen(palavra2);

    int i=0, j=0, k=0;

    while(i<len1 || j<len2){
        if(i < len1){
            palavrao[k++] = palavra1[i++];
        }
        if(j < len2){
            palavrao[k++] = palavra2[j++];
        }
    }
    palavrao[k] = '\0';
    // finalizar string */

    printf("Palavra intercalada: %s\n", palavrao);

    return 0;
}
