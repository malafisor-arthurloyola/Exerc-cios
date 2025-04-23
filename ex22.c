#include <stdio.h>
#include <locale.h>

    int main(){

        setlocale(LC_ALL, "1252");

        int v;
        
        printf("Coloque um número:\n");
        scanf("%d", &v);


        if (v > 10) {
            printf("O número %d é maior que 10.\n", v);
          } else {
            printf("O número %d não é maior que 10.\n", v);
          }
        
          return 0;
    }