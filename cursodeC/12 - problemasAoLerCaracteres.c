#include <stdio.h>

int main() {
    int idade;
    float peso, altura;
    char sexo;

    printf("\n\tDigite sua idade, seu peso, sua altura e seu sexo");
    scanf("%d%f%f%c", &idade, &peso, &altura,&sexo);

    printf("\n\tIdade: %d\n\tPeso: %f\n\tAltura: %f\n\tSexo: %c\n", idade,peso,altura,sexo);
     /* Neste caso quando mostrar o sexo fica sem mostrar a letra f ou m
        Problema de buffer o programa lê o espaço 
        provando isso 
          printf("\n\tIdade: %d\n\tPeso: %f\n\tAltura: %f\n\tSexo: %d\n", idade,peso,altura,sexo);

          note que para mostrar o sexo esta com %d ao inves do %c teste e vera o codigo da tabela ASC no caso é espaço = 32 

          Solução 
              Colocar espaço antes %c isso resolve o problema do espaça, legal né

              scanf("%d%f%f %c", &idade, &peso, &altura,&sexo);
                           ^     
     */

    return 0;
}