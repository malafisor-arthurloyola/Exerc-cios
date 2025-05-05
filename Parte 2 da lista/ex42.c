#include <stdio.h>

int main() {
    char tipo_combustivel;
    float litros, valor_total, desconto;

    float preco_alcool = 2.90;
    float preco_gasolina = 3.30;

    printf("Digite o tipo de combustivel (A - Alcool, G - Gasolina): ");
    scanf(" %c", &tipo_combustivel); // O espaço antes do %c é para limpar o buffer
    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    if (tipo_combustivel == 'A' || tipo_combustivel == 'a') {
        // Álcool
        if (litros <= 20) {
            desconto = 0.03 * preco_alcool; // 3% de desconto por litro
        } else {
            desconto = 0.05 * preco_alcool; // 5% de desconto por litro
        }
        valor_total = litros * (preco_alcool - desconto); // Valor total com desconto
    } 
    else if (tipo_combustivel == 'G' || tipo_combustivel == 'g') {
        // Gasolina
        if (litros <= 20) {
            desconto = 0.04 * preco_gasolina; // 4% de desconto por litro
        } else {
            desconto = 0.06 * preco_gasolina; // 6% de desconto por litro
        }
        valor_total = litros * (preco_gasolina - desconto); // Valor total com desconto
    } 
    else {
        printf("Tipo de combustivel invalido!\n");
        return 1; // Código de erro
    }

    // Exibindo o valor a ser pago
    printf("O valor a ser pago eh: R$ %.2f\n", valor_total);

    return 0;
}
