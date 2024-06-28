#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    
    printf("Digite a idade do paciente: ");
    scanf("%d", &idade);
    
    
    if(idade < 18 || idade > 65) {
       printf("Voce pode ter um acompanhante\n");         
    } else {
       printf("Nao pode acompanhante\n");
    }
     
    system("pause");
                    
    return 0;
    
}
