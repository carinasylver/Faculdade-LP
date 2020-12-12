#include <stdio.h>
/*  DIAGRAMA CHAPIN, PORTUGUES ESTRUTURADO e LINGUAGEM C

1. Escreva um algoritmo que armazene o valor 10 em uma variável
A e o valor 20 em uma variável B. A seguir (utilizando apenas
atribuições entre variáveis) troque os seus conteúdos fazendo com
que o valor que está em A passe para B e vice-versa. Ao final
escrever os valores que ficaram armazenados nas variáveis.

### DIAGRAMA CHAPIN ###
    A <-- 10 
    B <-- 20
    leia A,B
    escreva A,B
    aux <--A
    A <-- B
    B <-- aux
    escreva A, B

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro A, B, aux
    leia valor A, B     
    escreva A, B
    aux <-- A
    A <-- B
    B <-- aux
    escreva A, B    
fim_algoritmo
*/
int main(void) {
    int A, B, aux;

    A = 10;
    B = 20;
    printf( "O valor de A eh %i e o valor de B eh %i\n" , A , B); 
    aux = A; 
    A = B;    
    B = aux;   
    printf( "O valor de A eh %i e o valor de B eh %i\n", A, B); 

    return 0;
}