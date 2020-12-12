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
            if(B==1){
                printf("\tA, ");
                printf("B, ");
            }
        }
        printf("C, ");
        if (C==1){
            printf("D, ");
            printf("E ");       
        }else{
            printf("F");
        } 
        printf("\n---------------------------------------\n");     
    return 0;
}


