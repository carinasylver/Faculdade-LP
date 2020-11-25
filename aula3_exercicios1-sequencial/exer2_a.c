#include <stdio.h>
/*
### DIAGRAMA CHAPIN ###
    A <-- 10
    B <-- 20
    escreva B
    B <-- 5
    escreva A,B

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro A, B, aux
    leia A, B
    escreva B
    aux <--B  
    B <--5
    escreva A, B      
fim_algoritmo
*/

int main(void){
    int A, B, aux;
    A = 10;
    B = 20;
    
    printf("\nO valor de B e %i \n", B); 

    aux = B;
    B = 5; 
    
    printf("O valor de A eh %i e B eh %i\n", A, B);

    return 0; 
}