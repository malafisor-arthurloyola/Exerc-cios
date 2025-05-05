#include <stdio.h>

    int main(){

        int n;

        printf("Me diga um número inteiro positivo, e saberá se ele é par ou ímpar");
        scanf("%i", &n);

        if (n %2 == 0){
            printf("O número escolhido é par\n");
        } else {
            printf("O número escolhido é ímpar\n");
        }

        return 0;
        /*Escreva um programa para ler um número inteiro (considere que serão lidos apenas valores
positivos e inteiros) e escrever se é par ou ímpar.*/

    }