#include <stdio.h>
/*
9. Escreva um algoritmo para ler as notas das duas avaliações de
um aluno no semestre, calcular e escrever a média semestral e a
seguinte mensagem: ‘PARABÉNS! Você foi aprovado’ somente se o
aluno foi aprovado.

### DIAGRAMA CHAPIN ###
    escreva n1 
    leia n1     
    escreva n2
    leia n2
    m = (n1 + n2) / 2    
    escreva aprovado 

### PORTUGUES ESTRUTURADO ###
algoritmo
    real nota 1 nota2 media
    escreva sua nota1
    leia nota1
    escreva sua nota2
    leia nota2
    media = (nota1 + nota2) / 2
    escreva aprovado
fim_algoritmo
*/

int main(void){
    float n1, n2, m;

    printf("\nInforme sua 1a nota: ");
    scanf("%f",&n1);

    printf("Informe sua 2a nota: ");
    scanf("%f",&n2);

    printf("Sua media foi %.1f\n", m = (n1 + n2) /2);
    printf("PARABENS! Voce foi aprovado");

    return 0;
}