#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    float peso;
          
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Idade lida: %d\n ", idade);
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Peso lido: %f\n", peso);

    
    system("pause");
    return 0;    
    
}
