#include<stdio.h>
#include<stdlib.h>

int main(){

    //Unidade de medida. bit, byte, kB, MB, GB, TB, PB, EB ... 
    // bit 0 e 1 etc 

    //Reduzindo o consumo de mémoria

    short valor = 10; 
    int valor2 = 10;

    printf("\n\tValor: %d Tamanho: %d \n", valor, sizeof valor);
    printf("\n\tValor2: %d Tamanho: %d \n", valor2, sizeof valor2);

}