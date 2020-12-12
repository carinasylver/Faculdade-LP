#include <stdio.h>
/* DIAGRAMA CHAPIN, PORTUGUES ESTRUTURADO e LINGUAGEM C
7.Escreva um algoritmo para ler uma temperatura em graus Celsius,
calcular e escrever o valor correspondente em graus Fahrenheit.

### DIAGRAMA CHAPIN ###
    escreva a temperatura em celsius
    leia temperatura em celsius
    f = c * 9/5 + 32
    escreva a temperatura em fahrenheit f

### PORTUGUES ESTRUTURADO ###
algoritmo
    escreva a temperatura em celsius
    leia temperatura em celsius
    f = c * 9/5 + 32
    escreva a temperatura em fahrenheit
fim_algoritmo
*/
int main(void){
    float c , f ;

    printf("\ninforme a temperatura em celsius: ");
    scanf("%f", &c ); 

    printf("\n%.0f graus C corresponde a %.0f graus F\n", c, f = c * 9/5 + 32);

    return 0;
}