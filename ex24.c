#include <stdio.h>
#include <locale.h>

    int main(){

    float m, c;

    printf("Quantas maças vc comprou?");
    scanf("%f", &m);

        if (m>=12)
        { 
            c = (m*1);
            printf("%.2f", c);
        } else {
            c = (m*1.3);
            printf("%.2f", c);
        }
        
        return 0;



        /*As maçãs custam R$ 1.30 cada se forem compradas menos de uma dúzia, e R$ 1.00 se forem
compradas pelo menos 12. Escreva um programa que leia o número de maçãs compradas, calcule e
escreva o custo total da compra.*/
    }