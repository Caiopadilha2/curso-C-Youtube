#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, altura, imc;
    
    peso = 83.0;
    altura = 1.93;
    
    imc = peso / (altura * altura);
    
    printf("Seu peso eh de %f, sua altura eh %f e seu IMC eh %f\n", peso, altura, imc);
    
    system("pause");
    return 0;    
    
}
