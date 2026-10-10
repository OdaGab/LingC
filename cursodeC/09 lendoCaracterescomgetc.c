#include<stdio.h>
#include<stdlib.h>

/* Lendo caracteres do teclado
   anteriormente utilizavamos int, float, char e double
   agora vamos aprender o Getc
   de onde estou lendo o caracter pode ser ate mesmo de um arquivo
   entrada padrão do computador (stdin)
   */

int main(){
    char sexo = 'a';

    printf("\n\t Digite F Feminino e M para Masculino: \n");
    sexo = getc(stdin); 

    //imprimindo o codigo tabela asc 
    printf("\n\t %d", sexo);

    //Imprimindo o caracter digitado
    printf("\n\t Sexo: %c\n", sexo);
}