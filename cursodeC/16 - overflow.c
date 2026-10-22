#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,b,c;
    a = 2147483647;  // maior valor que um int pode armazenar
    b = 1;           // ao somar 1, ocorre overflow

    // O valor de a + b ultrapassa o limite do tipo int.
    // Quando isso acontece, o resultado "dá a volta" no espaço de memória
    // reservado para o int e passa a aparecer como um número negativo.
    c = a + b;

    printf("\n\t a = %d \n\t b = %d\n\t c = %d", a, b, c);


}