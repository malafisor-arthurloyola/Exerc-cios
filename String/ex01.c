#include <stdio.h>
#include <string.h>

int main(){

    char palavra[100];

    printf("Ola, me diga uma palavra e farei com que a primeira letra seja maiuscula");
    fgets(palavra, sizeof(palavra), stdin);

    //removendo o \n
    palavra[strcspn(palavra, "\n")] = '\0';

    for(int i=0; palavra[i] != '\0'; i++){
        if (i==0 || palavra[i-1] == ' '){
            if(palavra[i]>='a' && palavra[i] <= 'z') {
                palavra[i] = (palavra[i] -32);
            }
        }
    }

    printf("%s\n", palavra);
    return 0;
}

//Maiúscula no começo das palavras