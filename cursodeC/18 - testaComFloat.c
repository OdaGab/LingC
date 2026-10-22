#include<stdio.h>
#include<stdlib.h>

int main(){

    // long float nota = 6.5; o ideal é double
    // Em C, float e double são utilizados para armazenar valores reais,
    // porém double oferece maior precisão. Neste exemplo, a variável nota
    // foi declarada como float para demonstrar o tamanho em memória desse tipo.

    float nota = 6.5;

printf("\n\t Tamanho: %d \n\t", sizeof nota);


}