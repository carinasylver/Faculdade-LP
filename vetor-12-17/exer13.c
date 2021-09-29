#include <stdio.h>
//Ler 2 vetores: R de 5 elementos e S de 10 elementos. Gere um vetor X de 15 elementos cuja as 5 primeiras posições contenha os elementos de R e as 10 últimas posições os elementos de S. Escrever o vetor X.

int main(void) {

    int vetorR[5], vetorS[10], vetorX[15], i;

    // R de 5 elementos
    for(i=0 ; i<5; i++){
        printf("vetorR[%d]= ",i);
        scanf("%d", &vetorR[i]);
    }
    printf("\n");
    // S de 10 elementos
    for(i=0 ; i<10; i++){
        printf("vetorS[%d]= ",i);
        scanf("%d", &vetorS[i]);
    }    
    //cuja as 5 primeiras posições contenha os elementos de R
    for(i=0 ; i<5; i++){
        vetorX[i]=vetorR[i];              
    }
    //10 últimas posições os elementos de S.
    for(i=0 ; i<10; i++){
        vetorX[i+5] = vetorS[i]; 
    }
    //Gere um vetor X de 15 elementos
    printf("\n");   
    for(i=0 ; i<15; i++){        
        printf("\nvetorX[%d]= %d",i, vetorX[i]);       
    }
  return 0;
}