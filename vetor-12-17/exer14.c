#include <stdio.h>
//Ler um vetor Q de 10 posições (aceitar somente números positivos). Escreva a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor

int main(void) {

    int vetorQ[10],i, maior=0, posicao;

    //Ler um vetor Q de 10 posições (aceitar somente números positivos)        
    for(i=0; i<10; i++){
        do{
            printf("vetorQ[%d]=",i);
            scanf("%d", &vetorQ[i]);
        } while(vetorQ[i]<=0); //enquanto for negativo repete ate informar num +  
    }
    //Escreva a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor
    maior=0;
    for(i=0; i<10; i++)
        if(vetorQ[i] > maior){
        maior = vetorQ[i];
        posicao= i;
    }
    printf("\no maior valor eh %d\nfoi encontrado na posicao[%d]", maior, posicao);     
  return 0;
}
