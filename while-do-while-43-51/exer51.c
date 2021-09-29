/*51) Elabore um algoritmo ou programa em C para ler 2 valores (só poderá ser aceito valores positivos) e uma opção (só poderá ser aceito valores do 1 ao 4). Conforme a opção desejada deverá ser informado o resultado da operação aritmética com os 2 valores lidos.
Opção         Operação matemática
1               Adição
2               Subtração
3               Multiplicação
4               Divisão
Acrescente uma mensagem de “Novo Cálculo (1-Sim/2-Não) ?” ao
final do algoritmo, se for respondido “1” deverá retornar e ler novos valores, caso contrário deverá encerrar o algoritmo.
Caso o usuário não queira novo cálculo deverá ser informado
quantas vezes o algoritmo foi utilizado.
*/
#include <stdio.h>

int main(void) {
  int A,B, opcao, num_operac, resp;


    do {
        printf("\nINFORME A OPERACAO ARITMETICA DESEJADA");
        printf("\nopcao 1- adicao");
        printf("\nopcao 2 - subtracao");
        printf("\nopcao 3 - multiplicacao");
        printf("\nopcao 4 - divisao\n");      
        scanf("%i", &opcao);

        while(opcao != 1 && opcao!= 2 && opcao!= 3 && opcao !=4){
            printf("\nopcao invalida. tente novamente\n");
            return 0;
        }
        printf("\ninforme o valor de A: ");
        scanf("%i",&A);
        printf("\ninforme o valor de B: ");
        scanf("%i",&B);

        while((A < 0) || (B < 0)){
            printf("\nopcao invalida. tente novamente\n");
            return 0;
        }
                                
        switch(opcao){
            case 1: {
                printf("\na soma de %i + %i = %i\n", A,B, A+B);          
                break;          
            }
            case 2: {
                printf("\na subtracao de %i - %i = %i\n", A,B, A-B);      
                break;          
            }
            case 3: {
                printf("\na multiplicacao de %i * %i = %i\n", A,B, A*B);      
                break; 
            }  
            case 4: {
                printf("\na divisao de %i / %i = %i\n", A,B, A/B);      
                break; 
            }           
        }   
        num_operac++;  

        printf("\nDeseja um novo calculo (1-Sim 2-Não)?");
        scanf("%i", &resp);

    } while (resp==1);

    printf("\no numero de vezes que o algoritmo foi utilizado= %d\n", num_operac);
    return 0;
}