#include <stdio.h>
#include <locale.h>

    int main(){

    float p1, p2, m;

    printf("Me diga respectivamente a nota da sua p1 e p2");
    scanf("%f %f", &p1, &p2);

            m = (p1 + p2)/2;

            if (m >= 6) {
                printf("Parabéns, você foi aprovado! ;)\n");
                printf("Sua média foi de %.2f\n", m);

            } else {
                printf("Infelizmente, você foi reprovado.\n");
                printf("Sua média foi de %.2f\n", m); 
            }
        return 0;
        


        /*Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever
uma mensagem que diga se o aluno foi ou não aprovado (considerar que média igual ou maior que 6.0
o aluno é aprovado). Escrever também a média calculada.*/
    }