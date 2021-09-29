/*
35- Escreva um algoritmo para ler as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula:
                                N1 + N2 * 2 + N3 * 3 + Média dos exercícios
 Média de aproveitamento = ---------------------------------------------------------------
                                                7
A atribuição dos conceitos obedece a tabela abaixo:
Média de aproveitamento             Conceito
> = 9,0                                  A
> = 7,5 e < 9,0                          B
> = 6,0 e < 7,5                          C
< 6,0                                    D
*/
#include <stdio.h>

int main(void){
    int n1, n2, n3, me, ma;

    printf("informe sua 1a nota: ");
    scanf("%i", &n1);
    printf("informe sua 2a nota: ");
    scanf("%i", &n2);
    printf("informe sua 3a nota: ");
    scanf("%i", &n3);

    me = (n1 + n2 + n3)/3;     
    ma = (n1 +(n2*2) + (n3*3) + me)/7;

    if(ma>=9.0){
        printf("\nvoce obteve conceito A\n");
    } else {
        if((ma>=7.5) && (ma<9.0)){
            printf("\nvoce obteve conceito B\n");
        } else {
            if((ma>=6.0) && (ma<7.5)){
                printf("\nvoce obteve conceito C\n");
            } else {
                printf("\nvoce obteve conceito D\n");
            }
        }               
    }     
    return 0;
}