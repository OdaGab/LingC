#include<stdio.h>
#include<stdlib.h>

int main(){

    int v1, v2, v3; // Declara três variáveis inteiras

    v1 = 10; // Primeiro valor
    v2 = 3;  // Segundo valor
    v3 = v1 % v2; // Calcula o resto da divisão de 10 por 3

    // % é o operador de resto da divisão inteira.
    // 10 % 3 = 1, porque 10 / 3 = 3 e sobra 1.
    printf("\n\tResto -> %d\n", v3);

}