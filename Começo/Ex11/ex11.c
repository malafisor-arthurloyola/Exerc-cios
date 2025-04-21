#include <stdio.h>
int main(){

    int te, b, n, v;
    float pb, pn, pv;

    printf("Oie, qual o total de numero de eleitores em seu municipio?");
    scanf("%i", &te);

    printf("E qts brancos, nulos e válidos?");
    scanf("%i" "%i" "%i", &b, &n, &v);
    
    pb = (((float)b/te)*100);
    pn = (((float)n/te)*100);
    pv = (((float)v/te)*100);

    printf("A porcentagem de votos brancos, nulos e validos, respectivamente sao:\n");
    printf("%.2f%%, %.2f%%, %.2f%%\n", pb, pn, pv);
    return 0;


    //Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
    //brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total
    //de eleitores.

}