#include <stdio.h>

    int main(){

        int n1, n2, n3, maior, medio, menor;

            printf("Me diga três valores\n");
            scanf("%i %i %i", &n1, &n2, &n3);

            if (n1 > n2 && n1 > n3){
                
                maior = n1;
                if(n2 > n3) {

                    medio = n2;
                    menor = n3;

                } else {

                    medio = n3;
                    menor = n2;
                }
            } else if (n2 > n1 && n2 > n3){
                    
                maior = n2;
                if(n1 > n3){

                    medio = n1;
                    menor = n3;

                } else {

                    medio = n3;
                    menor = n1;
                }
            } else {

                maior = n3;
                if(n1 > n2){

                    medio = n1;
                    menor = n2;

                } else {

                    medio = n2;
                    menor = n1;
                }
            }
                printf("Em ordem crescente é %i, %i, %i\n", menor, medio, maior);
                return 0;
        }
        /*Ler três valores (considere que não serão informados valores iguais) e escrevê-los em ordem
crescente.*/

