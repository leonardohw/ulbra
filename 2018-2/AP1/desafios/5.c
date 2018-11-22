#include <stdio.h>

int main(){

    int dia, mes, ano;

        do{ 

            do{
                printf("Acesso data restrito! \n");
                printf("Digite o mes: ");
                scanf("%d", &mes);
            }while (mes>=12);

            do{
                printf("Digite o dia: ");
                scanf("%d", &dia);
                if (dia>31){
                    printf("Digite um dia valido! \n");
                }
                if ((mes==2) && (dia==30) && (dia==31)){
                   printf("O mes de feveiro tem apenas 29 dias! \n");
                }
                
            }while(dia>31);

            printf("Digite o ano: ");
            scanf("%d", ano);

            if ((dia==18) && (mes==3) && (ano==2018)){

                printf("Data valida! \n");
            }else {
                printf("Data invalida! \n");
            }

        }while((dia!=18) && (mes!=3) && (ano!=2018));

}