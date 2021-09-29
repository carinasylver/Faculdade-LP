/*5) Uma concessionária de veículos está vendendo os seus veículos com desconto.
Escreva um algoritmo que leia o valor do carro e o ano do carro e calcule e escreva o
valor do desconto que terá no veículo.
O desconto deverá ser calculado de acordo com o ano do veículo obedecendo a
Seguinte tabela:
Até 2000 - 12% de desconto
Acima de 2000 - 7% de desconto.
Após escrever o desconto oferecido acrescente uma mensagem de “Novo Cálculo (1-Sim
/ 2-Não) ? se for respondido “1” deverá retornar e executar novo cálculo, caso contrário
deverá encerrar o algoritmo. */

#include <stdio.h>

int main(void) {
  int ano_car, resp;
  float valor_car, desc, valor_total;
  
  do{
    printf("\ninforme o valor do carro: ");
    scanf("%f",&valor_car);
    printf("informe o ano do carro: ");
    scanf("%d",&ano_car);

    if(ano_car <= 2000){
        valor_total = valor_car - valor_car * 12/100;
    } else {
        valor_total = valor_car - valor_car * 7/100;       
    }
    printf("\no valor do carro com desconto eh R$%.3f:\n", valor_total);


    printf("\nnovo calculo (1-Sim 2-Nao)?");
    scanf("%d", &resp); 


  } while(resp==1);
  
  return 0;
} 