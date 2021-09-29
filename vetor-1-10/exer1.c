#include <stdio.h>
//preencher um vetor x de 10 elementos com o valor inteiro 30. escrever o vetor x, apos seu total preenchimento

int main(void) {
    int vetorx[10], i;

    for(i=0; i<10; i++){ 
        vetorx[i]=30; 
    }    
    for(i=0; i<10; i++){
        printf("\nx[%d]= %d", i, vetorx[i] ); 
    }      
return 0;
}
// outra maneira de fazer, atribuindo valores ao vetor

// int main(void) {
// int vetorx[10]={30,30,30,30,30,30,30,30,30,30}, i;

// for(i=0; i<10; i++){
//     printf("x[%d]= %d\n", i, vetorx[i] );     
// }      
//   return 0;
// }
