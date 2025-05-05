#include <stdio.h>

    int main(){
        
        float h, sexo;
        float peso_ideal;

        printf("Olá, aqui vc saberá seu peso ideal, primeiro me diga se você é biológicamente uma mulher (1) ou um homem (2)\n");
        scanf("%f", &sexo);
        printf("Ok, agora me diga, qual a sua altura?\n");
        scanf("%f", &h);

        if (sexo == 1){

            peso_ideal=(62.1 * h) - 44.7;
        } else {
            peso_ideal=(72.7 * h) - 58;
        }

        printf("Seu peso ideal é %.2f", peso_ideal);


        /*Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de
uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes
fórmulas:
- para homens : (72.7 * h) – 58
- para mulheres : (62.1 * h) – 44.7
Observação: Altura = h (na fórmula acima).*/
        return 0;
}