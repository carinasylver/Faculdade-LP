/*48.Escreva um algoritmo que imprima os números de 1(inclusive) a
10 (inclusive) em ordem crescente.*/

#include <stdio.h>

int main(void) {
  int num;  

  num=0; 
  while(num<10){
    num++;    
    printf("%i\n", num);
    
  }
/*
for (num=1; num<10; num++ ){
    printf("%i\n", num);
}
*/
  return 0;
}