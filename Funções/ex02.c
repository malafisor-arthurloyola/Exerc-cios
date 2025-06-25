#include <stdio.h>
    int tptri(int x, int y, int z);

    int main(){

        int triangulo;
        int x, y, z;
    
        printf("Me diga três valores e direi o tipo de seu triângulo");
        scanf("%i %i %i", &x, &y, &z);

        triangulo=tptri(x, y, z);

        if(triangulo==0){
            printf("Triangulo inválido");
        } else if(triangulo==1){
            printf("Triangulo Equilatero");
        } else if(triangulo==2){
            printf("Triangulo Isocels");
        } else if(triangulo==3){
            printf("Triangulo Escaleno");
        }
    }

    int tptri(int x, int y , int z) {
    
    int tipo;

        if (x <= 0 || y <= 0 || z <= 0 || (x + y <= z) || (x + z <= y) || (y + z <= x)) {
            tipo=0;
        return tipo;
    }
        if (x==y && y==z)
        {
            tipo=1;
        } else if (x==y || x==z || y==z)
        {
            tipo=2;
        } else{
            tipo=3;
        }
        return tipo;
        
    }

    /*Escreva uma função que receba três valores inteiros e retorne 0
    se esses não forma um triângulo, 1 se o triângulo é equilátero,
    2 se é isósceles e 3 se é escaleno.*/