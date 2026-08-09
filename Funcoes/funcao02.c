#include<stdio.h>
int maximum(int, int, int);

int main(){
    int a,b,c;
    printf("Entre com os treis inteiros.\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("O maior número é \n %d", maximum(a, b, c));

    return 0;
}

int maximum(int x, int y, int z){

    int max = x;

    if (y > max)
        max = y;

    if (z > max)
        max = z;

    return max;
}