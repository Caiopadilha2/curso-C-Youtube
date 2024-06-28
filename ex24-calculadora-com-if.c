#include <stdio.h>
#include <stdlib.h>

int main() {
     float numero1, numero2, resultado;
     char operador;
     
     printf("Digite o primeiro numero: ");
     scanf("%f", &numero1);
     
     printf("Digite o operador: ");
     fflush(stdin);
     // Limpa a memoria
     scanf("%c", &operador);

     printf("Digite o segundo numero: ");
     scanf("%f", &numero2);
     
     if(operador == '+') {
        resultado = numero1 + numero2;
        printf("Resultado da soma: %f\n", resultado);            
     } else if (operador == '-') {
        resultado = numero1 - numero2;
        printf("Resultado da subtracao: %f\n", resultado);
     } else if (operador == '*') {
        resultado = numero1 * numero2;
        printf("Resultado da multiplicacao: %f\n", resultado);
     } else if (operador == '/') {
       resultado = numero1 / numero2;
       printf("Resultado da divisao: %f\n", resultado);
     } else {
       printf("Operador invalido\n");
     }

   
   system("pause");

}
