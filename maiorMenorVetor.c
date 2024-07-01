#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int valores[5], maior, menor, i;
    
    for(i = 0; i < 5; i++){
          printf("Digite um valor: ");
          scanf("%d", &valores[i]);      
    }
    
    maior = 0;
    menor = 0;
    
    for(i = 1; i < 5; i++){
    //  Valores[1] > valores[0]
        if(valores[i] > valores[maior]){
            maior = i;
        } 
        if (valores[i] < valores[menor]) {
           menor = i;
        }      
    }
    printf("Posicao do maior: %d\n", maior);
    printf("Posicao do menor: %d\n", menor);
    
    system("pause");
    return 0;
}
