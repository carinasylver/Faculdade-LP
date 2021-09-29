/*Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível
(codificado da seguinte forma: 1-Álcool 2-Gasolina, deverá ser aceito somente os valores
1 ou 2), de um posto de combustível.
Deverá ser calculado o total de cada compra utilizando a seguinte tabela de preços:
Álcool – R$ 4,15
Gasolina – R$ 4,65
A leitura finalizará caso seja digitado um numero negativo no litros vendidos, deverá
finalizar a leitura e ser calculado e escrito o total vendido de gasolina e o total vendido de álcool.
*/

#include <stdio.h>

int main(void) {
  float litros_combustivel, custo_alcool, custo_gasolina, valor_total;
  int opcao;
  
  printf("\n============================================\n");
        printf("informe a quantidade de litros de combustivel desejada: ");
        scanf("%f", &litros_combustivel);

  if (litros_combustivel<0){
        printf("ERRO.. a opcao digitada NAO EH VALIDA! digite novamente\n");
    return 0;   
  }

  printf("---------------------------------------------\n");
  printf("############  menu de combustivel  #########");    
  printf("\n--------------------------------------------");
  printf("\nalcool- opcao 1:\tgasolina- opcao 2"); 
  printf("\n--------------------------------------------\n");
  printf("informe a opcao de combustivel desejada: " ); 
  scanf("%d",&opcao);
  printf("==============================================\n");

  switch(opcao){
      case 1: {
          custo_alcool = 4.15 * litros_combustivel;
            if(litros_combustivel <= 20){              
                valor_total= custo_alcool - litros_combustivel * 3/100;              
            } else {
                valor_total= custo_alcool - litros_combustivel * 5/100;
            }
            printf("voce deve pagar R$%.2f\n",valor_total);
            break;
      }
      case 2: {
          custo_gasolina = 4.65 * litros_combustivel;
            if(litros_combustivel <= 15){              
                valor_total= custo_gasolina - litros_combustivel * 3.5/100;              
            } else {
                valor_total= custo_gasolina - litros_combustivel * 6/100;
            }
            printf("voce deve pagar R$%.2f\n", valor_total);
            break;
      }
      default:
            printf("ERRO.. a opcao digitada NAO EH VALIDA! digite novamente\n");
            break;
  } 
  return 0;
}