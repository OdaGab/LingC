// Escreva um programa que leia um numero inteiro e exiba seu antecessor
// e seu sucessor.
#include <stdio.h>

int main(void) {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Antecessor = %d\n", n - 1);
    printf("Sucessor = %d\n", n + 1);
    return 0;
}
