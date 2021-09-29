/*
38- Um posto está vendendo combustíveis com a seguinte tabela de descontos:
**Álcool:** Até 20 litros, desconto de 3 % por litro. Acima de 20 litros, desconto de 5 % por litro. 

**Gasolina:** até 15 litros, desconto de 3,5 % por litro. Acima de 15 litros, desconto de 6 % por litro

Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: 1-álcool 2-Gasolina), calcule e imprima o valor a ser pago pelo cliente, sabendo-se que o preço da gasolina é de R$ 4,53 o litro e o álcool R$ 4,03.
*/
#include <stdio.h>

int main(void) {
  float lt, d, prc_a, prc_g,vt;
  int opcao;
  printf("\n============================================\n");
  printf("informe o qtd de litros desejada: ");
  scanf("%f", &lt);
  printf("---------------------------------------------\n");
  printf("############  menu de combustivel  #########");    
  printf("\n--------------------------------------------");
  printf("\nalcool- opcao 1:\tgasolina- opcao 2"); 
  printf("\n--------------------------------------------\n");
  printf("informe a opcao de combustivel desejada: " ); 
  scanf("%i",&opcao);
  printf("==============================================\n");

  switch(opcao){
      case 1: {
          prc_a = 4.03 * lt;
            if(lt <= 20){              
                vt= prc_a -  lt * 3/100;              
            } else {
                vt= prc_a -  lt * 5/100;
            }
            printf("voce deve pagar R$%.2f\n", vt);
            break;
      }
      case 2: {
          prc_g = 4.53 * lt;
            if(lt <= 15){              
                vt= prc_g -  lt * 3.5/100;              
            } else {
                vt= prc_g -  lt * 6/100;
            }
            printf("voce deve pagar R$%.2f\n", vt);
            break;
      }
      default:
            printf("ERRO.. a opcao digitada NAO EH VALIDA! digite novamente\n");
            break;
  } 
  return 0;
}