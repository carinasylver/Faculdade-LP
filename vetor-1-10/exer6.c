#include <stdio.h>
//ler um vetor D de 10 elementos. crie um vetor E, com todos os elementos de D(na mesma ordem). escrever todo o vetor D e logo após todo o vetor E.

int main(void) {
    int vetorD[10], vetorE[10],i;

    for(i=0 ; i<10 ; i++){
        printf("\nvetorD[%d]=", i );     
        scanf("%d",&vetorD[i]);
    }
    for(i=0; i<10; i++){
        vetorE[i]=vetorD[i] ;
    }
    printf("\n");
    for(i=0; i<10; i++){    
        printf("vetorD[%d]= %d\n", i, vetorD[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){    
        printf("vetorE[%d]= %d\n", i, vetorE[i]);
}
return 0;
}