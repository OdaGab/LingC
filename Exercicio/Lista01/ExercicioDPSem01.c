/*
1 Exerc´ıcio 1
Substitua o valor da vari´avel nusp pelo valor do seu n´umero USP no seguinte
programa, execute-o e escreva exatamente qual ser´a a sa´ıda do programa:
*/

#include<stdio.h>

int main(){

    int numUSP = 123456789;

    printf("%i\n",numUSP);
    printf("%d\n",numUSP);
    printf("%f\n",(float)numUSP);
    printf("%i\n",numUSP/2);
    printf("%d\n",numUSP%2);
    printf("Quadrado: %d\n",numUSP*numUSP);
    //neste caso o número seria negativo ultrapasso o limite de um int de 32 bits
    // resilvendo isso

    // Linha 22: exemplo incorreto. %d espera int, mas a expressão resulta em long long.
    // Essa incompatibilidade causa comportamento indefinido; o valor impresso não é confiável.
    printf("Quadrado linha 22: %11d\n", (long long)numUSP * numUSP);
    // Linha 23: %lld corresponde a long long. O 11 define a largura mínima do campo.
    printf("Quadrado linha 23: %11lld\n", (long long)numUSP * numUSP);
    // Linha 24: também está correta; sem largura mínima especificada.
    printf("Quadrado linha 24: %lld\n", (long long)numUSP * numUSP);
    return 0;
}