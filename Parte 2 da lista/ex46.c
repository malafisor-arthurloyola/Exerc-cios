#include <stdio.h>

    int main(){

        int codu, senha;

        printf("Insira seu código:\n");
        scanf("%i", &codu);

        if(codu == 1234) {
            printf("Código de usuário correto\n");
            printf("Agora insira a senha do usuário\n");
            scanf("%i", &senha);
            
            if(senha == 9999){
                printf("Senha correta, acesso permitido");

            } else {
                printf("Senha incorreta");
            }

        } else {
            printf("Código de usuário inválido");
        }
        


        /*Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja
diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser apresentada a
mensagem “Usuário inválido!”. Caso o Código seja correto, deve ser lido outro valor que é a senha. Se
esta senha estiver incorreta (a certa é 9999) deve ser mostrada a mensagem ‘senha incorreta’. Caso a
senha esteja correta, deve ser mostrada a mensagem “Acesso permitido”.*/
    }