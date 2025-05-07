#include <stdio.h>
//ex48

int main() {
    float L1, L2, L3;
    const char *Forma;

    printf("Me diga os três lados do triângulo:\n");
    scanf("%f %f %f", &L1, &L2, &L3);

    if (L1 == L2 && L2 == L3) {
        Forma = "Equilátero";
    } else if (L1 == L2 || L2 == L3 || L1 == L3) {
        Forma = "Isósceles";
    } else {
        Forma = "Escaleno";
    }

    printf("Seu triângulo é %s\n", Forma);

    return 0;
}

        /*Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é
Equilátero, Isósceles ou Escaleno. Sendo que:
- Triângulo Equilátero: possui os 3 lados iguais.
- Triângulo Isósceles: possui 2 lados iguais.
- Triângulo Escaleno: possui 3 lados diferentes.*/