#include <stdio.h>

    int main(){

        int n;
        float s, d, c, sa;

        printf("Me diga o numero de sua conta, saldo, debito e credito, respectivamente");
        scanf ("%d %f %f %f", &n, &s, &d, &c);

        sa = (s - d + c);
        printf("seu saldo é de R$ %.2f\n", sa);

        if (sa>0)
        {
            printf("Seu saldo atual é positivo\n");
        } else {

            printf ("Seu saldo atual é negativo\n");
    }
        
    }

        /*Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito. Após, calcular e
escrever o saldo atual (saldo atual = saldo - débito + crédito). Também testar se saldo atual for maior
ou igual a zero escrever a mensagem “Saldo Positivo”, senão escrever a mensagem “Saldo Negativo”.*/

    