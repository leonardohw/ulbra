#include <stdio.h>

int main(){

   int senha;

   printf("Digite a senha correta: ");
   scanf(" %d", &senha);

   while(senha != 2016) {
    printf("Senha inválida!\n");
    printf("Tente novamente: ");
    scanf(" %d", &senha);
   }

   printf("Acesso permitido!\n");
}