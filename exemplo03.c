#include <stdio.h>
int main() {
    int x = 25;
    printf("O Valor inicial de x: %i\n", x);
    int* y = &x;
    *y = 30;
    printf("Valor atual de x: %i\n", x);
    return 0;
}