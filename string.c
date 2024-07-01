#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){
    char nome[15];
    
    printf("Digite o nome: ");
    // scanf("%s", &nome); // Sempre que quiser ler somente uma palavra
    // gets(nome); // Para windows
    fgets(nome, 30, stdin);
    
    printf("Nome digitado: %s \n", nome);
    
    system("pause");
    
    return 0;
}
