#include <stdio.h>
//ler um vetor B de 10 elementos e um valor x. escreva as posições do vetor B em que aparece um valor igual a x

int main(void) {

    int vetorB[10], i, valorX;

    for(i=0; i<10; i++){
        printf("vetorB[%d]= ", i );
        scanf("%d",&vetorB[i]);    
    }
    printf("\nvalorX= ");
    scanf("%d",&valorX);  

    for(i=0; i<10; i++){
        if(valorX == vetorB[i] ){      
        printf("\nvetorB[%d] ",i);
        }
    } 
    return 0;
}