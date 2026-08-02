// Escreva um programa que leia uma temperatura em Celsius,
// converta para Fahrenheit e exiba o resultado.
#include <stdio.h>

int main(void) {
    double celsius;
    printf("Temperatura em Celsius: ");
    scanf("%lf", &celsius);
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    return 0;
}
