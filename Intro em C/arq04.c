#include <stdio.h>

void main() {

    int num1, num2;

    printf("******* Trabalhando com dois numeros ******** \n");

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 == num2) {
        printf("O Número %d e %d são iguais \n", num1, num2);
    }
    if(num1 != num2) {
        printf("O Número %d e %d não são iguais \n", num1, num2);
    }
    if(num1 < num2) {
        printf("O Número %d é menor %d \n", num1, num2);
    }
    if (num1 > num2){
        printf("O Número %d é maior que %d \n", num1, num2);   
    }
    if(num1 <= num2) {
        printf("O Número %d é menor ou igual ao %d \n", num1, num2);
    }
    if(num1 >= num2) {
        printf("O Número %d é maior ou igual ao %d \n", num1, num2);

    }
    //return 0;  /* Indica que o programa foi bem sucedido */

}

