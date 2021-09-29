#include <stdio.h>

int main(void){
    int A, B, C;

    printf("\ninforme o valor de A: ");
    scanf("%i",&A);
    printf("informe o valor de B: ");
    scanf("%i",&B);
    printf("informe o valor de C: ");
    scanf("%i",&C);

    if(A > B){
        if(A > C){
             printf("\n%d  eh o  maior\n", A);
        }else{
            printf("\n%d  eh o  maior\n", C);
        }
    }else{
        if(B > C){
            printf("\n%d  eh o  maior\n", B);
        }else{
            printf("\n%d  eh o  maior\n", C);
        }
    }          
    return 0;
}