// Escreva um programa que leia o valor de um pedido, calcule o total com
// imposto de 6% e gorjeta de 18%, e exiba o valor final.
#include <stdio.h>

int main(void) {
    double valor;
    const double imposto = 0.06;
    const double gorjeta = 0.18;
    printf("Valor do pedido: ");
    scanf("%lf", &valor);
    double total = valor * (1.0 + imposto + gorjeta);
    printf("Total com imposto e gorjeta = %.2f\n", total);
    return 0;
}
