#include <stdio.h>
/*
14.Escreva um algoritmo para ler o ano de nascimento de uma
pessoa e escrever uma mensagem que diga se ela poderá ou não
votar este ano (não é necessário considerar o mês em que ela
nasceu).

### DIAGRAMA CHAPIN ###
    escreva ano nascimento
    leia ano nascimento
    idade_voto = 2020 - ano_nasc 
    voto NAO obrigatorio <-- idade_voto > 18 --> voto OBRIGATORIO

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro ano_nsc, idade_voto
    escreva ano nascimento
    leia ano nascimento
    idade_voto = 2020 - ano_nasc
    SE idade_voto > 18 ENTÃO voto OBRIGATORIO
    SENÃO voto voto NÃO obrigatorio
fim_algoritmo
*/
int main(void){
    int ano_nasc, idade_voto;

    printf("\nQual o ano do seu nascimento: ");
    scanf("%i",&ano_nasc);

    idade_voto = 2020 - ano_nasc;

    if (idade_voto > 18){
        printf("\nVoce esta com %i anos. Seu voto eh OBRIGATORIO\n", idade_voto);
    }
    else
    printf("\nVoce esta com %i anos. Seu voto eh OBRIGATORIO a partir dos 18 anos\n", idade_voto);

    return 0;
}
