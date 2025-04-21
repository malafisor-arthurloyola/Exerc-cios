#include <stdio.h>

    int main(){

        float cp, cpr, nv, nr, cc, dpr, mlr;

        printf("Ola membro do Redubull, me diga respectivamente o comprimento da pista (em metros)\nO numero de voltas, numero de reabastecimentos e o consumo de combustível do carro (em Km/L)");
        scanf("%f %f %f %f", &cp, &nv, &nr, &cc);

        cpr = (cp/1000);

        float vpr = nv / (nr + 1);

        dpr = (cpr * vpr);

        mlr = (dpr/(cc));
        printf("Entao, o número mínimo de litros necessários para percorrer até o primeiro reabastecimento é %.2fl", mlr);

        /*A equipe Red Bull Racing de Fórmula 1 deseja calcular o número mínimo de litros que deverá
colocar no tanque de seu carro para que ele possa percorrer um determinado número de voltas até o
primeiro reabastecimento. Escreva um programa que leia o comprimento da pista (em metros), o
número total de voltas a serem percorridas no grande prêmio, o número de reabastecimentos
desejados e o consumo de combustível do carro (em Km/L). Calcular e escrever o número mínimo de
litros necessários para percorrer até o primeiro reabastecimento. Observação: Considere que o
número de voltas entre os reabastecimentos é o mesmo.
        */

        return 0;
    }