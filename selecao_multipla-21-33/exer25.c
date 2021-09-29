#include <stdio.h>
int main (void){
    int A, B;

    printf("informe o valor de A: ");
    scanf("%i", &A);
    printf("informe o valor de B: ");
    scanf("%i", &B);
        printf("---------------------------------------------------------\n");
        printf("\tAmarelo,");
            if(A==1){                
                printf(" azul,");
                printf(" verde,");
                printf(" roxo,");
            }else{
                printf(" pera,");
                }if(B==1){
                     printf(" maca,");
                }else{
                    printf(" morango,");          
                }               
        printf(" uva");
        printf("\n---------------------------------------------------------\n");   
    return 0;  
}