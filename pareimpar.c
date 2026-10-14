#include<stdio.h>

int main(void){

    int a;

    printf("\tDigite o numero inteiro:\n"); 
    scanf("%d",&a);

    if(a%2 == 0){
        printf("\tO numero digitado foi %d, e um numero par\n", a);
    }
    else{
        printf("O numero digitado foi %d, e um numero impar", a);
    }

    return 0;

}