#include <stdio.h>
#include <stdlib.h>

int main(){
    int velocidade;
    
    printf("Digite a velocidade do veiculo: ");
    scanf("%d", &velocidade);

    
    if (velocidade > 80) {
       printf("Voce foi multado!\n");
    } else {
       printf("Pode seguir viagem\n");       
    }
    
        
    system("pause");
    return 0;
    
}
