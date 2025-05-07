#include <stdio.h>

    int main(){

        int n;

        printf("n: ");
        scanf("%d", &n);
        while (n<1 || n>10){
            printf("\nValores entre 1 e 10.");
            printf("\nN: ");
            scanf("%d", &n);
        }
        
        for (int i=1; i <=10; i++){
            printf("%d * %d =%d\n", n, i, n*i);
        }
    }
    /*Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor
lido*/