#include <stdio.h>
/*
16.Tendo como entrada a altura e o sexo de uma pessoa (1 -
homem 2 - mulheres) , construa um algoritmo que calcule e
imprima seu peso ideal, utilizando as seguintes fórmulas:
 - para homens: (72.7 * h)-58
 - para mulheres: (62.1*h)-44.7

 ### DIAGRAMA CHAPIN ###
    escreva altura
    leia altura
    escreva sexo
    leia sexo
    h = (72.7 * h)-58
    m = (62.1*h)-44.7
    escreva peso ideal

### PORTUGUES ESTRUTURADO ###
algoritmo
    real altura, sexo, pesoideal    
    escreva sua altura
    leia altura
    escreva seu sexo
    leia sexo
    h = (72.7 * h)-58
    m = (62.1*h)-44.7
    escreva peso ideal
fim_algoritmo
*/
int main(void){
    float altura, sexo, pesoideal;
        
    printf("\nInforme sua altura: ");
    scanf("%f", &altura); 
    printf("Informe seu sexo (1 para Homem - 2 para mulher): ");
    scanf("%f", &sexo);

    if (sexo == 1){
        pesoideal = (72.7 * altura)- 58;                
    }else{
        pesoideal = ( 62.1* altura)- 44.7;         
    }
    printf("Seu peso ideal eh: %.1f Kg ", pesoideal);

    return 0; 
}