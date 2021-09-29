/*) Ler o número de alunos existentes em uma turma, ler as notas destes alunos (aceitar
somente valores de zero a dez), e calcular a média aritmética destas notas.
*/
#include <stdio.h>

  int main(void) {
  int i, num_alunos;
  float soma, media, soma_notas , nota;

    
    printf("informe o numero de alunos: ");
    scanf("%d", &num_alunos);

   soma = 0;
   for( i=1; i<=num_alunos; i++){
        printf("\ninforme nota do %d aluno: ", i);
        scanf("%f", &nota);

        if((nota < 0)||(nota > 10)){
        printf("\nvalor INVALIDO. tente novamente! valores validos (0 a 10) para cada nota.\n");
        }          

   } soma_notas = soma + nota;

   media = soma_notas/ num_alunos;
   printf("\na media aritmetica da turma eh %.1f", media);


  return 0;
}