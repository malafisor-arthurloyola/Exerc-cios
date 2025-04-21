#include <stdio.h>

    int main(){

        float odi, odf, l, km, v, mc, lucro;

        printf("Eae, me fala o seu odometro no inicio do dia e no final, respectivamente em km:\n");
        scanf("%f %f", &odi, &odf);

        printf("Blz, agr me fala o qnts de litros que tu gastou e o valor total recebido pelos passageiros:\n");
        scanf("%f %f", &l, &v);

        km = (odf - odi);
        mc = (km/l);
        lucro = (v-(l * 2.9));
        printf("Ok!\n Sua media do consumo foi de %.2f Km/l e seu lucro líquido foi de %.2f", mc, lucro);

        /*Um motorista de táxi deseja calcular o rendimento de seu carro na praça. Sabendo-se que o preço
do combustível é de R$ 2.90, escreva um programa para ler: a marcação do odômetro (Km) no início
do dia, a marcação (Km) no final do dia, o número de litros de combustível gasto e o valor total (R$)
recebido dos passageiros. Calcular e escrever: a média do consumo em Km/L e o lucro (líquido) do
dia. */
        return 0;
    }