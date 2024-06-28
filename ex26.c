// Faça um algoritmo para determinar o peso ideal de uma pessoa.
// Tendo  como  entrada  a  altura  e  o  sexo 
// Para homens: (72.7 * Altura) – 58 
// Para mulheres: (62.1 * Altura) –44.7

#include <stdio.h>
#include <stdlib.h>

int main(){
    float altura, pesoIdeal;
    char sexo;
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    printf("Digite seu sexo M/F: ");
    fflush(stdin);
    scanf("%c", &sexo);
    
    if(sexo == 'm' || sexo == 'M') {
      pesoIdeal = (72.7 * altura) - 58;   
      printf("Seu peso ideal eh: %f\n", pesoIdeal);   
    } else if (sexo == 'f' || sexo == 'F') {
      pesoIdeal = (62.1 * altura) - 44.7;   
      printf("Seu peso ideal eh: %f\n", pesoIdeal);   
    } else {
      printf("Algo deu errado...\n");
    }

    
    system("pause");    
}
