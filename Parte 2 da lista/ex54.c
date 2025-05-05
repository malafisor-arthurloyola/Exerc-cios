#include <stdio.h>

    int main(){

        int lado, medida;
        int perimetro;

        printf("Qual o número de lado e a medida do lado de seu polígono regular");
        scanf("%i %i", &lado, &medida);

        if (lado == 3){

            perimetro = lado * medida;
            printf("Então seu polígono é um triângulo, e o perímetro é de %i", perimetro);
        } else if (lado == 4) {

            perimetro = lado * medida;
            printf("Então seu polígono é um quadrado, e o perímetro é de %i", perimetro);
        } else if (lado == 5) {

            perimetro = lado * medida;
            printf("Então seu polígono é um pentágono, e o perímetro é de %i", perimetro);
        }

            return 0;

        /*Escreva um programa para ler o número de lados de um polígono regular e a medida do lado (em
cm). Calcular e imprimir o seguinte:
- Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor do seu perímetro.
- Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
- Se o número de lados for igual a 5 escrever PENTÁGONO.
Observação: Considere que o usuário só informará os valores 3, 4 ou 5.*/
    }