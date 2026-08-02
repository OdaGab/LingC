/*
   Problema do Livro Como Programar em C, 2a Edição, Deitel & Deitel, Capítulo 2,
   Exercício 2.18

   Escreva um programa em C que receba 3 números inteiros diferentes digitados no teclado e imprima a soma, a média, o produto, o menor.
*/
// imprima a soma, a média, o produto, o menor.
#include <stdio.h>

int main() {
    int a, b, c, soma, produto, menor, maior;
    float media;

    printf("Entre com tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    soma = a + b + c;
    media = (float) soma / 3;
    produto = a * b * c;

    menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }

    maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    printf("A soma eh %d\n", soma);
    printf("A media eh %.2f\n", media);
    printf("O produto eh %d\n", produto);
    printf("O menor eh %d\n", menor);
    printf("O maior eh %d\n", maior);

    return 0;
}
