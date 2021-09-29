#include <stdio.h>
//Crie um programa em C que leia os elementos de uma matriz inteira de 3 x 3 e imprima outra matriz multiplicando cada elemento da primeira matriz por 2

int main(void){
int matrizM[3][3], l,c,i, matrizA, matrizB, matrizAux;
int multiplicador=2;
    //entrada de dados da matriz 3x3
    for(l=0; l<=2; l++){  //l=linha
        for(c=0; c<=2; c++){ //coluna
             
            printf("digite um valor para linha [%i] da coluna [%i] da matriz M: ", l,c);
            scanf("%i", &matrizM[l][c]);
        }
    }
    //saida de dados da matriz 3x3
    printf("\nMATRIZ 3x3 antes da multiplicacao\n"); 
    for(l=0; l<=2; l++){
        printf("|");   
        for(c=0; c<=2; c++){ 
            printf(" %d | ", matrizM[l][c]);
        }
        printf("\n");
    }
    //multiplicando
    for(l=0; l<=2; l++){   
        for(c=0; c<=2; c++){ 
            matrizM[l][c] = matrizM[l][c]* multiplicador; 
        }      
    }
    //saida de dados da matriz multiplicada
    printf("\nMatriz 3x3 MULTIPLICADA por %d\n", multiplicador); 
    for(l=0; l<=2; l++){
        printf("|");   
        for(c=0; c<=2; c++){ 
            printf(" %d | ", matrizM[l][c]);
        }
        printf("\n");
    }
    printf("\n");    
}