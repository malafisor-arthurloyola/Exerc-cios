#include <stdio.h>
int main(){

    float sh, hm, s;
    
    printf("qnts vc ganha por hora?");
    scanf("%f", &sh);

    printf("qnt horas vc trabalha por mes?");
    scanf("%f", &hm);

    s = (sh * hm);
    printf("Seu sálario é R$:%2f\n", s);
    return 0;

    //Faça um algoritmo que pergunte quanto a pessoa ganha por hora (salário por hora) 
    //e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
}