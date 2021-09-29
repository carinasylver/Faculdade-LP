#include <stdio.h>
//. Ler um vetor S de 10 elementos. Troque a seguir o 1o. elemento com o último, o 2o com o penúltimo, etc. até o 5o. com o 6o. e escreva o vetor S assim modificado.

int main(void) {
  //Ler um vetor S de 10 elementos.
  int vetorS[10],i, aux;

  //ler um vetor S de 10 elementos.
  for(i=0; i<10; i++){
    printf("vetorS[%d]= ",i);
    scanf("%d", &vetorS[i]);
  }
  //Troque a seguir o 1o. elemento com o último, o 2o com o penúltimo, etc. até o 5o. com o 6o
  for(i=0; i<5; i++){
    aux = vetorS[i];
    vetorS[i] =  vetorS[9-i];
    vetorS[9-i] = aux;     
  }
  //escreva o vetor S assim modificado.
  for(i=0; i<10; i++){
      printf("\nvetorS[%d]= %d ", i,vetorS[i]);
  } 
  return 0;
}