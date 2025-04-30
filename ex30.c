#include <stdio.h>

int main() {
    int ht, he, sh;
    float st, sm;

    printf("Qnt q vc ganha por hora? ");
    scanf("%i", &sh);

    printf("Qnts horas vc trabalhou durante a semana, inclusive com horas extras? ");
    scanf("%i", &ht);

    if (ht > 40) {
        he = ht - 40;
        st = (40 * sh) + (1.5 * sh * he);
    } else {
        st = ht * sh;
    }

    sm = st * 4;
    printf("Seu salário mensal é de R$%.2f\n", sm);

    return 0;
}

    /*
A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais
de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva
o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas
(considere que o mês possua 4 semanas exatas).
*/