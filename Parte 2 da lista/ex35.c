#include <stdio.h>

    int main(){

        int n;

        printf("Me diga um núemro");
        scanf("%d", &n);

        if (n>0) {
            printf("Seu número é positivo\n");

        } else if (n==0) {
            printf("Seu numero é nulo\n");
        } else { 

        printf("Seu numero é negativo\n");

        return 0;
    }
        /*Ler um valor e escrever se é positivo, negativo ou zero.*/
    }