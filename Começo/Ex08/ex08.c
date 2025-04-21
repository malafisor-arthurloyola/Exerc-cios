#include <stdio.h>

int main(){
    float metros, centimetros;
    printf("Digite um algoritimo (apenas o numero) em metros para converte-lo em centimetros");
    scanf("%f", &metros);

    centimetros = (metros * 100);
    printf("O resultado é %.2f cm\n", centimetros);

    //Faça um algoritmo que converta metros para centimetros. Lembrando que 1m = 100cm.
    return 0;
}
