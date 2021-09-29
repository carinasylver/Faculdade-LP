#include <stdio.h>

int main(void){
  int nl,m,p,a;

  printf("informe o numero de lados:");
  scanf("%i",&nl);
  printf("informe a medida dos lados:");// perímetro é a soma da medida de todos os lados de uma região, ou seja, é a medida do contorno desta região  
  scanf("%i",&m);

    if(nl == 3){
      p = nl * m;
      printf("\neh um triangulo");
      printf("\nperimetro: %i\n",p);
    }else{
      if (nl == 4){
        a = m * m;
        printf("\neh um quadrado");
        printf("\narea:%i\n",a);
      }else{
        if(nl == 5){
          printf("\neh um pentagono\n");
        }
      }       
    }
    return 0;
}




