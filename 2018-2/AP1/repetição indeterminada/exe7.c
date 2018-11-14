#include <stdio.h>

main(){

    int numero, i = 0 , soma=0;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    while( i <= numero){
            soma = soma + i;
            i++;
    }

    printf("%d", soma);


}