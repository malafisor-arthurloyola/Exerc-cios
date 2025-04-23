#include <stdio.h>
#include <locale.h>

    int main(){

        setlocale(LC_ALL, "1252");

        float n1, n2;

        printf("Me diga dois valores");
        scanf("%f %f", &n1, &n2);

        if (n1>n2)
        {
            printf("O maior valor é %.2f\n", n1);

        } else {

            printf("O maior valor é %.2f\n", n2);
        }
        
        return 0;

        /*Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.*/
    }