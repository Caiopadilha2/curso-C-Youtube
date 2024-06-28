#include <stdio.h>
#include <stdlib.h>

// Ex 1. Um mercado está realizando uma promoção para vender abacates. 
// Comprando até 12 abacates, o preço unitário é de R$1,00, caso o cliente compre
// mais que 12 abacates e até 25 abacates o preço unitário caí para R$0,90 e se o
// cliente comprar mais que 25 unidades cada abacate saí por R$0,75. 
// Faça um programa que leia o total de abacates comprados e mostre o valor ao final da execução.

int main(){
    float precoTotal;
    int unidades;
    
    printf("Quantos abacates voce quer? ");
    scanf("%d", &unidades);
    
    if (unidades <= 12) {
       precoTotal = unidades * 1;
       printf("O preco total eh de R$: %.2f\n", precoTotal);
    } else if (unidades > 12 && unidades <= 25) {
       precoTotal = unidades * 0.9;
       printf("O preco total eh de R$: %.2f\n", precoTotal);
    } else if (unidades > 25) {
       precoTotal = unidades * 0.75;
       printf("O preco total eh de R$:%.2f\n", precoTotal);       
    } else {
       printf("Algo deu errado");
    }
    system("pause");    
}
