#include <stdio.h>
/*
18.As maçãs custam R$ 0,30 ser forem compradas menos do que
uma dúzia, e R$ 0,25 ser forem compradas pelo menos doze.
Escreva um algoritmo que leia o número de maçãs compradas,
calcule e escreva o valor total da compra.

### DIAGRAMA CHAPIN ###
    escreva qtd de macas
    leia qtd macas
    qm < 12 = 0.30
    qm >= 12 = 0.25
    total da compra 
### PORTUGUES ESTRUTURADO ###
algoritmo
    inteiro qm
    real vt
    escreva qtd de macas
    leia qtd macas
    qm < 12 = 0.30
    qm >= 12 = 0.25
    total da compra 
fim_algoritmo
*/
int main(void){
    int qm; 
    float vp;

    printf("Informe a quantidade de macas que voce deseja: ");
    scanf("%i", &qm);

    if (qm < 12){
        vp = qm * 0.30;              
    }else 
        vp = qm * 0.25;
    printf("voce deve pagar R$%.2f", vp);
    
    return 0;
}