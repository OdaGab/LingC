// Escreva um programa que peça ao usuario para digitar dois numeros,
// obtenha-os do usuario e imprima a soma, o produto, a diferenca,
// o quociente e o resto da divisao dos dois numeros.
#include <stdio.h>

int main(void) {
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Soma = %d\n", a + b);
    printf("Produto = %d\n", a * b);
    printf("Diferenca = %d\n", a - b);
    if (b != 0) {
        printf("Quociente = %d\n", a / b);
        printf("Resto = %d\n", a % b);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }
    return 0;
}
