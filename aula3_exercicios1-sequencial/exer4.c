#include <stdio.h>
#define PI 3.14 /*constantes são definidas em letras maiusculas*/
/*
4.Escreva um algoritmo para ler o raio de um círculo, calcular e
escrever a sua área.

### DIAGRAMA CHAPIN ###
    escreva o  valor do raio do circulo
    leia o raio do circulo
    a =  3.14 * (r * r) 
    escreva area 

### PORTUGUES ESTRUTURADO ###
algoritmo
    real  raio, circulo        
    escreva o  valor do raio do circulo
    leia o raio do circulo
    a =  pi * (r * r) 
    escreva area
fim_algoritmo
*/
int main(void){
    float r, a;  

    printf("\nInforme o valor do raio do circulo: ");
    scanf("%f", &r);  

    printf("\nA area do circulo eh %.2f: \n", PI * (r * r));

    return 0;
}