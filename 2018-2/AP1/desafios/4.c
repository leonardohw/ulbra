#include <stdio.h>

int main(){

    int menu, ratos, coelhos, contadorratos=0, contadorcoelhos=0, i, totaldecobaias;
    float percebtualcoelhos, percebtualratos;

    for(i=0; i<=5; i++) {


        do{ 
            printf("SELECIONE: 1 - RATOS | 2 - COELHOS: ");
            scanf("%d", &menu);
        }while((menu!=1) && (menu!=2));

          switch(menu){

                        case 1:
                            printf("Digite a quantidade de ratos: ");
                            scanf("%d", &ratos);
                            contadorratos = contadorratos + ratos;
                        break;

                        case 2:
                            printf("Digite a quantidade de coelhos: ");
                            scanf("%d", &coelhos);
                            contadorcoelhos = contadorcoelhos + coelhos;
                        break;
                                  
                     }
   } 

   totaldecobaias = contadorcoelhos+contadorratos;
   percebtualcoelhos = (contadorcoelhos*100)/totaldecobaias;
   percebtualratos = (contadorratos*100)/totaldecobaias;

   printf("O total de cobaias  foram: %d \n",totaldecobaias);
   printf("O percentual de coelhos foram: %f \n",percebtualcoelhos);
   printf("O percentual de ratos foram: %f \n", percebtualratos );

}