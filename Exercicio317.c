/*
No livro a média está errada 
Livro: Como programar em C 
H.M Deitel e P.J Deitel 
Segunda Edição página 77
*/


#include <stdio.h>

int main()
{

    float litros, km, taxa, txtotal = 0;
    int fim = 0, cont = 0;

    while (litros != -1 && km != -1)
    {
        printf("Entre com os litros consumidos (-1 para finalizar):");
        scanf("%f", &litros);

        if(litros == -1){
            printf("Obrigado por utilizar este software.\n");
            break;
        }

        printf("Entre com os Km percorridos:");
        scanf("%f", &km);

        if(km == -1){
        printf("Obrigado por utilizar este software.\n");
        break;
        }

        taxa = km / litros;

        printf("A taxa km/litro para esse tanque foi: %f \n", taxa);

        txtotal = txtotal + taxa;

        cont = cont + 1;
  
    }  

    
    printf("A taxa total de km/litro por foi: %f \n", txtotal/cont);
}
