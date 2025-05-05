#include <stdio.h>
#include <locale.h>

    int main(){

        setlocale(LC_ALL, "1252");
        int hi, hf, ht;

        printf("Qual horário o jogo de xadrez começo?, (0 - 23)");
        scanf("%i", &hi);
        printf("Quando o jogo terminou?");
        scanf("%i", &hf);

        if (hf>hi) {
            ht = (hf - hi);
            printf("A duração do seu jogo foi de %ih.\n", ht);
        } else if (hf == hi) {
                printf("24h");
        } else {
            ht = (24 - hi) +hf;
            printf("A duração do seu jogo foi de %ih\n", ht);
    }
        /*
        29) Ler a hora de início e a hora de fim de um jogo de Xadrez (considere apenas horas inteiras, sem os
minutos) e calcule a duração do jogo em horas, sabendo-se que o tempo máximo de duração do jogo é
de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte.
        */
}
