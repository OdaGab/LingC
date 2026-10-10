#include<stdio.h>
#include<stdlib.h>

/* fazendo calculos com números reais*/

int main(){

    float num1;   // mais utilizado para reais Ex. Dinheiro, altura, peso, etc
    double num2;  // Valores com mais casas decimais. 
    float soma;

    printf("\tTrabalhando com numeros REAIS. \n\n");

    printf("\tDigite primeiro numero real. \n");
    scanf("%f", &num1);

    printf("\tDigite o segundo numero real. \n");
    scanf("%f", &num2);

    // criando a formula
  
    soma = num1 + num2;

    printf("\tA soma dos dois numeros digitado -> %.2f", soma);

}