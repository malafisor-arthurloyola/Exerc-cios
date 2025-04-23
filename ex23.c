#include <stdio.h>
#include <locale.h>

    int main(){

        setlocale(LC_ALL, "1252");

        int v;

            printf("Me diga um valor, e direi se ele é positivo ou negativo");
            scanf("%i", &v);

            if (v>=0) {
                printf("O número escolhido é positivo");
                
            } else {
                printf("O número escolhido é negativo");
            }
                    return 0;
            
            




        /*Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).*/
    }