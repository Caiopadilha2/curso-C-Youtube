#include <stdio.h>
#include <stdlib.h>

int main(){
    float temperatura;
    
    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);
    
    if (temperatura > 30) {
       printf("Ligar ar condicionado em 21 graus\n");                
    } else if (temperatura < 10) {
       printf("Ligar ar condicionado em 28 graus\n"); 
    } else {
       printf("Nao ligar o ar condicionado!\n");       
    }
    
    system("pause");
    return 0;
}
