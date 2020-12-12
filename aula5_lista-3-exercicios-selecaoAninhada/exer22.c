#include <stdio.h>

int main(void){
    float n1, n2, m;

    printf("\ninforme sua 1a nota: ");
    scanf("%f", &n1);
    printf("informe sua 2a nota: ");
    scanf("%f", &n2);

    m = (n1 + n2)/2;

    if (m >= 6.0){
        printf("\nSua media eh %.1f. Voce esta APROVADO!\n", m);

    }else{ 
        if(m >= 3 && m < 6){
            printf("\nSua media eh %.1f. Voce esta em EXAME!\n", m);   
        }else{
            printf("\nSua media eh %.1f. Voce esta REPROVADO!\n", m);
        }
    }
    return 0;    
}