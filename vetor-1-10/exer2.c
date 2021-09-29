#include <stdio.h>
//Preencher um vetor A de 10 elementos com os números inteiros 1,2,3,4,5,...,10. Escrever o vetor A após o seu total preenchimento.

int main(void){

    int i, vetorA[10];

    for(i=0 ; i<10 ; i++){  //entrada de dados
        vetorA[i] = i+1;
    }
    for(i=0; i<10 ; i++){  //saida de dados
        printf("\nvetorA[%d]= %d", i, vetorA[i]);
    }
    return 0;
}

    // int i, vetorA[10]={1,2,3,4,5,6,7,8,9};

    // for(i=0 ; i<10 ; i++){
    //     printf("\nv[%d] = %d", i, vetorA[i]);
    // }
    // return 0;
