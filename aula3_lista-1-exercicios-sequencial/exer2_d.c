#include <stdio.h>
/* DIAGRAMA CHAPIN, PORTUGUES ESTRUTURADO e LINGUAGEM C
### DIAGRAMA DE CHAPIN ###
    A <-- 10
    B <-- A + 1
    A <-- B + 1
    B <-- A + 1
    escreva A
    A <-- B + 1
    escreva A

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro A, B
    leia A
    B <-- A + 1
    A <-- B + 1
    B <-- A + 1
    escreva A
    A <-- B + 1
    escreva A   
fim_algoritmo
*/
int main(void){
    int A, B ;
    A= 10;
    B = A + 1;
    A = B + 1;
    B = A + 1;

    printf ("\nO valor de A eh %i\n", A);
    
    A = B + 1;

    printf("O valor final de A eh %i\n", A);

    return 0;
}
