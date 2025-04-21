#include <stdio.h>
int main(){

    float cf, crcarro;

    printf("Quanto custa o custo de fábrica do seu carro?");
    scanf("%f", &cf);

    crcarro = (cf + (0.28 * cf) + (0.45 * cf));

    printf("O valor do seu carro, após a porcentagem do distribuidor e impostos é\n");
    printf("R$ %.2f\n", crcarro);

    return 0;




    /*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do
    distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor
    seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro,
    calcular e escrever o custo final ao consumidor. */


}