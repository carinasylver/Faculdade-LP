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
    int x, y;

    printf("\nInforme o valor de x: ");
    scanf("%i",&x);
    printf("Informe o valor de y: ");
    scanf("%i",&y);

    if (x > y){
        printf("O valor maior eh %i\n", x);
    }
    else  
        printf("O valor maior eh %i\n", y);      
    
    return 0;
}
