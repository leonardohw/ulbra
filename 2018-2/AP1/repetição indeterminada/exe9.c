#include <stdio.h>

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);


    while(num > 1){
            num = num/2;
            printf("%d\n", num);
    }


}