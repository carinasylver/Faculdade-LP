#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Escreva uma função que receba 3 notas de um aluno (deverá aceitar somente valores de zero a dez) e uma letra. Se a letra for A a função retorna a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2), se for M retorna a maior nota do aluno das três notas enviadas a função.

float calculaMedia(float n1, float n2, float n3, char opcao);
float notaMaisAlta(float n1, float n2, float n3);

int main(void){

    float n1=0, n2=0, n3=0, resultado=0;
    char opcao;

    do{
        printf("informe a 1a nota: ");
		scanf("%f", &n1);
    }while(n1 < 0 || n1 > 10); 
    do{
        printf("informe a 2a nota: ");
		scanf("%f", &n2);
    }while(n2 < 0 || n2 > 10); 
    do{
        printf("informe a 3a nota: ");
		scanf("%f", &n3);
    }while(n3 < 0 || n3 > 10); 


    printf("------------------------------------------------------------\n");
	printf("|A - media aritmetica | P - media ponderada |M - maior nota|\n");
    printf("------------------------------------------------------------\n");
    printf("informe a opcao: ");
	setbuf(stdin, NULL);
	scanf("%c", &opcao); 

    resultado = calculaMedia(n1, n2, n3, opcao);
	printf("resultado: %.2f\n", resultado);    

    return 0;
}
float calculaMedia(float n1, float n2, float n3, char opcao){
	if(opcao == 'a'){
		return (n1+n2+n3) / 3;
	} 
	else if (opcao == 'p') {
		return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10;
	}
	else if (opcao == 'm') {
		return notaMaisAlta(n1, n2, n3);
	}
}
float notaMaisAlta(float n1, float n2, float n3){
	float n=0;

	if(n1 > n2){
		if(n1 > n3){
		   return n1;
		} 
		else{
		   return n2;
		} 
	} else {
		if (n2>n3){
			return n2;
		} 
		else{
			return n3;
		} 
	}
}


