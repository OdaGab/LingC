#include<stdio.h>
#include<stdlib.h>

int main(){

long long int valor;   // Variável auxiliar não utilizada no cálculo principal
long long int a,b,c;  // Tipo de dado com capacidade superior ao int

a = 2147483647;  // Valor máximo representável por um int
b = 1;           // Soma que, em um int, causaria overflow

// A operação a + b ultrapassa o limite de armazenamento do tipo int.
// Para evitar esse problema, utilizamos long long int, que possui uma faixa
// de valores maior e preserva o resultado correto da soma.
c = a + b;

printf("\n\t a = %lld \n\t b = %lld\n\t c = %lld", a, b, c);



}