#include <stdio.h>

    int main(){

        int senha;

            printf("Me fale a senha e direi se ela é válida.\n");
            scanf("%i", &senha);

            if (senha == 1234){
                printf("Senha válida, parabéns\n");
            } else {
                printf("Senha inválida ;( \n");
            }


        /*Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha
válida é o número 1234. Devem ser impressas as seguintes mensagens:
ACESSO PERMITIDO caso a senha seja válida.
ACESSO NEGADO caso a senha seja inválida.*/
    }