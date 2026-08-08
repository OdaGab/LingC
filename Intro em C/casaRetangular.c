/*
Program para calcular a área de uma casa com 3 cômodos:
 - sala: 10 x 10 m
 - quarto: 5 x 7 m
 - banheiro: 5 x 7 m
*/

#include <stdio.h>

int main(void){
    int sala_l = 10, sala_a = 10;
    int quarto_l = 5, quarto_a = 7;
    int banheiro_l = 5, banheiro_a = 7;

    int area_sala = sala_l * sala_a;
    int area_quarto = quarto_l * quarto_a;
    int area_banheiro = banheiro_l * banheiro_a;
    int area_total = area_sala + area_quarto + area_banheiro;

    printf("Programa para cálculo da área da casa\n");
    printf("A área da sala é %d m2\n", area_sala);
    printf("A área do quarto é %d m2\n", area_quarto);
    printf("A área do banheiro é %d m2\n", area_banheiro);
    printf("A área total é %d m2\n", area_total);

    return 0;
}