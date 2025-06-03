#include <stdio.h>

    int main(){

        int matriz[3][3];
        int soma=0;

        printf("Ola, vc me falará 9 elementos de uma matriz 3x3 e somarei aqueles q estão na diagonal principal\n");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("Matriz %ix%i\n", i+1, j+1);
                scanf("%i", &matriz[i][j]);
            }
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if(i==j){
                    
                    soma=matriz[i][j]+soma;

                }
            }
        }
        printf("A soma é:\n%i", soma);
        
        
    }

    /*Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao na diago- ˜
nal principal.*/