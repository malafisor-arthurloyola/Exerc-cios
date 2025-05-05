#include <stdio.h>

    int main(){

        float n1, n2, no;
        char optativa;
        float media;

        printf("Me diga a nota de suas duas avaliações:\n");
        scanf("%f %f", &n1, &n2);

        printf("Você fez a optativa? (s) para sim e (n) para não\n");
        scanf(" %c", &optativa);

        if(optativa == 's'){

            printf("Qual sua nota da optativa?\n");
            scanf("%f", &no);

    int menor;
            
            menor = n1;
            if(menor > n2) {
            menor = n2;
            }

            media = ((n1 + n2 + no) - menor)/2;

            printf("%.2f", media);

        } else {

            media = (n1 +n2)/2;
            printf("%.2f", media);
        }

        if (media >= 6.0) {
            printf("Aluno aprovado!\n");
            } else if (media >= 3.0) {
            printf("Aluno em exame.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        return 0;
    }