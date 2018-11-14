#include <stdio.h>

int main(){

    int idade, contadorF = 0, contadorM = 0, i;
    char sexo;
    float percentualF, percentualM;

    for(i = 1; i <=5; i++){

        printf("Digite a idade do aluno: ");
        scanf(" %d", &idade);
        getchar();

    do {

        printf("Digite o sexo do aluno: (F- FEMININO, M- MASCULINO) ");
        scanf(" %c", &sexo);

        if (sexo=='F') {
            contadorF++;
        }

        if (sexo=='M') {
            contadorM++;
        }

    }while((sexo!='F') && (sexo!='M'));

        percentualF= (contadorF * 100)/5;
        percentualM = (contadorM * 100)/5;
    }

    printf("Media de alunos femininos: %f %%", percentualF);
    printf("Media de alunos masculinos: %f %%", percentualM);

}