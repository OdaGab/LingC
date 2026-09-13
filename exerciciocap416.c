#include <stdio.h>

int main(void)
{
    const int MAX = 9; /* imprime de 1 a MAX asteriscos */
    int row, col, space;

    for (row = 1; row <= MAX; ++row) {
        /* espaços à esquerda para alinhamento à direita */
        for (space = 0; space < MAX - row; ++space)
            putchar(' ');

        /* imprimir asteriscos crescentes */
        for (col = 0; col < row; ++col)
            putchar('*');

        putchar('\n');
    }

    return 0;
}