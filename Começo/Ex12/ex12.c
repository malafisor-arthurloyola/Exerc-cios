#include <stdio.h>
int main(){

    float s, pr, sajus;

    printf("Me informe seu sálario atual e o porcentual de reajuste(apenas o numero)");
    scanf("%f %f", &s, &pr);

    sajus = s + (s * (pr/100));
    printf("Seu sálario ajustado é %.2f", sajus);

    //Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
    //Calcular e escrever o valor do novo salário.
}