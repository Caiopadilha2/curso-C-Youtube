#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char nome[30];
    int qtdLetras;
    
    printf("Digite uma palavra: ");
    scanf("%s", &nome);
    
    qtdLetras = strlen(nome);
    
    printf("Total de letras: %i\n", qtdLetras);
    
    
    system("pause");
}
