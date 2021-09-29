#include <stdio.h>

int main(void){
    int A,B;
    
    printf("\ninforme o valor de A: ");
    scanf("%i", &A);
   /*
    if (A<0){
        printf("\nvoce esta na faixa cheia\n");
    } else {
        printf("\nvoce esta na faixa tracejada\n");
    }
    */
    if(A>0){
        printf("\nvoce esta na faixa tracejada\n");
    } else {
        printf("\nvoce esta na faixa cheia\n");
    }
    return 0;
}