#include <stdio.h>
int main (){
	int num;

	printf("Digite um n�mero: \n");
	scanf("%d", &num);

	while(num > 1) {
		num--;
		printf("%d\n", num);
	}

}