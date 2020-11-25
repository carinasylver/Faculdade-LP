#include <stdio.h>
/* 
### DIAGRAMA DE CHAPIN ###
    A <-- 10
    C <-- A + B
    B <-- 20   -> vai dar erro no código deve ser o 2º passo do algoritmo
    escreva C

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro A, B, C
    A <-- 10
    C <-- A + B
    B <-- 20  ->  deve ser o 2º passo do algoritmo e não o 3º
    escreva C
fim_algoritmo
*/

int main(void){
    int A, B, C ;

    A = 10;
    B = 20;
    C = A + B;    

    printf("\nO valor de C eh %i\n", C);

    return 0;
}
