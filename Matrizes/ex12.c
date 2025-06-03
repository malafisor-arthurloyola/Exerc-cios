#include <stdio.h>

    int matriz[3][3];
    int transposta[3][3];
    int main(){

        printf("Ola, vc me dira uma matriz 3x3 e direi a sua transposta\n");

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
                    transposta[j][i]=matriz[i][j];
                }
            
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%i\t", transposta[i][j]);
            }
            printf("\n");
        }
        return 0;
    }

    /*Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.*/