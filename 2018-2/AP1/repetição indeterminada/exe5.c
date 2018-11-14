#include <stdio.h>
int main(){

	int contador = 0;
	float salario, media, soma;
	char sn;

	do{
		printf("Salario do funcionario: ");
		scanf(" %f", &salario);

		printf("Deseja continuar?  (s/n) \n");
		scanf(" %c", &sn);

		soma = soma + salario;
		contador++;

	}while(sn == 's');

	media = soma / contador;

	printf("Media Salarial: %f", media);
}
