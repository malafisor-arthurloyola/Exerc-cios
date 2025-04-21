#include <stdio.h>

    int main(){

        float l, c, a, ladol, ladoc, ca;

        printf("Fala a medida da largura, comprimento e altura da sua cozinha em sequência:\n");
        scanf("%f %f %f", &l, &c, &a);

        ladol = (l*a);
        ladoc = (c*a);
        ca = ((2*(ladol) + 2*(ladoc))/1.5);

        printf("Sua cozinha consegue comportar %.2f", ca);
    


        /*Escreva um programa para ler as dimensões de uma cozinha retangular (comprimento, largura e
altura), calcular e escrever a quantidade de caixas de azulejos para se colocar em todas as suas
paredes (considere que não será descontada a área ocupada por portas e janelas). Cada caixa de
azulejos possui 1.5 m2
        */
       return 0;
    
    }