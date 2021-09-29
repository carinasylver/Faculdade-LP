/*39.Escreva um algoritmo que leia as medidas dos lados de um triângulo e
escreva se ele é EQUILÁTERO, ISÓSCELES ou ESCALENO.
OBS: triângulo equilátero: Possui os 3 lados iguais.
 triângulo isósceles: Possui 2 lados iguais.
 triângulo escaleno: Possui 3 lados diferentes.
 */
#include <stdio.h>

int main(void) {
  int l1,l2,l3;
 
  printf("informe o lado1 do triangulo: ");
  scanf("%i", &l1);
  printf("informe o lado2 do triangulo: ");
  scanf("%i", &l2);
  printf("informe o lado3 do triangulo: ");
  scanf("%i", &l3);

  if((l1 == l2)&&(l1==l3)){
       printf("\nO triangulo eh equilatero. Possui 3 lados iguais.\n");
    } else {
        if((l1 == l2)||(l2==l3)||(l3==l1)){
            printf("\nO triangulo eh isosceles. Possui 2 lados iguais.\n");
        } else {
            printf("\nO triangulo eh escaleno. Possui 3 lados diferentes.\n");
        }       
    } 
  return 0;
}