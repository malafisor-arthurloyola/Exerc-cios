#include <stdio.h>

    int main(){

        float m, mo;
        float soma;
        float preco, precom, somadpreco, precof;

        printf("Quantos kg de maça comprastes?");
        scanf("%f", &m);

        printf("Quantos kg de morango comprastes?");
        scanf("%f", &mo);

        /**/

        if (mo > 5)
        {
            preco = (2.2 * mo);
        } else {
            preco = (2.5 * mo);
        }

        if (m > 5)
        {
            precom = (1.5 * m);
        } else {
            precom = (1.8 * m);
        }

        soma = m + mo;
        somadpreco = preco + precom;

        if (soma > 8 || somadpreco >= 25){
            precof = somadpreco * 0.9;
            printf("O valor a ser pago é de R$%.2f", precof);
        } else {
            printf("O valor a ser pago é de R$%.2f", somadpreco);
        }

        return 0;
    }