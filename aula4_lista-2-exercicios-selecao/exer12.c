#include <stdio.h>
/*
12.Escreva um algoritmo para ler um valor e escrever se é positivo
ou negativo. Considere o valor zero como positivo.

### DIAGRAMA CHAPIN ###
    escreva num
    leia num
    escreva negativo <== n >= 0 ==> escreva positivo

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro num
    escreva um num
    leia num
    SE o num >= 0 ENTÃO é positivo
    SENÃO negativo
fim_algoritmo
*/

int main(void){ 
    int num;

    printf("\nDigite um numero: ");
    scanf("%i",&num);

    if (num >= 0){
        printf("O numero %i eh positivo", num);
    }else
        printf("O numero %i eh negativo", num);    

    return 0;
}