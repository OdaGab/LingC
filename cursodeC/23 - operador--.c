#include<stdio.h>
#include<stdlib.h>

int main(){

    int y, x = 35; // x começa com 35

    // Pós-decremento: x-- usa o valor atual de x e depois decrementa.
    // Primeiro y recebe 35, depois x passa a valer 34.
    y = x--;
    printf("\n\tValor de y, -> %d\n", y);
    printf("\n\tValor de x depois de x--, -> %d\n", x);

    // Pré-decremento: --x decrementa x antes de usar o valor.
    // Então x passa a valer 33 e y recebe 33.
    y = --x;
    printf("\n\tValor de y, -> %d\n", y);
    printf("\n\tValor de x depois de --x, -> %d\n", x);

    // Exemplo 1: usando -- sozinho
    x--; // x agora vale 32
    printf("\n\tExemplo 1: x-- -> %d\n", x);

    // Exemplo 2: usando -- antes da variável
    --x; // x agora vale 31
    printf("\n\tExemplo 2: --x -> %d\n", x);

    // Exemplo 3: uso em expressão
    y = 10 + x--; // primeiro usa x=31, depois decrementa x para 30
    printf("\n\tExemplo 3: y = 10 + x-- -> %d\n", y);
    printf("\n\tValor final de x -> %d\n", x);

    // Exemplo 4: uso em expressão com pré-decremento
    y = 10 + --x; // primeiro x vira 29, depois soma com 10
    printf("\n\tExemplo 4: y = 10 + --x -> %d\n", y);
    printf("\n\tValor final de x -> %d\n", x);

}