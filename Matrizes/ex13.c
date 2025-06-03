#include <stdio.h>

    int main(){

        int matriz [4][4];

        printf("Ola, vc me dirá valores de uma matriz 4x4, serao aceitos apenas valores do intervalo de[1, 20].\n");
        //registro da matriz original
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                do
                {
                    printf("Digite o elemento [%i][%i]: ", i+1, j+1);
                    scanf("%i", &matriz[i][j]);
                } while (matriz[i][j]<1 || matriz[i][j]>20);
                
                
            }
            
        }
        //imprimindo a matriz og
        printf("O antes\n");
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%i\t", matriz[i][j]);
            
            }
            printf("\n");
        }
        //Transformando a matriz com base no requisitado
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if(i<j){
                    matriz[i][j]=0;
                }
            }
            
        }
        //Imprimindo a transformada
        printf("O depois 0-0\n");
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("%i\t", matriz[i][j]);
            
            }
            printf("\n");
        }
        
    }

    /*Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme
a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal.
Imprima a matriz original e a matriz transformada.
*/

