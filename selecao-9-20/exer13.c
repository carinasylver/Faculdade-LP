#include <stdio.h>
/*
13.Escreva um algoritmo que verifique a validade de uma senha
fornecida pelo usuário. A senha válida é 268474. Deve ser impresso
as seguintes mensagens:
-ACESSO PERMITIDO caso a senha seja válida.
-ACESSO NEGADO caso a senha seja inválida.

### DIAGRAMA CHAPIN ###
    escreva sua senha
    leia senha
    ACESSO NEGADO <== senha != 268474 <== SENHA VÁLIDA 268474 ==> senha == 268474 ==> ACESSO PERMITIDO

### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro senha
    escreva sua senha
    leia senha
    SE senha == 268474 ENTÃO acesso permitido
    SENÃO acesso negado
fim_algoritmo
*/

int main(void){    
    int senha;

    printf("\nInforme sua senha: ");
    scanf("%i",&senha);

    if (senha == 268474){
        printf("ACESSO PERMITIDO");
    }else
        printf("ACESSO NEGADO");
        
    return 0;
}