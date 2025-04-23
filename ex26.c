#include <stdio.h>
#include <locale.h>

    int main(){

        setlocale(LC_ALL, "1252");

        int n;

        printf("Quantos anos tu tem?");
        scanf("%d", &n);

            if (n > 16){
 
                printf("Você tem o direito de votar ;)");

            }
            else {

                printf("Você não tem o direito de votar >:( ");

            }
                return 0;


            /*Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela
poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu).*/

    }
