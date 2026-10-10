#include<stdio.h>
#include<stdlib.h>

/* Lendo varios caracteres do teclado

   */

int main(){
 
    int idade;
    float peso, altura;

    printf("\n\tDigite a sua idade, seu peso e altura\n");
    scanf("%d%f%f", &idade, &peso, &altura);
    printf("\n\tIdade -> %d \n\tPeso -> %.2f \n\tAltura -> %.2f", idade, peso, altura);


}