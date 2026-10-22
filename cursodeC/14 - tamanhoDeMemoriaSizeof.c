#include<stdio.h>
#include<stdlib.h>

int main(){ 

    int a;
    char b; 
    float c; 

    printf("\n\tInt = %d\n", sizeof(int));
    /* apresentara o numero 4 bytes 
       isso representa o tamanho de memoria 
    */
   printf("\n\tChar = %d\n", sizeof(char));
   printf("\n\tFloat = %d\n", sizeof(float));
   printf("\n\tDouble = %d\n", sizeof(double));

   printf("\n\tInt variavel a = %d\n", sizeof a);
   printf("\n\tChar variavel b = %d\n", sizeof b);
   printf("\n\tFloat variavel c = %d\n", sizeof c);
}