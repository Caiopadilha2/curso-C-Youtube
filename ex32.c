#include <stdio.h>
#include <stdlib.h>

int main() {
      float nota, acumuladoNotas = 0, resultadoMedia;
      int indice = 0;
      
      while(indice < 5) {
          printf("Digite uma nota: ");
          scanf("%f", &nota);
          
          acumuladoNotas = acumuladoNotas + nota;
          indice++;
      }
      
      resultadoMedia = acumuladoNotas / 5;
      printf("Sua media: %f\n", resultadoMedia);
      
      system("pause");
}
