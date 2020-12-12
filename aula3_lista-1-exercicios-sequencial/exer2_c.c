#include <stdio.h>
/* DIAGRAMA CHAPIN, PORTUGUES ESTRUTURADO e LINGUAGEM C
### DIAGRAMA DE CHAPIN ###
    A <-- 10
    B <-- 20
    C <-- A
    B <-- C
    A <-- B
    escreva A,B,C

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro A, B, C
    leia A, B
    C <-- A
    aux <-- B
    B <-- C
    A <-- B
fim_algoritmo
*/
int main(void) {
    int A,B,C, aux;

    A = 10;
    B = 20;
    C = A;
    aux = B;
    B = C;    
    A = B;

    printf("\nO valor de A:%i , B:%i e C:%i\n", A,B,C);

    return 0;
}