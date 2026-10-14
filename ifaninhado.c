#include<stdio.h>

int main(void){

int a, b;

printf("Digite dois numeros inteiros\n"); 
scanf("%d%d",&a, &b);

        if(a%2 == 0)
        {
           if(b%2 == 0){
              printf("\tForam digitados %d e %d sao numeros pares\n", a, b);
        }
    }
    return 0;

}
