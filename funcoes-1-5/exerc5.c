#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//a) Escreva um subalgoritmo chamado maiorNumero que receba como entrada dois inteiros positivos e retorne o maior deles ou o valor -1 se eles forem iguais. Considere que os valores de entrada são sempre positivos (Não é necessário validar).
// Entrada: Dois inteiros positivos. Retorno: O maior deles ou -1 se eles forem iguais. 
//b) Escreva um algoritmo para ler um valor N (considere que o valor informado será sempre positivo). A seguir ler N duplas de inteiros. Para cada dupla informada exibir o maior elemento ou a frase “Eles são iguais”. Para obter o maior elemento deve ser utilizado o subalgoritmo maiorNumero.

int maiorNumero(a, b);
int valorN(num);

int main(void){
 int resultado, i;
 int n=0, n1=0, n2=0;

printf("Digite o numeros de x que ira repetir:\n");
scanf("%d", &n);
 
 for(i=0; i<n; i++){
    printf("Digite os numeros\n");
    scanf("%d %d", &n1, &n2);

    resultado = maiorNumero(n1, n2);
    if (resultado == -1){
        printf("Eles sao iguais\n");
    }
    else{
        printf("%d\n", resultado);
    }    
 }
 return 0;
}
int maiorNumero(int a, int b){
    if(a == b){
        return -1;
    } else {
        if(a > b){
          return a;
        }
        else {
          return b;
        }
    }
}

