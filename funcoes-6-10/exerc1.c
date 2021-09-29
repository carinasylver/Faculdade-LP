#include <stdio.h>
#include <stdlib.h>

//Escreva uma função potencia(base, expoente) que, quando chamada, retorna baseexpoente. Por exemplo, potencia(3, 4) deve retornar 81. Assuma que expoente é um inteiro maior ou igual a 1.

int potencia(base,expoente);

int main(void){
    int base, expoente,resultado;

    printf("informe a base: ");
    scanf("%d",&base);
    printf("informe o expoente: ");
    scanf("%d",&expoente);

    resultado= potencia(base,expoente);
    printf("%d elevado a %d eh = %d\n", base, expoente, resultado);
  return 0;
}
int potencia(int base, int expoente){
  int num, i;
  num=1;
  while(i< expoente){
    num *= base;
    i++;
   }
   return num;
}