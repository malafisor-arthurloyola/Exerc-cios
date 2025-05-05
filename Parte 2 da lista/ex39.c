#include <stdio.h>

    int main(){

        int n1, n2, n3;
        printf("Me diga o tamanho dos lados de seu triângulo\n");
        scanf("%d %d %d", &n1, &n2, &n3);

        if ((n1 + n2 > n3) && (n1 + n3 > n2) && (n2 + n3> n1)){
           
            printf("Seu triângulo é válido\n");

        } else {
            
            printf("Seu triângulo é inválido\n");
        }}



/*Ler três valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se
formam ou não um triângulo. Observação: para formar um triângulo, o valor de cada lado deve ser
menor que a soma dos outros dois lados.*/