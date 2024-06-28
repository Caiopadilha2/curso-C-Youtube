#include <stdio.h>
#include <stdlib.h>

int main(){
    float num1, num2, resultado;
    int opcao;
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Escolha a opcao desejada:\n ");
    printf("1 - Soma\n 2 - Subtracao\n 3 - Divisao \n 4 - Multiplicacao\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        case 1:
            resultado = num1 + num2;
            printf("Soma de %f + %f = %f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Soma da subtracao: %f\n", resultado);
             break;
        case 3:
            resultado = num1 / num2;
            printf("Soma da divisao: %f\n", resultado);
             break;
        case 4:
             resultado = num1 * num2;
             printf("Soma da multiplicacao: %f\n", resultado);
             break;
        default:
             printf("Opcao invalida!\n");         
             
                  
    }
    system("pause");
    
}
