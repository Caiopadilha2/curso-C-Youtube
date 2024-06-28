#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    float altura;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    if(idade > 20 && altura > 1.95) {
       printf("Aprovado\n");         
    } else {
       printf("Reprovado\n");
    }
     
    system("pause");
                    
    return 0;
    
}
