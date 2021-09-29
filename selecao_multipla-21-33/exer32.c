#include <stdio.h>
 
int main(void){
    int A, B, C;

    printf("\ninforme o valor de A: ");
    scanf("%i",&A);
    printf("informe o valor de B: ");
    scanf("%i",&B);
    printf("informe o valor de C: ");
    scanf("%i",&C);
    
    if ((A < B) && (B < C)){
        printf("\nA ordem crescente dos valores eh: %i,%i,%i\n", A, B, C);                
    }else{
        if((A < C) && (C < B)){
            printf("\nA ordem crescente dos valores eh: %i,%i,%i\n", A, C, B); 
        }else{
            if((B < A) && (A < C))
            printf("\nA ordem crescente dos valores eh: %i,%i,%i\n", B, A, C);
            else{
                if((B < C) && (C < A)){
                    printf("\nA ordem crescente dos valores eh: %i,%i,%i\n", B, C, A);
                }else{
                    if((C < A) && (A < B))
                    printf("\nA ordem crescente dos valores eh: %i,%i,%i\n", C, A, B);
                    else{
                        printf("\nA ordem crescente dos valores eh: %i,%i,%i\n", C, B, A);
                    }
                }
            }
        }
    }
    return 0;
}
