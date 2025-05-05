#include <stdio.h>

    int main(){

        int cod;

        printf("Insira o numero do codigo aqui:\n");
        scanf("%i", &cod);

        switch (cod) {
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;
            case 10:
            printf("Centro - Oeste\n");
            break;
            case 11:
            printf("Noroeste\n");
            break;
        default:
            printf("Importado");
            break;
        }
    }