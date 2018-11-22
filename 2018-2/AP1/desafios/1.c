#include <stdio.h>

int main(){

    int idade, tempo, qtd_disciplinas, professores=0, contadoridade=0, contadortempo=0, contadordisciplina=0;
    float percentual_idade, media_disciplina;
    char resposta;


    do {

    printf("Idade: ");
    scanf("%d", &idade);


    if (idade >= 30 && idade <=50) {
        contadoridade++;
    }

    printf("Tempo de servico na universidade: ");
    scanf("%d", &tempo);

    if (tempo > 10) {
        contadortempo++;
    }

    printf("Quantidade de disciplinas que ministra: ");
    scanf("%d", &qtd_disciplinas);

    contadordisciplina = contadordisciplina + qtd_disciplinas;

    getchar();

    printf("Deseja registrar outro professor? S/N \n");
    scanf("%c", &resposta);

    professores++;

    }while ((resposta != 'n') && (resposta != 'N'));

    percentual_idade = (contadoridade*100)/professores;
    media_disciplina = contadordisciplina/professores;

    printf("Percentual de professores com idade entre 30 e 50: %f \n",percentual_idade);
    printf("Quantidade de professores com mais de 10 anos de serviço: %d \n",contadortempo);
    printf("Media de disciplinas ministrada pelos professores: %f \n",media_disciplina);
    
}