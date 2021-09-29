#include <stdio.h>
//Ler um vetor X de 10 elementos. A seguir copie todos os valores negativos de vetor X para o vetor R (sem deixar elementos vazios entre os valores copiados). Escrever o vetor R.

int main(void){

    int vetorX[10] , vetorR[10], i, c;

    //ler vetor x 10 elem
    for(i=0; i<10; i++){
        printf("vetorX[%d]=",i);
        scanf("%d", &vetorX[i]);
    }
    //copie todo negat. do vetX para vetR(sem deixar elementos vazios entre os valores copiados)
    c=0;
    for(i=0; i<10; i++){
        if(vetorX[i] <0){
            vetorR[c]= vetorX[i];
            c++;
        }
    }
     printf("\n");
     //escreva vetR
    for(i=0; i<c; i++){
        printf("\nvetorR[%d]=%d",i, vetorR[i]);
    }
    return 0;
}