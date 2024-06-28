#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoDeNascimento, anoAtual, idade, diasVividos;
    
    anoDeNascimento = 1994;
    anoAtual = 2024;
    idade = anoAtual - anoDeNascimento;
    
    diasVividos = idade * 365;
    
    printf("A pessoa viveu: %d dias \n ", diasVividos);
    
    system("pause");
    
}
