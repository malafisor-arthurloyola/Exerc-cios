#include <stdio.h>

    int main(){

        int e, emax, emin, emed;
        
        printf("Me diga a qnt de estoque atual, max de estoque e emin");
        scanf("%i %i %i", &e, &emax, &emin);

        emed = ((emax +emin)/2);

        if (e >= emed)
        {
            printf("Nao efetuar compra");
        } else {
            printf("Efetuar compra");
        }

        
        /*Faça um algoritmo para ler: quantidade atual em estoque, quantidade máxima em estoque e
quantidade mínima em estoque de um produto. Calcular e escrever a quantidade média ((quantidade
média = quantidade máxima + quantidade mínima)/2). Se a quantidade em estoque for maior ou igual
a quantidade média escrever a mensagem “Não efetuar compra”, senão escrever a mensagem “Efetuar
compra”.*/
        
    }