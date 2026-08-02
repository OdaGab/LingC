// Escreva um programa que leia um numero inteiro e exiba o dobro, o triplo
// e a raiz quadrada aproximada desse numero.
#include <stdio.h>
#include <math.h>

int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Dobro = %d\n", numero * 2);
    printf("Triplo = %d\n", numero * 3);
    printf("Raiz quadrada aproximada = %.2f\n", sqrt((double) numero));
    return 0;
}
