#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero, sucessor, antecessor;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    sucessor = numero + 1;
    antecessor = numero - 1;
    
    printf("Sucessor: %d\n", sucessor);
    printf("Antecessor: %d\n", antecessor);
    
    
    system("pause");
    return 0;    
    
}
