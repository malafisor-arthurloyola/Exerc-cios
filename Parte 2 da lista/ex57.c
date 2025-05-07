#include <stdio.h>

/*Escreva um programa para ler três valores e escrevê-los em ordem decrescente. Considere que o
usuário não informará valores iguais.*/

    int main(){
        
        float n1, n2, n3;
        float maior, medio, menor;

        printf("Me diga três valores e informarei-os em ordem decrescente\n");
        scanf("%f %f %f", &n1, &n2, &n3);

        if(n1 > n2 && n1>n3){
            maior = n1;
            if (n2 >n3){
                medio = n2;
                menor = n3;
            } else {
                menor = n2;
                medio = n3;
            }
        } else if (n2> n1 && n2> n3) {
            maior = n2;
            if (n1 >n3){
                medio = n1;
                menor = n3;
            } else {
                menor = n1;
                medio = n3;
            }
        } else {
            maior = n3;
            if (n1 >n2){
                medio = n1;
                menor = n2;
            } else {
                menor = n1;
                medio = n2;
            }
        }
        printf("%.2f, %.2f e %.2f", maior, medio, menor);
    }