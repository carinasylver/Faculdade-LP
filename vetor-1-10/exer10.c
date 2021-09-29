#include <stdio.h>
// ler um vetor C de 10 números inteiros positivos, e uma variável A que contenha um valor também positivo. escrever a mensagem ACHEI se o valor armazenado em A estiver no vetor C, e NÂO ACHEI caso contrario. a mensagem devera aparecer somente uma vez

int main(void) { 

    int vetorC[10], A, i, achei;

    for(i=0 ; i<4 ; i++){
        printf("vetorC[%d]= ", i );
        scanf("%d", &vetorC[i]);
    }
    printf("\ninforme um valor(positivo) para A :");
    scanf("%d", &A);

    achei=0;
    for(i=0 ; i<4 ; i++){     
        if(A == vetorC[i] ){
            achei++;
        }    
    } 
    if(achei>0){
        printf("\nACHEI !!");
    } else {
        printf("NAO ACHEI\n");
    }
    return 0;
    }