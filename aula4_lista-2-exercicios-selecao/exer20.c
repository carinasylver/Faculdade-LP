#include <stdio.h>
/*
20.Escreva um algoritmo para ler 2 valores (considere que não
serão lidos valores iguais) e escrevê-los em ordem crescente.

### DIAGRAMA CHAPIN ###
escreva A,B
leia A,B
if num = A<B => escreva ordem A,B 
else num= A<B => escreva ordem B,A

### PORTUGUES ESTRUTURADO ###
algoritmo
    escreva A,B
    leia A,B
    SE A < B ENTÃO A,B => escreva ordem A,B 
    SENAO B,A => escreva ordem B,A
fim_algoritmo
*/
int main(void){
    int A, B;

    printf("Digite o valor de A: ");
    scanf("%i", &A);
    printf("Digite o valor de B: ");
    scanf("%i", &B);    

    if (A < B){
        printf("A ordem crescente eh %i e %i", A, B);
    }else
        printf("A ordem crescente eh %i e %i", B, A);    

    return 0;
}