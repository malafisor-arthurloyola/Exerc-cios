#include <stdio.h>

    int main(){

        float n1, n2;
        float media;

        printf("Me diga a nota de sua primeira e segunda prova desse semestre\n");
        scanf("%f %f", &n1, &n2);

        media=(n1+n2)/2;

        if (media >= 6) {
            printf("Você foi aprovado\n");
        } else {
            printf("Você foi REPROVADO! Estude mais...\n");
        }
        /*Escreva um programa para ler as notas das duas avaliações de um aluno no semestre, calcular e
escrever a média semestral e a seguinte mensagem: PARABÉNS! Você foi aprovado! somente se
o aluno foi aprovado (considere 6.0 a média mínima para aprovação).*/
        return 0;

        /*Acrescente ao exercício anterior a mensagem Você foi REPROVADO! Estude mais... caso a
média calculada seja menor que 6.0.*/
    }