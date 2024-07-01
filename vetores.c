#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float notas[3], media = 0;
    int indice;
    
//    printf("Nota 1: ");
//    scanf("%f", &notas[0]);
//    
//    printf("Nota 2: ");
//    scanf("%f", &notas[1]);
//    
//    printf("Nota 3: ");
//    scanf("%f", &notas[2]);
//    
//    printf("Notas: \n");
//    printf("- %f \n", notas[0]);
//    printf("- %f \n", notas[1]);
//    printf("- %f \n", notas[2]);

    for (indice = 0; indice < 3; indice++){
        printf("Digite a nota na posicao %i :", indice);
        scanf("%f", &notas[indice]);
        media = media + notas[indice];
    }
    
    printf("Notas:\n ");
    for (indice = 0; indice < 3; indice++){
        printf("- %f\n", notas[indice]);
       
    }
    
    media = media / 3;
    printf("\n Media das notas: %f\n", media);
    
    system("pause");
    return 0;
}
