// Escreva um programa que leia tres notas, calcule a media e informe
// se o aluno esta aprovado, em recuperacao ou reprovado.
#include <stdio.h>

int main(void) {
    double nota1, nota2, nota3;
    printf("Digite tres notas: ");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    double media = (nota1 + nota2 + nota3) / 3.0;
    printf("Media = %.2f\n", media);
    if (media >= 7.0) {
        printf("Aprovado\n");
    } else if (media >= 5.0) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}
