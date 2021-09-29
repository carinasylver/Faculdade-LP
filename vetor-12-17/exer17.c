#include <stdio.h>
//Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor X de 10 elementos contendo uma aposta. A seguir imprima quantos pontos fez o apostador

int main(void) {
  
  int vetorR[5], vetorX[10], i, c, a;
  //Ler um vetor R de 5 elementos contendo o gabarito da LOTO.
  for(i=0 ; i<5; i++){
    escreva("vetorR[%d]= ", i);
    leia("%d", &vetorR[i]);
  } 
  printf("\n");
  // ler um vetor X de 10 elementos contendo uma aposta
  for(i=0 ; i<10; i++){
    printf("vetorX[%d]= ", i);
    scanf("%d", &vetorX[i]);
  }
  //pontos fez o apostador
  c=0;
  for(i=0 ; i<5; i++){
    for(a=0 ; a<10; a++){
        if(vetorR[i] == vetorX[a])
        c++;
    }   
  }
  //imprima quantos pontos fez o apostador
    printf("\no apostador fez %d pontos", c);
      
  return 0;
}