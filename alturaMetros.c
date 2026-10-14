#include<stdio.h>

int main(void)
{
    int f; /* número em pés */
    float p; /* número em polegadas */
    float h, ha; /* altura em metros */

    /* Captura altura em metros */

    printf("\tDigite a altura em metros: \n");
    scanf("%f",&h); 

    /* Calcular a altura em pés e polegadas */
    h = 100*h;               /* Converte em centimetros */
    f = (int)(h/30.48);      /* Calcula números de pés */
    p = (h-f*30.48) / 2.56;  /* Calcula números de polegadas */
    ha = h/100;
    /*Exibir altura convertida */
    printf("\tAltura em metros %.2f M\n", ha );
    printf("\tAltura %dft %.2fpol", f, p);

    return 0;

}