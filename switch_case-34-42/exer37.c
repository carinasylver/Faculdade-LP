/*
37- Escreva um algoritmo para ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe uma comissão de 3 % sobre o total das vendas até R$ 1500,00 mais 5 % sobre o que ultrapassa este valor calcular e escrever o seu salário total.
*/
#include <stdio.h>

int main(void){
    float sal, st, valor_v;

    printf("\ninforme o seu salario fixo: ");
    scanf("%f", &sal);
    printf("informe o valor total de suas vendas: ");
    scanf("%f", &valor_v);
    
    if(valor_v <= 1500){
        st =  sal + valor_v * 3/100;       
    } else {
        st =  sal + (valor_v * 3/100) + (valor_v - 1500) * 5/100;        
    }
    printf("\nseu salario total eh R$%.2f\n", st);
    return 0;
}
