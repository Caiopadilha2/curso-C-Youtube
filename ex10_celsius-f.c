#include <stdio.h>
#include <stdlib.h>

int main(){
    float celsius, fahrenheit;
    
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = ((fahrenheit - 32) * 5) / 9;
    
    printf("Temperatura em celsius: %f\n", celsius);
    
    
    system("pause");
    return 0;    
    
}
