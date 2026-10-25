#include<stdio.h>
#include<stdlib.h>

int main(){
        // 1) Aqui a divisão é entre inteiros: 10 / 3 = 3 em C, mas como o printf usa %f,
        // o valor 3 é convertido para float e impresso como 0.000000.
        // Isso acontece porque a operação foi feita antes da conversão para float.
        printf("\n\t1 - resultado: %f", 10 / 3 );

        // 2) Aqui 3.2 é um número real (double), então a expressão vira divisão real.
        // 10 / 3.2 = 3.125000, e o resultado é impresso como float.
        printf("\n\t2 - resultado: %f", 10 / 3.2 );

        // 3) Casting explícito: (float)3 converte o número 3 para float antes da divisão.
        // Então a expressão vira 10 / 3.0f = 3.333333...
        printf("\n\t3 - resultado: %f", 10 / (float)3 );

        // 4) Neste caso não há casting, mas os dois operandos são reais.
        // Então 10.5 / 3.2 = 3.281250...
        printf("\n\t4 - resultado: %f", (10.5 / 3.2));

        // 5) Casting para int: (int)(10.5 / 3.2) converte o resultado real para inteiro.
        // A parte decimal é descartada, então 3.281250 vira 3.
        printf("\n\t5 - resultado: %d", (int)(10.5 / 3.2));

        // 6) Casting de double para int: a parte decimal é perdida.
        // 7.9 vira 7.
        printf("\n\t6 - resultado: %d", (int)7.9);

        // 7) Casting de int para float: transforma inteiro em real.
        // 10 vira 10.000000 em float.
        printf("\n\t7 - resultado: %f", (float)10);

        // 8) Casting de float para int: perde casas decimais.
        // 8.75 vira 8.
        printf("\n\t8 - resultado: %d", (int)8.75);

        // 9) Casting de int para double: aumenta a precisão e mantém o valor.
        // 15 vira 15.000000.
        printf("\n\t9 - resultado: %f", (double)15);

        // 10) Casting em expressão com variável: 3 + 2.5 = 5.5, mas com cast para int vira 5.
        printf("\n\t10 - resultado: %d", (int)(3 + 2.5));

}