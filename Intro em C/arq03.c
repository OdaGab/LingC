#include <stdio.h>

void main(){
    int a, b, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    soma = a + b;
    
    printf("O numero digitado foi: %d \n", a);
    printf("O segundo numero digitado foi: %d \n", b);
    printf("---------------------------------------------\n");
    printf("A soma dos numeros é: %d \n", soma);
}
