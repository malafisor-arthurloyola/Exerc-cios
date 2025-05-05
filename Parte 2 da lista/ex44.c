#include <stdio.h>

    int main(){

        int h1, h2, h_velho, h_novo;
        int m1, m2, m_velha, m_nova;
        int soma, produto;

        printf("Qual a idade do homem 1 e do homem 2?\n");
        scanf("%i %i", &h1, &h2);

        printf("Qual a idade da mulher 1 e da mulher 2?\n");
        scanf("%i %i", &m1, &m2);

        h_velho = h1;
        h_novo = h2;
        if (h_velho < h2)
        {
            h_velho = h2;
            h_novo = h1;
        }

        m_velha = m1;
        m_nova = m2;
        if (m_velha < m2)
        {
            m_velha = m2;
            m_nova = m1;
        }

        soma = h_velho + m_nova;
        produto = h_novo * m_velha;
        printf("A soma da idade do homem mais velho com a mulher mais nova é %i\n", soma);
        printf("O produto da idade do homem mais novo com a mulher mais velha é %i\n", produto);
        
        /*Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as idades
dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma
das idades do homem mais velho com a mulher mais nova, e o produto (multiplicação) das idades do
homem mais novo com a mulher mais velha.*/
    }