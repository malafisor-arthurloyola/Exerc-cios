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

        if (lado <= 3){
            printf("Não é um polígno");
        }

        if (lado >= 5){
            printf("Polígno não identificado");
        }
            return 0;
        /*Acrescente as seguintes mensagens à solução do exercício anterior conforme o caso.
- Caso o número de lados seja inferior a 3 escrever NÃO E’ UM POLÍGONO.
- Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.
Observação: Considere que o usuário poderá informar qualquer valor para o número de lados.*/

    }