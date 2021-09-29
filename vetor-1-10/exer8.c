#include <stdio.h>
//ler um vetor A de 10 elementos e um valor V. conte e escreva quantas vezes o valor V ocorre no vetor A

int main(void) {
  
  int vetorA[10], i, valorV, cont;

  for(i=0; i<10; i++){
    printf("vetorA[%d]=", i );
    scanf("%d",&vetorA[i]);    
  }
  printf("\nvalorV=");
  scanf("%d",&valorV);
  
  cont=0;
  for(i=0; i<10; i++){
    if(valorV == vetorA[i]){
        cont++;       
    }  
  }
  printf("\no valor %d aparece no vetorA %d vezes\n", valorV, cont);
  return 0;
}