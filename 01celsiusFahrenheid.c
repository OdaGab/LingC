#include <stdio.h>

//função auxiliar
float converte(float c)
{
    float f;
    f = 1.8*c + 32;
    return f;
}

int main(void){
 
    float t1;
    float t2;

   //mensagem para o usúario 
   printf("\tDigite a temperatura em Celsius: \n");

   //Capturar 
   scanf("%f",&t1);

   t2 = converte(t1);
   printf("\tTemperatura em Fahrennheit: %.2f", t2);

   return 0;

}