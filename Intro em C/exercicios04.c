// Escreva um programa que leia o numero de horas trabalhadas e o valor
// da hora, calcule o salario bruto e exiba o resultado.
#include <stdio.h>

int main(void) {
    int horas;
    double salarioHora;
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);
    printf("Valor por hora: ");
    scanf("%lf", &salarioHora);
    double salario = horas * salarioHora;
    printf("Salario bruto = %.2f\n", salario);
    return 0;
}
