#include <stdio.h>
#include <stdlib.h>
//Faça uma função que recebe um valor inteiro e verifica se o valor é positivo, negativo ou zero. A função deve retornar 1 para valores positivos, -1 para negativos e 0 para o valor 0.

int verificaNumero(num);

int main(void){

    int num, resultado;

    printf("\ndigite um numero: ");
    scanf("%i", &num);

    resultado=verificaNumero(num);

    printf("\n%d\n ", resultado); 
    //printf("\n%d\n", verificaNumero(numero));

   return 0;     
}
int verificaNumero(int num){
    int resultado;
    
    if (num==0){        
        return 0;
    } else{
        if(num > 0){
            return 1;
        } else {
            return -1;
        }
    }        
} 