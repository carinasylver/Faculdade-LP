#include <stdio.h>
//ler um vetor c de 10 elementos inteiros, trocar todos os valores negativos do vetor c por 0. escrever o vetor c modificado

int main(void) {
  
  int vetorC[10], i;
  
    //entrada de dados
    for(i=0; i<10 ; i++){
      printf("vetorC[%d]=", i);
      scanf("%d", &vetorC[i]);
    }
    for(i=0; i<10 ; i++){
      if(vetorC[i]<0){
        vetorC[i]=0;
      } 
    } 
    printf("\n"); 
    //saida de dados      
    for(i=0; i<10 ; i++){
      printf("vetorC[%d]= %d\n", i, vetorC[i]);
    }
  
    return 0;
}  
// outra forma de fazer

//   int c[10]={-3,5,4,7,0,-9,5,4,-7,0},i;
//   for(i=0; i<10 ; i++){
//     if(c[i]<0){
//         c[i]=0;
//     } 
//   }        
//   for(i=0; i<10 ; i++){
//     printf("c[%d]= %d\n", i, c[i]);
//   }    
