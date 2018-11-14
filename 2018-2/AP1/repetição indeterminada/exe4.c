#include <stdio.h>
int main(){

	int num1, num2;
	float resu;

	do{
		printf("Digite um numero positivo: \n");
		scanf(" %d", &num1);
	}while(num1<0);

	do{
		printf("Digite um numero menor que o primeiro: \n");
		scanf("%d", &num2);
	}while(num1 < num2);

	resu = num1/num2;

	printf("A divisão dos dois numeros é %1.f \n", resu);
}
