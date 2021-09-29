/*47.Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações
de um aluno, calcule e imprima a média semestral. Só deve aceitar
valores válidos (0 a 10) para cada nota.
Acrescente uma mensagem de NOVO CÁLCULO (1-Sim 2-Não)?
após informar a média. Se for respondido ‘1’ deve retornar e
executar um novo cálculo caso contrário deverá encerrar o
algoritmo.
*/
#include <stdio.h>

int main(void) {
  int n1, n2, resp;
  float m;

    do{
        printf("\ninforme sua 1a nota: ");
        scanf("%i", &n1);
        printf("informe sua 2a nota: ");
        scanf("%i", &n2); 

        if((n1 && n2 <0)||(n1 && n2 > 10)){
        printf("\nvalor INVALIDO. tente novamente! valores validos (0 a 10) para cada nota.\n");
        return 0;        
        }  
            
        printf("\nNovo calculo (1-Sim 2-Nao)?");
        scanf("%i", &resp); 

        m = n1 + n2 / 2;
        printf("\nsua media eh %.1f\n", m);       
           

    }while(resp == 1);
