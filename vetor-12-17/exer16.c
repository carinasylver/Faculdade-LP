#include <stdio.h>
//Ler um vetor M de 10 elementos. Troque a seguir o 1o. elemento com o 6o., o 2o. com o 7o.,etc. até o 5o. com 10o. e escreva o vetor M assim modificado.

int main(void) {
   
    int vetorM[10], i, aux;
    //Ler um vetor M de 10 elementos.
    for(i=0; i<10; i++){
        printf("vetorM[%d]= ",i);
        scanf("%d", &vetorM[i]);
    }
    //Troque a seguir o 1o. elemento com o 6o.o 2o. com o 7o.,etc. até o 5o.
    for(i=0; i<5; i++){
        aux= vetorM[i];
        vetorM[i]= vetorM[i+5];
        vetorM[i+5] = aux;
    }
    printf("\n");
    //escreva o vetor M assim modificado.
    for(i=0; i<10; i++){
        printf("\nvetorM[%d]= %d", i, vetorM[i]);
    }
 return 0;
}