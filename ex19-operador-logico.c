#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if(idade >= 18 && idade < 70) {
       printf("Voce eh obrigado a votar\n");         
    } else {
       printf("Voce nao eh obrigado a votar\n");
    }
    
    system("pause");
    return 0;
    
}
