// Escreva um programa que leia a base e a altura de um retangulo,
// calcule e exiba a area e a diagonal do retangulo.
#include <stdio.h>
#include <math.h>

int main(void) {
    double base, altura;
    printf("Digite base e altura do retangulo: ");
    scanf("%lf %lf", &base, &altura);
    printf("Area = %.2f\n", base * altura);
    printf("Diagonal = %.2f\n", sqrt(base * base + altura * altura));
    return 0;
}
