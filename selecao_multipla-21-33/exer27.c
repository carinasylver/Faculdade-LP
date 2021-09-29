#include <stdio.h>

int main(void){
    int A, B, C;

    printf("\ninforme o valor de A: ");
    scanf("%i",&A);
    printf("informe o valor de B: ");
    scanf("%i",&B);
    printf("informe o valor de C: ");
    scanf("%i",&C);

    printf("\n---------------------------------------\n");
    if(A==1){
        printf("\tmorango, ");
        if(B==1){
            if(C==1){
                printf("pera, ");
            }else{
                printf("abacate, ");
            }
        }
    }
    printf("limao");
    printf("\n---------------------------------------\n");
    return 0;
}