#include <stdio.h> 
//ler um vetor z de 10 elementos. crie um vetor w, com todos os elementos de z(na ordem inversa). escrever o vetor w
int main(void) {
  
    int vetorZ[10], vetorW[10], i;

    for(i=0 ; i<10 ; i++){
        printf("vetorZ[%d]= ", i );     
        scanf("%d",&vetorZ[i]);
    }
    for(i=0 ; i<10 ; i++){
        vetorW[i]= vetorZ[9-i];
    }
    for(i=0 ; i<10 ; i++){
        printf("\nvetorW[%d]= %d", i, vetorW[i] );  
    }
    return 0;
}