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
            printf("\tverde, ");
        }else{          
            if(B==2){
                if(C==3){
                    printf("\tIFSUL, ");
                }else{
                    printf("\tuva, ");
                    printf("pera, ");
                }
            }else{
                printf("\tpreto, ");
            }
        }   
        printf("violeta");
        printf("\n---------------------------------------\n");
    return 0; 
}  
