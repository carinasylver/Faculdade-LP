#include <stdio.h>
//Crie um programa em C que leia os elementos de uma matriz inteira de 3 x 3 e imprima todos os elementos da matriz, exceto os elementos da diagonal principal.

int main(void){

int matrizM[3][3], l,c;
    //entrada de dados da matriz 3x3
    for(l=0; l<=2; l++){  //l=linha
        for(c=0; c<=2; c++){ //c=coluna
            printf("digite um valor para linha[%i]coluna [%i] da matriz M: ", l,c);
            scanf("%i", &matrizM[l][c]);
        }
    }
    //saida de dados da matriz 3x3
    printf("\n===MATRIZ 3x3===\n"); 
    for(l=0; l<=2; l++){
        printf("|");   
        for(c=0; c<=2; c++){ 
            printf(" %d | ", matrizM[l][c]);
        }
        printf("\n");
    }
    printf("================\n"); 
     
    //imprima todos os elementos da matriz, exceto os elementos da diagonal principal
    printf("\nMATRIZ SEM A DIAGONAL PRINCIPAL\n");
    for (l=0; l<=2; l++){
        printf("|");
        for (c=0;c<=2;c++){ 
            if (l != c)
        printf(" %d | ", matrizM[l][c]);
        printf("\t");
    }
    printf("\n");
 } 
    
}