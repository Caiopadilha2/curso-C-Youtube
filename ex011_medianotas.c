#include <stdio.h>
#include <stdlib.h>

int main(){
    float prova1, prova2, trabalho;
    float mediaFinal, mediaProvas, mediaTrabalho;
    
    printf("Digite sua nota na prova 1: ");
    scanf("%f", &prova1);
    
    printf("Digite sua nota na prova 2: ");
    scanf("%f", &prova2);
    
    printf("Digite sua nota no trabalho: ");
    scanf("%f", &trabalho);
    
    mediaProvas = ((prova1 + prova2) / 2) * 0.7;
    mediaTrabalho = trabalho * 0.3;
    
    mediaFinal = mediaProvas + mediaTrabalho;
    
    printf("Média final %f\n", mediaFinal);          
    
    system("pause");
    return 0;    
    
}
