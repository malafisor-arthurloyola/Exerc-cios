#include <stdio.h> // Para usar printf na main para testes

// ---
// Função para calcular o MDC de dois números inteiros usando o Algoritmo de Euclides
// Parâmetros:
//   a: O primeiro número inteiro
//   b: O segundo número inteiro
// Retorna: O Máximo Divisor Comum de 'a' e 'b'
// ---
int calcularMDC(int a, int b) {
    // Garantir que os números são positivos para o algoritmo funcionar corretamente.
    // O MDC de um número e 0 é o próprio número, mas para o loop, evitamos 0 inicialmente.
    // Podemos pegar o valor absoluto se quisermos lidar com números negativos de entrada.
    // Para simplificar, vamos assumir entradas positivas para o algoritmo básico.
    // Se a entrada for 0, o MDC será o outro número (MDC(X, 0) = X).

    // O algoritmo de Euclides funciona repetidamente substituindo o maior número pelo resto da divisão.
    // Ele para quando o resto é 0. O MDC é o divisor nesse ponto.

    int resto; // Variável para armazenar o resto da divisão

    // Loop continua enquanto 'b' não for zero
    while (b != 0) {
        resto = a % b; // Calcula o resto da divisão de 'a' por 'b' (ex: 18 % 12 = 6)
        a = b;         // Atualiza 'a' para ser o antigo 'b' (ex: a agora é 12)
        b = resto;     // Atualiza 'b' para ser o resto (ex: b agora é 6)
        // O processo se repete com os novos 'a' e 'b'
    }

    // Quando 'b' se torna 0, o valor atual de 'a' é o MDC
    return a;
}

// ---

// Exemplo de como usar a função na sua main() para testar:
int main() {
    int num1, num2;

    printf("--- Calculadora de MDC (Método de Euclides) ---\n");

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // É uma boa prática lidar com casos onde os números podem ser negativos
    // ou onde um dos números é zero.
    // O MDC é geralmente definido para números não negativos.
    // Podemos usar abs() de <stdlib.h> para pegar o valor absoluto.
    // Por exemplo: int mdc_resultado = calcularMDC(abs(num1), abs(num2));

    // Para o nosso algoritmo simples, vamos assumir que o usuário digitará números inteiros.
    // MDC(X, 0) = X. Nosso loop já trata isso naturalmente se 'b' for 0.
    // Se ambos forem 0, o MDC é indefinido, ou às vezes considerado 0.
    if (num1 == 0 && num2 == 0) {
        printf("O MDC de 0 e 0 é indefinido ou 0, dependendo da convenção.\n");
    } else {
        int resultadoMDC = calcularMDC(num1, num2);
        printf("O MDC de %d e %d é: %d\n", num1, num2, resultadoMDC);
    }

    printf("\nAté a próxima! 👋\n");

    return 0;
}