#include <stdio.h>
int main(){
    float lado, area;

    printf("Informe o lado do quadrado");
    scanf("%f", &lado);
    
    area = (2*(lado * lado));
    printf("O dobro da area do quadrado é %2f\n", area);
    return 0;
}