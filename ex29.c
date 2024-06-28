#include <stdio.h>
#include <stdlib.h>

int main() {
      int idade;
      
      printf("\nDigite a idade: ");
      scanf("%d", &idade);
      
          switch(idade) {
                case 0 ... 5:
                    printf("Categoria pré-mirim\n");
                    break;
               case 6 ... 10:
                    printf("Categoria MIRIM\n");
                    break;
               case 11 ... 16:
                    printf("Categoria infantil\n");
                    break;
               case 17 ... 20:
                    printf("Categoria JOVEM\n");
                    break;
               case 21 ... 60:
                    printf("Categoria adulto\n");
                    break;
               default:
                    printf("Só pode participar de 0 a 60 anos.\n");
       }
       system("pause");
}
