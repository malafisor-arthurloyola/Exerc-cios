#include <stdio.h>

    int main(){

        int n1, n2, n3, menor, soma;

        printf("Me diga três números e somarei os três maiores");
        scanf("%d %d %d", &n1, &n2, &n3);

        menor = n1;

        if (n2 < menor) {

            n2 = menor;
        } 
        if (n3 < menor) {

            n3 = menor;
        } soma = (n1 + n2 +n3) - menor;

        printf("A soma dos dois maiores números é %d\n", soma);



        /*Ler três valores (considere que não serão informados valores iguais) e escrever a soma dos dois
maiores.*/
    }