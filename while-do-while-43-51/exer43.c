/*43. Escreva um algoritmo para ler 2 valores (se o segundo valor informado for ZERO deve ser lido um novo valor) e imprimir o resultado da divisão do primeiro pelo segundo. (Utilizar a estrutura de repetição com teste no final(do-while))
*/
#include <stdio.h>

int main(void){

   float A, B, res;

   printf("informe o valor de A: ");
   scanf("%f",&A);

   do {
        printf("informe o valor de B: ");
        scanf("%f",&B);
   }
   while(B == 0);
   
   res=A/B;

   printf("\n a divisao de %.1f / %.1f = %.1f\n", A, B, res);
   
   return 0;
}