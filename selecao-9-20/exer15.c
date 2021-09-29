#include <stdio.h>
/*
15.Escreva um algoritmo para ler 2 valores (considere que não
serão lidos valores iguais) e escrever o maior deles.

### DIAGRAMA CHAPIN ###
    escreva x, y
    leia x, y
    escreva valor_maior

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro x, y 
    escreva x , y
    leia x , y
    escreva o valor_maior
fim_algoritmo
*/
int main(void){
    int A, B;

    printf("\nInforme o valor de A: ");
    scanf("%i",&A);
    printf("Informe o valor de B: ");
    scanf("%i",&B);

    if (A > B){
        printf("O valor maior eh %i\n", A);
    }else  
        printf("O valor maior eh %i\n", B);      
    
    return 0;
}
