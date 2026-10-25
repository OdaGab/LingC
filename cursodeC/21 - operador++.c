#include<stdio.h>
#include<stdlib.h>

int main(){

    int y, x = 35; // x começa com 35

    // Pós-incremento: x++ usa o valor atual de x e depois incrementa.
    // Primeiro y recebe 35, depois x passa a valer 36.
    y = x++;
    printf("\n\tValor de y, -> %d\n", y);
    printf("\n\tValor de x depois de x++, -> %d\n", x);

    // Pré-incremento: ++x incrementa x antes de usar o valor.
    // Então x passa a valer 37 e y recebe 37.
    y = ++x;
    printf("\n\tValor de y, -> %d\n", y);
    printf("\n\tValor de x depois de ++x, -> %d\n", x);

    // Exemplo 1: usando ++ sozinho
    x++; // x agora vale 38
    printf("\n\tExemplo 1: x++ -> %d\n", x);

    // Exemplo 2: usando ++ antes da variável
    ++x; // x agora vale 39
    printf("\n\tExemplo 2: ++x -> %d\n", x);

    // Exemplo 3: uso em expressão
    y = 10 + x++; // primeiro usa x=39, depois incrementa x para 40
    printf("\n\tExemplo 3: y = 10 + x++ -> %d\n", y);
    printf("\n\tValor final de x -> %d\n", x);

    // Exemplo 4: uso em expressão com pré-incremento
    y = 10 + ++x; // primeiro x vira 41, depois soma com 10
    printf("\n\tExemplo 4: y = 10 + ++x -> %d\n", y);
    printf("\n\tValor final de x -> %d\n", x);

}