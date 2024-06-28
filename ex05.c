#include <stdio.h>
#include <stdlib.h>

int main(){
    float Kg, g;
    
    // Kg -> g
    
    Kg = 14;
    
    g = Kg * 1000;
    
    printf("%f Kg eh igual a: %f gramas\n", Kg, g);
    
    // g > Kg
    
    g = 35000;
    
    Kg = g / 1000;
    
    printf("%f g eh igual a: %f kilos\n", g, Kg);
    
    system("pause");
    
}
