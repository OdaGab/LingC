#include<stdio.h>
#include<stdlib.h>

/* Lendo caracteres do teclado
   anteriormente utilizavamos int, float, char e double
   agora vamos aprender o Getchar 
*/

int main(){
    char sexo;

    printf("\n\t Digite F Feminino e M para Masculino: \n");
    sexo = getchar(); 

    //imprimindo o codigo tabela asc 
    printf("\n\t %d", sexo);

    //Imprimindo o caracter digitado
    printf("\n\t Sexo: %c\n", sexo);
}