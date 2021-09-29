#include <stdio.h>
/* DIAGRAMA CHAPIN, PORTUGUES ESTRUTURADO e LINGUAGEM C
8.A empresa Vestual resolveu fazer uma promoção especial e
conceder um desconto de 30 % sobre o preço de venda de todo seu
estoque. Escreva um algoritmo que leia o preço de venda antes da
promoção e calcule quanto deve ser o preço promocional.

### DIAGRAMA CHAPIN ###
    escreva o precoVenda
    leia precoVenda
    precoPromocional=  precoVenda - (precoVenda * 30/100)
    escreva precoPromocional

### PORTUGUES ESTRUTURADO ###
algoritmo
    real precoPromocional
    escreva o preco da venda
    leia preco da venda
    precoPromocional=  precoVenda - (precoVenda * 30/100)
    escreva precoPromocional
fim_algoritmo
*/
int main(void){   
    float prc_vend , prc_pro;

    printf("\n informe o preco da venda: ");
    scanf("%f", &prc_vend);

    printf(" Voce ganhou 30%% de desconto no produto. o valor a pagar eh de %.2f:\n", prc_pro = prc_vend - (prc_vend * 30 / 100));

    return 0;
}