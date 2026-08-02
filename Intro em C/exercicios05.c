// Escreva um programa que leia a distancia percorrida e o combustivel gasto,
// calcule o consumo medio e exiba o resultado em km/l.
#include <stdio.h>

int main(void) {
    double distancia, combustivel;
    printf("Distancia percorrida (km): ");
    scanf("%lf", &distancia);
    printf("Combustivel gasto (litros): ");
    scanf("%lf", &combustivel);
    if (combustivel > 0.0) {
        printf("Consumo medio = %.2f km/l\n", distancia / combustivel);
    } else {
        printf("Combustivel invalido.\n");
    }
    return 0;
}
