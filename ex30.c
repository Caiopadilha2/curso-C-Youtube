#include <stdio.h>
#include <stdlib.h>

int main() {
      int opcao, qtd;
      float valorDaCompra, dinheiro;
     
      printf("Menu da lanchonete \n");
      printf(" 1 - Pastel (R$4,50)\n");
      printf(" 2 - Coxinha (R$4,00)\n");
      printf(" 3 - Hamburguer (R$12,00)\n");
      printf("Digite o produto desejado: ");
      scanf("%d", &opcao);
      
      printf("Deseja quantas unidades deste produto?");
      scanf("%d", &qtd);
      
      switch(opcao){
          case 1:
              valorDaCompra = qtd * 4.5;      
              break;      
          case 2:
              valorDaCompra = qtd * 4.0;
              break;
          case 3:
              valorDaCompra = qtd * 12.0;
              break;
      }
      if(opcao >= 1 && opcao <=3) {
          printf("Valor total da compra: %f\n", valorDaCompra);
          printf("Valor entregue pelo cliente?");
          scanf("%f", &dinheiro);
          
          if (dinheiro >= valorDaCompra) {
             printf("Dinheiro suficiente para a compra\n");
             printf("Seu troco: %f\n", (dinheiro - valorDaCompra));
          } else {
             printf("Dinheiro insuficiente para a compra");
          }     
      }
       
       system("pause");
}
