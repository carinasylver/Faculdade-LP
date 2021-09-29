#include <stdio.h>
//Ler uma Matriz M 5 x 5 , calcular e escrever as seguintes somas:a) Da linha 4 de M;b) Da coluna 2 de M;c) Da diagonal principal;d) Da diagonal secundária;e) De todos os elementos da matriz

int main(void){

int matrizM[5][5], l, c, soma, i;
    //Ler uma Matriz M 5 x 5 
    for(l=0; l<=4; l++){  //l=linha
        for(c=0; c<=4; c++){ //c=coluna
            printf("digite um valor para linha [%i] coluna [%i] da matriz M: ", l,c);
            scanf("%i", &matrizM[l][c]);
        }
    }
    //saida de dados da matriz 5x5
    printf("\n===========MATRIZ 5x5================\n"); 
    for(l=0; l<=4; l++){
        printf("  | ");   
        for(c=0; c<=4; c++){ 
            printf("  %d  |",matrizM[l][c]);
        }
        printf("\n");
    }
    printf("=====================================\n");  
    //somas da linha 4 de M
    soma=0;
    for(i=0; i<=4; i++){ //l=linha
        soma = soma + matrizM[3][i]; //linha1 comeca em 0
    }
    printf("\nsoma da linha 4 de M: %d", soma); 
    
    //somas da coluna 2 de M
    soma=0;
    for(i=0; i<=4; i++){ //l=linha
        soma = soma + matrizM[i][1];
    }
    printf("\nsoma da coluna 2 de M: %d", soma);

    //soma da diagonal principal
    soma=0;
    for(i=0; i<=4; i++){ //exibicao das posiçoes da diagonal principal        
        soma = soma + matrizM[i][i]; //num dos indices sao iguais para l e c        
    }
    printf("\nvalor diagonal principal: %i", soma);

    //soma da diagonal secundaria
    soma=0;
    for(i=0; i<=4; i++){ //exibicao das posiçoes da diagonal principal        
        soma = soma + matrizM[i][4-i];        
    }
    printf("\nvalor diagonal secundaria: %i", soma);

    //soma de todos os elementos da matriz
    soma=0;
    for(l=0; l<5; l++){ //
        for(c=0; c<5; c++){
            soma = soma + matrizM[l][c];                    
        }                                                
    }printf("\nsoma de todos os elementos da matriz: %i",soma);    

 }       



   