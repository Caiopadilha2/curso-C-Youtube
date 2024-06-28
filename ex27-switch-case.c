#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo;
    
    printf("Codigo do produto: ");
    scanf("%d", &codigo);
    
    switch(codigo){
        case 1:
            printf("Produto sem lactose\n");
            break;
        case 2:
             printf("Produto sem gluten\n");
             break;
        case 3:
             printf("Produto sem farinha\n");
             break;
        case 4:
             printf("Produto vencido\n");
             break;
        default:
             printf("Codigo invalido!\n");
    }
    
    system("pause");
    
}
