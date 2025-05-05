#include <stdio.h>

int main() {
    int n1, n2, n3, m;

    printf("Me fale três valores: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("Ok, o maior número entre esses é:\n");

    if (n1 > n2) {
        if (n1 > n3) {
            m = n1;
        } else {
            m = n3;
        }
    } else {
        if (n2 > n3) {
            m = n2;
        } else {
            m = n3;
        }
    }

    printf("%d\n", m);

    return 0;
}




/*Ler três valores (considere que não serão informados valores iguais) e escrever o maior deles.*/



