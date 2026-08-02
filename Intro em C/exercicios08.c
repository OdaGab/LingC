// Escreva um programa que leia um numero inteiro e exiba seu quadrado
// e seu cubo.
#include <stdio.h>

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Quadrado = %d\n", numero * numero);
    printf("Cubo = %d\n", numero * numero * numero);
    return 0;
}
