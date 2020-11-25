#include <stdio.h>
/*
10.Acrescente ao exercício acima a mensagem ‘Você foi
REPROVADO! Estude mais’ caso a média calculada seja menor
que 6,0.

### DIAGRAMA CHAPIN ###
    escreva n1 
    leia n1     
    escreva n2
    leia n2
    m = (n1 + n2) / 2     
    escreva r <===  média >= 6 ===> escreva a 

### PORTUGUES ESTRUTURADO ###
algoritmo
    real nota1 nota2 media    
    escreva sua nota1
    leia nota1
    escreva sua nota2
    leia nota2
    SE média >= 6 ENTÃO escreva aprovado
    SENÃO escreva reprovado
fim_algoritmo
*/

int main(void){
    float n1, n2, m;

    printf("\nInforme sua 1a nota: ");
    scanf("%f",&n1);

    printf("Informe sua 2a nota: ");
    scanf("%f",&n2);

    m = (n1 + n2) /2;

    if (m >=6) {
    printf("Sua media foi %.1f. PARABENS! Voce foi APROVADO.\n", m);
    }     
    else
    printf("Sua media foi %.1f. Voce foi REPROVADO! Estude mais.", m);

    return 0;
}