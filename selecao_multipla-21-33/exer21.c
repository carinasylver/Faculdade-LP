#include <stdio.h>

int main(void){
    int num;
    
    printf("\nDigite um numero: ");
    scanf("%i",&num);

    if (num == 0){
        printf("O numero eh zero",num);
    }else{
        if(num > 0){
        printf("O numero %i eh positivo\n",num);
        }else{
            printf("O numero %i eh negativo\n",num);           
        } 
    } 
    return 0;
}