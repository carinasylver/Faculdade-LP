#include <stdio.h>

int main(void){
  int nl,m,p,a;

  printf("informe o numero de lados: ");
  scanf("%i",&nl);
  printf("informe a medida dos lados: ");
  scanf("%i",&m);

  if (nl < 3){
    printf("\nnao eh um poligono:\n");
    }else{
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
        }else{
          printf("\npoligono nao identificado\n");
        }
      }
    }
  }
  return 0;
}
