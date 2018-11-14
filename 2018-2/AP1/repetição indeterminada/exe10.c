#include <stdio.h>

int main(){

    int idade, contador=0;
    float altura, media, contadoraltura=0;
    char sn;

    do{

    printf("digite a idade do paciente: ");
    scanf(" %d", &idade);

    printf("digite a altura do paciente sem virgulas: ");
    scanf(" %f", &altura);


    printf("deseja registrar mais um paciente? (s/n) ");
    scanf(" %c", &sn);

    if (idade > 30) {
        contador++;
        contadoraltura = contadoraltura + altura;
    }

    }while (sn == 's');

    if(contador >= 1) {
        media = contadoraltura / contador; 
        printf("media de altura das pessoas com mais de 30 anos: %2.f", media);
    }


}