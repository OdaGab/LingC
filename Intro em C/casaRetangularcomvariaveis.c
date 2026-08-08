/*
Program para calcular a área de uma casa com 3 cômodos:
 - sala: 10 x 10 m
 - quarto: 5 x 7 m
 - banheiro: 5 x 7 m
*/

#include <stdio.h>

int main(void){
    int lateral = 11; //comprimento da lateral da acabana
    int cquarto = 7; //comprimento da lateral maior da casa
    int areaq; // Área do quarto
    int areas; // Área da Sala
    int areat; // Área total

    printf("Programa para Cálculo da área da casa\n");
    areas = lateral*lateral;
    printf("A área da sala é %i\n", areas);
    areaq = cquarto*(lateral/2);
    printf("A área do quarto é %i\n", areaq);
    printf("A área do banheiro é %i\n", areaq);
    areat = areas+2*areaq;
    printf("A área total é %i\n", areat);
    printf("");


    return 0;
}