#include <stdio.h>
#include <locale.h>

    int main(){

        setlocale(LC_ALL, "1252");
        float n1, n2;

        printf("Me dia dois valores e irei escreve-los em ordem crescente");
        scanf("%f %f", &n1, &n2);

        if (n1>n2)
        { printf("%.2f , %.2f", n2, n1);
            /* code */
        } else {
            printf("%.2f , %.2f", n1, n2);
        }
        
        return 0;
        /*Ler dois valores (considere que não serão lidos valores iguais) e escrevê-los em ordem crescente.*/

    }