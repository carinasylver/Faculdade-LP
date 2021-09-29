/*
36- Elabore um algoritmo que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
infantil A : 5 a 7 anos
infantil B : 8 a 10 anos
juvenil A : 11 a 13 anos
juvenil B : 14 a 17 anos
sênior : maiores de 18 anos
*/
#include <stdio.h>

int main(void){
    int idade;

    printf("\ninforme sua idade: ");
    scanf("%i", &idade);

    if((idade>=5) && (idade<7)){
        printf("\nsua categoria eh infantil A\n");
    } else{
        if((idade>=8) && (idade<10)){
            printf("\nsua categoria eh infantil B\n");
        } else{
            if((idade>=11) && (idade<13)){
                printf("\nsua categoria eh juvenil A\n");
            } else {
                if((idade>=14) && (idade<17)){
                    printf("\nsua categoria eh juvenil B\n");
                } else {
                    printf("\nsua categoria eh senior\n");                    
                }
            }
        }
    }    
    return 0;
}