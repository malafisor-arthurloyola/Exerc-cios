#include <stdio.h>

    int main(){

        int soma=0;

        int A[6]= {1, 0, 5, -2, -5, 7};
        soma=A[0] + A[1] + A[5];

        printf("A soma de A[0] (%d), A[1] (%d) e A[5] (%d) e: %d\n", A[0], A[1], A[5], soma);

        A[3]=100;
        printf("O valor de A[3] (originalmente 'posicao 4') foi alterado para: %d\n", A[3]);

        for ( int i = 0; i < 6; i++)
        {
            printf("A[%i] = %i\n", i, A[i]);
        }
        return 0;
    }
        


        /*Faca um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicões
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/
    