#include <stdio.h>

int main(void){
    int A;

    printf("\ninforme o valor de A: ");
    scanf("%i", &A);
     /*
    if (A>=30){
       printf("\nvoce esta na faixa cheia\n");

    } else {
        printf("\nvoce esta na faixa tracejada\n");
    }
     */
      if (((A<10) && (A>20)) || (A<30)) {
       printf("\nvoce esta na faixa tracejada\n");

    } else {
        printf("\nvoce esta na faixa cheia\n");
    }
    return 0;
}
