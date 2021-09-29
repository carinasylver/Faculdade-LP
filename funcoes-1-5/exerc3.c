#include <stdio.h>
#include <stdlib.h>
//Faça uma função que recebe um valor inteiro e verifica se o valor é par. A função deve retornar 1 se o número for par e 0 se for ímpar.

int verificaParImpar(num);

int main(void){

    int num, parImpar, resultado;

    printf("\ndigite um numero: ");
    scanf("%i", &num);

    resultado=verificaParImpar(num);

    printf("\n%d\n", resultado); 
    //printf("\n%d\n", verificaParImpar(num));

   return 0;    
}
int verificaParImpar(int num){
    int parImpar, resultado;

    parImpar = num % 2; 
    
    if (parImpar == 0){ 
        return 1;
    } else {
        return 0;
    }      
} 



