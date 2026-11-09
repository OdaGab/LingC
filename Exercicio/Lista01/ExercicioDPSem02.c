/* 
Execute o seguinte programa e escreva exatamente o que sera impresso por
ele (por utilizar enderecos de memoria, diferentes execucoes podem produzir
resultados diferentes):
*/

#include<stdio.h>

int main(){

    int x = 7;
    int y = 13;
    int* z = &x;
    // %p serve para imprimir um endereço de memória.
    printf("x: %i   y: %i   z:%p\n", x, y, z);
    /*
        O & é o operador “endereço de”. Assim:
        &x é o endereço de memória da variável x.
        &y é o endereço de y.
        &z é o endereço da própria variável ponteiro z.
    */
    printf("&x: %p  &y: %p  &z: %p\n", &x,&y,&z);
    *z = x + y;
    printf("Novo valor de x: %i\n", x);
    return 0;

}