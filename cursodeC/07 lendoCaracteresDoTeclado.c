#include<stdio.h>
#include<stdlib.h>

/* Lendo caracteres do teclado
   anteriormente utilizavamos int, float e double
   agora vamos aprender o char 
*/

int main(){
    char sexo;
    // Boas práticas Declarar a Variavel
    // char sexo = 'x';

    printf("\n\t Digite F Feminino e M para Masculino: \n");
    scanf("%c", &sexo); 

    printf("\t O Sexo Digitado: %c", sexo);

return 0;
}