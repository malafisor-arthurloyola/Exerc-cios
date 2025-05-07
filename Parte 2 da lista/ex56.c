#include <stdio.h>

    int main(){

        float n1, n2, resultado;
        int operacao;

        printf("Qual operacao vc deseja efetuar?\n");
        printf("Soma (1), Subtracao (2), Divisao (3) ou Multiplicacao (4) \n");

        scanf("%i", &operacao);

        if (operacao == 1){
            printf("Me fale dois numeros em que você deseja efetuar a adição:\n");
            scanf("%f %f",  &n1, &n2);

            resultado = (n1 + n2);
            printf("Seu resultado é %.2f", resultado);
        } else if(operacao == 2){
            printf("Me fale dois numeros em que você deseja efetuar a subtração:\n");
            scanf("%f %f",  &n1, &n2);

            resultado = (n1 - n2);
            printf("Seu resultado é %.2f", resultado);
        } else if(operacao == 3){
            printf("Me fale dois numeros em que você deseja efetuar a divisão:\n");
            scanf("%f %f",  &n1, &n2);

            resultado = (n1 / n2);
            printf("Seu resultado é %.2f", resultado);
        } else {
            printf("Me fale dois numeros em que você deseja efetuar a multiplicação:\n");
            scanf("%f %f",  &n1, &n2);

            resultado = (n1 * n2);
            printf("Seu resultado é %.2f", resultado);
        }
        return 0;
        
    }
        /*Escreva um programa para ler dois valores inteiros e uma das seguintes operações a serem
executadas (codificada da seguinte forma: 1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação).
Calcular e escrever o resultado dessa operação sobre os dois valores lidos. Observação: Considere
que só serão lidos os valores 1, 2, 3 ou 4.*/