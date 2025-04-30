#include <stdio.h>

    int main(){

        float sf, v, vu, st;

        printf("Qual seu sálario fixo e qual o valor total de suas vendas\n");
        scanf("%f %f", &sf, &v);

        if (v > 1500)
        {
            vu = (v - 1500);
            st = (sf + (1500 * 0.03) + (vu * 0.05));

        } else {

            st = sf +(v *0.03);

        }

        printf("O seu sálario é de R$%.2f\n", st);

        /*Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que
ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00, mais 5% sobre o que
ultrapassar este valor, calcular e escrever o seu salário total.*/





        
    }