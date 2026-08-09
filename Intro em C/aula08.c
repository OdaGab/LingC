#include<stdio.h>
#include<math.h>
int main(){
      double raio = 2;
      double areap;
      areap = M_PI * pow(raio,2);
      printf("Área: %f\n", areap);
      
      void areaCasa();

      return 0;
}

void areaCasa(){
      float lateral = 11;
      float cquarto = 7;
      float areaq;
      float areas; 
      float areat;
      printf("Programa para cálculo da área da casa\n");
      areas = lateral*lateral;
      printf("A área da sala é %f\n", areas);
      areaq = cquarto*(lateral/2);
      printf("A área do quarto é %f", areaq);
      printf("A área do banheiro é %f", areaq);
      areat = areas + 2*areaq;
      printf("A área total é %f\n", areat);
}

double areaPiscina(){
      double raio = 2;
      return(M_PI * pow(raio,2));
}