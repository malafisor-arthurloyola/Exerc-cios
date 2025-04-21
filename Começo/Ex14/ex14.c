#include <stdio.h>

int main(){

    int c;
    float s, v, cven, sl;

    printf("Qnts carros vc vendeu?");
    scanf("%i", &c);

    printf("Qual o valor total de suas vendas?");
    scanf("%f", &v);

    printf("Qual seu sálario fixo?");
    scanf("%f", &s);

    printf("Qual a sua comissão por carro?");
    scanf("%f", &cven);

    sl = (s + (cven * c) + 0.05 * v);
    printf("Voce ira receber:\nR$:%.2f\n", sl);

    /*Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele
efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas
vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do
vendedor.*/

}