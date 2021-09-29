/*41- Escreva um algoritmo que leia o valor de 3 ângulos de um triângulo e escreva se o triângulo é acutângulo, retângulo ou obtusângulo.
OBS: triângulo retângulo: possui um ângulo reto.
 triângulo obtusângulo: possui um ângulo obtuso.
 triângulo acutângulo: possui 3 ângulos agudos.*/
#include <stdio.h>

int main(void) {
    int a1,a2,a3;

    printf("informe o angulo1 do triangulo: ");
    scanf("%i", &a1);
    printf("informe o angulo2 do triangulo: ");
    scanf("%i", &a2);
    printf("informe o angulo3 do triangulo: ");
    scanf("%i", &a3);

    if ((a1 + a2 + a3) != 180) {
        printf("\ntriangulo invalido. tente novamente\n");
    } else {
        if ((a1 == 90) || (a2 == 90) || (a3 == 90)){
            printf("\no triangulo eh retangulo. possui um angulo reto.\n");     
        }

        if((a1 > 90) || (a2 > 90) || (a3 > 90)){
            printf("\no triangulo obtusangulo. possui um angulo obtuso.\n");
        }

        if((a1 < 90) && (a2 < 90) && (a3 < 90)){
            printf("\no triangulo acutangulo. possui 3 angulos agudo.\n");
        }
    } 
    return 0;
}
