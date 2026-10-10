#include<stdio.h>
#include<stdlib.h>
/*
     operações (+ - * /)

     %d Mascara

     Logo mais trabalharemos com outros tipos de dados, por hora somente números inteiros.

*/


int main(){

    printf("\tImprimindo dois numeros inteiros \n");
    printf("\t\t%d e %d \n", 10, 5);

    printf("\tConhecendo os operadores\n");
    printf("\t\tsoma        %d \n", 10 + 5);
    printf("\t\tsubtrair    %d \n", 10 - 5);
    printf("\t\tMultiplicar %d \n", 10 * 5);
    printf("\t\tDividir     %d \n", 10 / 5);

    printf("\toutras maneiras de mostrar\n");
    printf("\t\t%d + %d = %d", 10, 5, 10 + 5);

     

    return 0;
}