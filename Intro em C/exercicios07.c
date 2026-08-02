// Escreva um programa que converta um tempo dado em minutos para horas
// e minutos e exiba ambos os valores.
#include <stdio.h>

int main(void) {
    int minutos;
    printf("Digite o total de minutos: ");
    scanf("%d", &minutos);
    int horas = minutos / 60;
    int resto = minutos % 60;
    printf("%d minutos = %d hora(s) e %d minuto(s)\n", minutos, horas, resto);
    return 0;
}
