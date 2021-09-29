#include <stdio.h>
/*
3.Escreva um algoritmo que calcule e imprima a média semestral de
um aluno que tenha obtido as seguintes notas:
8,0 na 1a avaliação e 6,0 na 2a avaliação. OBS: Escrever nas 3
representações

### PORTUGUES ESTRUTURADO ###
algoritmo
    real nota1, nota2, media
    leia nota1, nota2
    escreva nota1, nota2    
    media = (nota1 + nota2) / 2
    escreva media
fim_algoritmo
*/
int main(void) {
    float nota1, nota2, media;
    
    nota1 = 8.0;
    nota2 = 6.0;

    printf("\nSua nota da 1a avaliacao foi %.1f", nota1);
    printf("\nSua nota da 2a avaliacao foi %.1f", nota2);

    printf("\nSua media no semestre foi %.1f\n", media = (nota1 + nota2) / 2);

    return 0;
}