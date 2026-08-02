// Escreva um programa que leia o peso e a altura do usuario, calcule o IMC
// e exiba o resultado.
#include <stdio.h>

int main(void) {
    double peso, altura;
    printf("Digite o peso (kg): ");
    scanf("%lf", &peso);
    printf("Digite a altura (m): ");
    scanf("%lf", &altura);
    if (altura > 0.0) {
        double imc = peso / (altura * altura);
        printf("IMC = %.2f\n", imc);
    } else {
        printf("Altura invalida.\n");
    }
    return 0;
}
