/*
Program para calcular a área de uma casa com 3 cômodos:
 - sala: 10 x 10 m
 - quarto: 5 x 7 m
 - banheiro: 5 x 7 m
*/

#include <stdio.h>

int main(void){
    float lateral = 11; //comprimento da lateral da acabana
    float cquarto = 7; //comprimento da lateral maior da casa
    float areaq; // Área do quarto
    float areas; // Área da Sala
    float areat; // Área total

    printf("Programa para Cálculo da área da casa\n");
    areas = lateral*lateral;
    printf("A área da sala é %0.2f\n", areas);
    areaq = cquarto*(lateral/2);
    printf("A área do quarto é %0.2f\n", areaq);
    printf("A área do banheiro é %0.2f\n", areaq);
    areat = areas+2*areaq;
    printf("A área total é %0.2f\n", areat);
    printf("");


    return 0;
}