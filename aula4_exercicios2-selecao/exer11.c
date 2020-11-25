#include <stdio.h>
/*
11.Escreva um algoritmo para ler um valor e escrever a mensagem
‘É maior que 10 ‘ se o valor lido for maior que 10, caso contrário
escrever ‘NÃO é maior que 10’.

### DIAGRAMA CHAPIN ###
escreva num
leia num
escreva não é maior <== num > 10 ==> escreva é maior 10 

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro num
    escreva um num
    leia num
    SE  num > 10 ENTÃO escreva "É maior que 10'
    SENÃO escreva ‘NÃO é maior que 10’
fim_algoritmo
*/
int main(void){
    int num;

    printf("\nDigite um numero: ");
    scanf("%i",&num);

    if (num > 10){
        printf("Voce digitou um numero que Eh maior que 10\n");
    } 
    else 
    printf("Voce digitou um numero que NAO eh maior que 10\n");    
     
    return 0;
}