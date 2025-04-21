#include <stdio.h>

int main(){
    int anos, meses, dias, dias_totais;

    printf("Quantos anos tu tem?");
    scanf("%d", &anos);

    printf("Quantos meses?");
    scanf("%d", &meses);

    printf("Quantos dias?");
    scanf("%d", &dias);

    dias_totais = (anos*365) + (meses*30) + dias;
    printf("Ahh, entao voce tem %d dias.\n", dias_totais);


}