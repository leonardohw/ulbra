#include <stdio.h>

int main(){

    int menu;
    float debito, credito, creditocontador=0, debitocontador=0;

    do {

        printf(" (1) Debito | (2) Credito | (0) Finalizar \n");
        scanf("%d", &menu);

        if (menu!=1 && menu!=2 && menu!=0) {
            printf("ERRO!\n");
        }
        
            switch(menu){

                case 1:
                    printf("Digite o valor: ");
                    scanf("%f", &debito);
                    debitocontador = debitocontador + debito;
                break;

                case 2:
                    printf("Digite o valor: ");
                    scanf("%f", &credito);
                    creditocontador = creditocontador + credito;
                break;
                          
             }
             
    }while (menu!=0);

    printf("Total credito: %1.f reais \n", creditocontador);
    printf("Total debito: %1.f reais \n", debitocontador);


}