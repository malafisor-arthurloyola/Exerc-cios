#include <stdio.h> 

int somaAteX(int x);

int main() {
    int numeroDigitado;
    int resultadoSoma; 

    printf("Olá! Me diga um número inteiro positivo e direi a soma de todos os inteiros positivos entre 1 e ele.\n");

    printf("Digite um número: ");
    scanf("%d", &numeroDigitado);

    // Validação básica para garantir que o número é positivo
    if (numeroDigitado <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; // Retorna um erro para indicar que algo deu errado
    }

    // 3. Chamada da função
    // Chama a função 'somaAteX' passando o 'numeroDigitado'
    // O valor que a função retornar será guardado em 'resultadoSoma'
    resultadoSoma = somaAteX(numeroDigitado);

    // 4. Exibir o resultado
    printf("A soma de todos os inteiros positivos entre 1 e %d é: %d\n", numeroDigitado, resultadoSoma);

    return 0; // Indica que o programa terminou com sucesso
}

// ---

// 5. Definição da função 'somaAteX'
// Esta função recebe um inteiro 'x' (o número limite para a soma)
int somaAteX(int x) {
    int somaAtual = 0; // Inicializa a variável que vai acumular a soma

    // Loop que vai de 1 até 'x' (inclusive)
    for (int i = 1; i <= x; i++) {
        somaAtual += i; // Adiciona o valor atual de 'i' à 'somaAtual'
    }

    return somaAtual; // Retorna o valor final da soma
}



    /*Escreva uma função que receba um número inteiro positivo x e 
    retorne a soma de todos os inteiros positivos entre 1 e x.*/