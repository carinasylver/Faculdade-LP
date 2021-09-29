#include <stdio.h>
/* DIAGRAMA CHAPIN, PORTUGUES ESTRUTURADO e LINGUAGEM C
5.Escreva um algoritmo para ler um valor inteiro e escrever o seu
antecessor.

### DIAGRAMA CHAPIN ###
    escreva um numero inteiro
    leia o numero inteiro
    antecessor = numero inteiro - 1
    escreva antecessor

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro antecessor
    escreva um numero inteiro
    leia o numero inteiro
    antecessor = numero inteiro - 1
    escreva antecessor
fim_algoritmo
*/
int main(void) {
    int n , antec;

    printf("\nDigite um numero: ");
    scanf("%i", &n);

    printf("\nO antecessor do numero %i eh %i\n", n, antec = n - 1);
   
   return 0;
}