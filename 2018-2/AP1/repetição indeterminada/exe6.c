#include <stdio.h>
#include <stdbool.h>

int main (){


    int cor;
    bool erro;

    do{


            printf("1 - Azul\n");
            printf("2 - Preto\n");
            printf("3 - Rosa\n");
            printf("4 - Vermelho\n");
            scanf("%d", &cor);


            switch(cor){
                    case 1:
                            printf("VOCÊ ESCOLHEU A COR AZUL!\n");
                            erro = false;
                    break;
                    case 2:
                            printf("VOCÊ ESCOLHEU A COR PRETA!\n");
                            erro = false;
                    break;
                    case 3:
                            printf("VOCÊ ESCOLHEU A COR ROSA!\n");
                            erro = false;
                    break;
                    case 4:
                            printf("VOCÊ ESCOLHEU A COR VERMELHA!\n");
                            erro = false;
                    break;
                    default:
                            printf("Por favor, digite um número valido.\n");
                            erro = true;
                    break;
            }


    }while(erro);
}
