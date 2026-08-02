/* Problema do Livro Como Programar em C, 2a Edição, Deitel & Deitel, Capítulo 2, 
   Exercício 2.16 
   Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário
   e imprima a soma, o produto, o quociente e o resto da divisão dos dois números. 
*/

#include <stdio.h>

   void main(){

      int num1;
      int num2;
      float soma, mult, quoc, rest;

      printf("Digite o Primeiro número. \n");
      scanf("%i", &num1);

      printf("Digite o Segundo número. \n");
      scanf("%i", &num2);

      soma = num1 + num2;
      mult = num1 * num2;
      quoc = num1 / num2;
      rest = num1 % num2;

      printf("A soma é -> %0.2f \nA multiplicação é -> %0.2f \nO Quociente é -> %0.2f \nO Resto é -> %0.2f", soma, mult, quoc, rest);

   }