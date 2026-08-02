// Escreva um programa que leia tres numeros inteiros e exiba o maior
// e o menor entre eles.
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    int maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    int menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    printf("Maior = %d\n", maior);
    printf("Menor = %d\n", menor);
    return 0;
}
