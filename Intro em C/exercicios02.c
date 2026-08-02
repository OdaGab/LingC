// Escreva um programa que leia a base e a altura de um retangulo,
// calcule e exiba a area e o perimetro do retangulo.
#include <stdio.h>

int main(void) {
    double base, altura;
    printf("Digite base e altura do retangulo: ");
    scanf("%lf %lf", &base, &altura);
    printf("Area = %.2f\n", base * altura);
    printf("Perimetro = %.2f\n", 2.0 * (base + altura));
    return 0;
}
