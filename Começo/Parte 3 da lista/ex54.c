#include <stdio.h>

    int main(){

        int N;
        int Ni;

        N=0;

        printf("Me fale um número: ");
        scanf("%i", &Ni);

        while (Ni<1)
        {
            printf("Me fale um número maior que 0: ");
            scanf("%i", &Ni);
        }
        


        for (N = 1; N <= Ni; N++)
        {
            printf("%i\n", N);
        }

        
        /*Modifique o exercício anterior para aceitar somente valores maiores que 0 para N. Caso o valor
informado (para N) não seja maior que 0, deverá ser lido um novo valor para N.*/
    }