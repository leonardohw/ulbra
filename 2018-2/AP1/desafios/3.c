#include <stdio.h>

int main(){

    int idade, habitantes=0, maioridade=0, contadormulheres_salariosuperior=0;
    char genero, resposta;
    float salario, mediasalarial=0, salariototal=0;

    do{

        printf("Idade: ");
        scanf("%d", &idade);

            if (idade > maioridade) {
                maioridade = idade;
            }   
            getchar();

                do{
                    printf("Genero: M - MASCULINO / F - FEMININO: ");
                    scanf("%c", &genero);

                }while ((genero!='F') && (genero!='f') && (genero!='m') && (genero!='M'));
                getchar();

                
                        if((genero=='F') || (genero=='f') && (salario>5000)){

                            contadormulheres_salariosuperior++;
                        }


        printf("Salario: ");
        scanf("%f", &salario);

      
        salariototal = salariototal + salario;

        getchar();

            do{
                printf("Deseja registrar mais um habitante? S/N \n");
                scanf("%c", &resposta);
                getchar();

                    if((resposta!='s') && (resposta!='S') && (resposta!='n') && (resposta!='N')){
                        printf("Erro! S - SIM / N - NÃO \n");
                    }
            }while ((resposta!='s') && (resposta!='S') && (resposta!='n') && (resposta!='N'));

            habitantes++;

    }while ((resposta!='N') && (resposta!='n'));

    mediasalarial = salariototal/habitantes;

    printf("A media salarial do grupo é: %1.f \n", mediasalarial);
    printf("A maioridade do grupo é: %d \n", maioridade);
    printf("A quantidade de mulheres com salário superior a R$5000 é: %d \n",contadormulheres_salariosuperior);


}