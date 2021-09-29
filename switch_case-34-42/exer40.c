/*40.Escreva um algoritmo que leia a idade de 2 homens e 2 mulheres
(considere que a idade dos homens será sempre diferente, assim como das mulheres).

Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.
*/
#include <stdio.h>

int main(void) {
  int h1, h2, m1, m2, soma, prod_id;

  printf("\ninforme a idade do primeiro homem: ");
  scanf("%i",&h1);
  printf("informe a idade do segundo homem: ");
  scanf("%i",&h2);

  printf("\ninforme a idade da primeira mulher: ");
  scanf("%i",&m1);
  printf("informe a idade da segunda mulher: ");
  scanf("%i",&m2);

  if(h1>h2){
        if(m1 < m2){ 
            soma = h1 + m1;
            prod_id= h2 * m2;
        } else { 
            soma = h1 + m2;
            prod_id= h2 * m1;
        }
  } else {
        if(m1< m2){
            soma= h2 + m1;
            prod_id = h1 * m2;
        } else {
            soma = h2 + m2;
            prod_id = h1 * m1;
        }        
  }
  printf("a soma das idades do homem mais velho com a mulher mais nova eh: %i e o produto eh %i", soma, prod_id);

  return 0;
}