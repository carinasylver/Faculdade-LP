#include <stdio.h>

int main(void){
    int A,B,C;

    printf("\ninforme a medida de A: ");
    scanf("%i",&A);
    printf("informe a medida de B: ");
    scanf("%i",&B);
    printf("informe a medida do lado C: ");
    scanf("%i",&C);

    if((A<B+C) && (B<A+C) && (C<A+B)){
        printf("\nformam um triangulo\n");
    }else{
        printf("\nNao formam um triangulo\n");
    }
    return 0;
}    
   