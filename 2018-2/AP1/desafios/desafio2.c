#include <stdio.h>

int main(){

    int idade, maioridade=0, contadorF=0, contadorM=0, cont=0, contA=0;
    char sexo, resposta;
    float peso, altura, pesomedioM=0, percentualF=0, percentualM=0, pesoM=0;

    do{

        printf("idade: ");
        scanf("%d", &idade);

        if(idade > maioridade) {
            maioridade = idade;
        }

        printf("peso: ");
        scanf("%f", &peso );


        printf("altura: ");
        scanf("%f", &altura);
        getchar();


        do{
            printf("sexo (F) - Feminino / (M) - Masculino: \n");
            scanf("%c", &sexo);

        }while((sexo!='f') && (sexo!='F') && (sexo!='m') && (sexo!='M'));
        getchar();

         if((sexo=='F') || (sexo=='f')){
         contadorF++;
         pesoM = pesoM + peso;
         }

        if((sexo=='M') || (sexo=='m')){
        contadorM++;
        }

        if((sexo=='M') || (sexo=='m') && altura<1.70){
        contA++;
        }

    

       
        do{
        printf("Deseja registrar outro paciente? S/N \n");
        scanf("%c", &resposta);
        }while((resposta!='s') && (resposta!='S') &&(resposta!='n') && (resposta!='N'));

        cont++;

    }while((resposta!='n') && (resposta!='N'));
 
    percentualF = ((contadorF*100)/cont);
    percentualM = ((contadorM*100)/cont);
    pesomedioM = pesoM/contadorF;


    printf("maior idade: %d\n", idade);
    printf("percentual feminino: %f \n" ,percentualF);
    printf("percentual masculino: %f\n", percentualM);
    printf("homens c/ menos de 1.70m: %d \n", contA);
    printf("peso medio das mulheres: %f\n", pesomedioM);

}
