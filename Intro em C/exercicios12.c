// Escreva um programa que leia a distancia inicial, a distancia final e
// o combustivel gasto para calcular o consumo medio em km/l.
#include <stdio.h>

int main(void) {
    double distanciaInicial, distanciaFinal, litros;
    printf("Distancia inicial (km): ");
    scanf("%lf", &distanciaInicial);
    printf("Distancia final (km): ");
    scanf("%lf", &distanciaFinal);
    printf("Litros consumidos: ");
    scanf("%lf", &litros);

    double distPercorrida = distanciaFinal - distanciaInicial;
    if (litros > 0.0) {
        printf("Consumo medio = %.2f km/l\n", distPercorrida / litros);
    } else {
        printf("Quantidade de litros invalida.\n");
    }
    return 0;
}
