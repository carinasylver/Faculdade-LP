#include <stdio.h>

int main(void){
    int A, B, C, soma;

    printf("\ninforme o valor de A: ");
    scanf("%i",&A);
    printf("informe o valor de B: ");
    scanf("%i",&B);
    printf("informe o valor de C: ");
    scanf("%i",&C);

    if((A < B) && (A < C)){
        soma = B + C;
    }else{
        if((B < A) && (B < C)){
            soma = A + C;
        }else{
            soma = A + B;
        }
    }
    printf("\n%d A soma dos dois valores maiores eh:", soma);    
    return 0;
}
