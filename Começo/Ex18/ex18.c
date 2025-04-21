#include <stdio.h>

    int main(){
    
        float l, c, w, wn;

    
        printf("Ola, para saber a qnt de lampadas necessarias para seu comodo basta digitar em sequencia:\n");
        printf("(a largura e comprimento e watts da lamapada q sera usada\n (nao esqueca de colocar em metros)");
        scanf("%f %f %f", &l, &c, &w);

        wn = ((l * c * 18) / w);
        printf("A qnt de lampadas necessarias é %0f", wn);



        /*Escreva um programa para calcular e imprimir o número de lâmpadas necessárias para iluminar
um determinado cômodo de uma residência. Dados de entrada: a potência da lâmpada utilizada (em
watts), as dimensões (largura e comprimento, em metros) do cômodo. Considere que a potência
necessária é de 18 watts por metro quadrado.*/
    }