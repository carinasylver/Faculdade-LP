#include <stdio.h>

int main(void){
    int A, B, C, D, E;

    printf("\ninforme o valor de A: ");
    scanf("%i",&A);
    printf("informe o valor de B: ");
    scanf("%i",&B);
    printf("informe o valor de C: ");
    scanf("%i",&C);
    printf("informe o valor de D: ");
    scanf("%i",&D);
    printf("informe o valor de E: ");
    scanf("%i",&E);
    
        printf("\n------------------------------------------------------\n");
        if(A==1){
            printf("\tamarelo, ");
            if(B==1){
                printf("azul, ");
            }
            printf("preto, ");

            if(D==1){
                printf("verde, ");
            }else{
                printf("violeta, ");
            }
        }else{
            if(C==1){
                printf("\tvermelho, ");
            }
            if(E==1){
                printf("laranja, ");
                printf("cinza, ");
            }
        }
        printf("branco");
        printf("\n------------------------------------------------------\n");
    return 0;
}