#include <stdio.h>

int main()  {

    int nvendas=0;
    float valormedio, vendamaior=0, valortotal=0, valor;
    char resposta;

    do {

        printf("Valor da venda: ");
        scanf("%f", &valor);

            if(vendamaior<valor){
                vendamaior = valor;
            }

            valortotal= valortotal + valor;

        getchar();

        printf("Outra venda? S/N \n");
        scanf("%c", &resposta);

        nvendas++;

    }while((resposta!='n') && (resposta!='N') && (nvendas!=200));

    valormedio= valortotal/nvendas;


    printf("Total de vendas: %1.d \n", nvendas);
    printf("Valor total de vendas: %1.f \n", valortotal);
    printf("Valor medio das vendas: %1.f \n", valormedio);
    printf("Venda de maior valor: %1.f \n", vendamaior);
}