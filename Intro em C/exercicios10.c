// Escreva um programa que leia um numero inteiro e informe se ele e par
// ou impar.
#include <stdio.h>

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("O numero eh par.\n");
    } else {
        printf("O numero eh impar.\n");
    }
    return 0;
}
