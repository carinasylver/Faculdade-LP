#include <stdio.h>
/*
19.Escreva um algoritmo para ler um número inteiro (considere que
serão lidos apenas valores positivos e inteiros) e escrever se é par
ou ímpar.

### DIAGRAMA CHAPIN ###
    escreva num
    leia num
    escreva par <-- par == 0 <-- num % 2 --> impar == 1 --> escreva impar
    

### PORTUGUES ESTRUTURADO ###
algoritmo
    escreva num
    leia num
    parImpar = num % 2
    escreva numar (par ou impar)
fim_algoritmo
*/
int main(void){
    int num, parImpar;

    printf("\ndigite um numero: ");
    scanf("%i", &num);    

    parImpar = num % 2; 
    
    if (parImpar == 0){ /*resto da divisao por 2 é 0*/
        printf("%i eh um numero\"PAR\"\n", num);
    }
    else /*resto da divisao por 2 é 1 */
       printf("%i eh um numero\"IMPAR\"\n", num);
           
    return 0;
}