#include <stdio.h>

    int main(){

        float n1, n2;
        float media;

        printf("Me diga a nota de sua primeira e segunda prova desse semestre");
        scanf("%f %f", &n1, &n2);

        media=(n1+n2)/2;

        if (media >= 6) {
            printf("Você foi aprovado");
        } else {
            printf("Você ainda não foi aprovado");
        }
        /*Escreva um programa para ler as notas das duas avaliações de um aluno no semestre, calcular e
escrever a média semestral e a seguinte mensagem: PARABÉNS! Você foi aprovado! somente se
o aluno foi aprovado (considere 6.0 a média mínima para aprovação).*/
        return 0;
    }