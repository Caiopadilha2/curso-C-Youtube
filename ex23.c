#include <stdio.h>
#include <stdlib.h>

int main() {
     float salario1, salario2;
     
     printf("Digite o primeiro salario: ");
     scanf("%f", &salario1);
     
     printf("Digite o segundo salario: ");
     scanf("%f", &salario2);
     
         if(salario1 > salario2) {
            printf("Primeiro salário eh maior %f que o segundo salario %f\n", salario1, salario2);
         } else if(salario2 > salario1) {
            printf("Segundo salário %f eh maior que o primeiro salario %f\n.",salario2, salario1);
         } else {
           printf("Os salarios são iguais\n");
         } 
   
   system("pause");
}
