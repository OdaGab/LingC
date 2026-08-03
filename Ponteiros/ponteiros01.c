#include <stdio.h>
#include <stdlib.h>

int main(){

int var = 15;
int *ptr;
ptr = &var;

printf("conteudo de var = %d\n ", var);
printf("endereço da var = %p \n", &var);
printf("conteúdo apontado por ptr = %d\n", *ptr);
printf("endereço apontado por ptr = %p\n", ptr);
printf("endereço do ptr           = %p\n", &ptr);

*ptr = 73;

printf("conteudo de var = %d\n ", var);
printf("endereço da var = %p \n", &var);
printf("conteúdo apontado por ptr = %d\n", *ptr);
printf("endereço apontado por ptr = %p\n", ptr);
printf("endereço do ptr           = %p\n", &ptr);

}
