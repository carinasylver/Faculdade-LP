#include <stdio.h>
/*
6.Escreva um algoritmo para ler uma temperatura em graus
Fahrenheit, calcular e escrever o valor correspondente em graus
Celsius.      c = ( f - 32) * 5/9

### DIAGRAMA CHAPIN ###
    escreva a temperatura em fahrenheit
    leia temperatura em fahrenheit
    c = ( f - 32) * 5/9
    escreva a temperatura em celsius

### PORTUGUES ESTRUTURADO ###
algoritmo
    real fahrenheit, celsius
    escreva a temperatura em fahrenheit
    leia temperatura em fahrenheit
    c = ( f - 32) * 5/9
    escreva a temperatura em celsius
fim_algoritmo
*/
int main(void){
    float f, c;    

    printf("\nInforme a temperatura em fahrenheit: ");
    scanf("%f", &f);

    printf("%.0f graus F corresponde a %.0f graus C \n", f, c = ( f - 32) * 5/9);

    return 0;
}