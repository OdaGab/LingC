#include<stdio.h> // Biblioteca para entrada e saída padrão
#include<stdlib.h> // Biblioteca com funções auxiliares do C

int main(){

    // Teste com o tipo long double
    long double x = 3.141519; // Variável do tipo ponto flutuante de maior precisão

    printf("\n\tvalor do X = %d \n", x); // Tenta imprimir x com %d, que é para inteiros
    printf("\n\tvalor do X = %f \n", x); // Imprime em formato decimal com ponto flutuante
    printf("\n\tvalor do X = %Le \n", x); // Imprime em notação científica com precisão maior

    // Exemplo 1: uso do double para guardar número decimal
    double pi = 3.14159;
    printf("\n\tpi = %.5f\n", pi);

    // Exemplo 2: cálculo de média
    double nota1 = 8.5;
    double nota2 = 9.0;
    double media = (nota1 + nota2) / 2.0;
    printf("\n\tmedia = %.2f\n", media);

    // Exemplo 3: cálculo de área
    double raio = 4.5;
    double area = 3.14159 * raio * raio;
    printf("\n\tarea = %.2f\n", area);

    // Observação resumida: __mingw_printf é uma função específica do MinGW; aqui o segundo argumento usa sizeof x, que retorna o tamanho em bytes e não o valor de x.
   // __mingw_printf("\n\tvalor do X = %Le \n", sizeof x);

}