#include <stdio.h>
/* PORTUGUES ESTRUTURADO e LINGUAGEM C

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro A, B aux
    leia A, B
    C <-- A + B
    escreva C
    aux = B
    B <-- 10   
    escreva B, C
    C <-- A + B
    escreva A, B, C
fim_algoritmo    
*/
int main(void) {  
    int A, B, C, aux;

    A = 30;
    B = 20 ;    
    C = A + B;
    printf("\nO valor de C eh %i\n", C);

    aux = B;
    B = 10;
    printf("O valor de B e %i eh C e %i\n", B, C);

    C = A + B;
    printf("O Valor de A:%i de B:%i de C:%i\n", A,B,C);

    return 0;
}