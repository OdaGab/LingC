/*
   Problema do Livro Como Programar em C, 2a Edição, Deitel & Deitel, Capítulo 2, 
   Exercício 2.17

   Escreva um programa que imprima o número 1 ao 4 na mesma linha escreva o programa seguindo os seguintes métodos. 
   a) Usando uma instrução printf sem especificadores de conversão.
   b) Usando uma instrução printf com identificadores de conversão.
   C) Usando quatro instruções printf
*/

#include <stdio.h>

void main(){
  
    // Sem especificadores de conversão.
    printf("1, 2, 3, 4 \n");

    // Com identificadores de conversão.
    printf("%i, %i, %i, %i", 1,2,3,4);

    printf("\n1, ");
    printf("2, ");
    printf("3, ");
    printf("4");
}