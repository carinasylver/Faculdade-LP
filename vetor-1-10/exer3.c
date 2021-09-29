#include <stdio.h>
//Preencher um vetor B de 10 elementos com 1 se o indice do elemento for impar, e 0 se for par. escrever o vetor B apos o seu total preenchimento

int main(void){

    int vetorB[10], i;

    for(i=0 ; i<10 ; i++){  
        if(i%2 == 0){
            vetorB[i]= 0; //numero par
        }
        else {
            vetorB[i]= 1; //numero impar
        }
        printf("\nvetorB[%d]= %d", i, vetorB[i]);
    }   
    return 0;  
}