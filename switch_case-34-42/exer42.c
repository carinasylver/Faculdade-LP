#include <stdio.h>

int main(void) {
  float qm, qmc, vm, vmc, d, vt, vfr, qfr;
  
  printf("\n==================================================\n"); 
  printf("informe a quantidade(kg) de morangos desejada: " ); 
  scanf("%f",&qm);
  printf("--------------------------------------------------\n");
  printf("informe a quantidade(kg) de macas desejada: " ); 
  scanf("%f",&qmc);
   printf("--------------------------------------------------\n");

if(qm <= 5){
    vm= qm * 5;
    } else {
        vm= qm * 4;        
    }         
if (qmc <= 5){
        vmc = qmc * 3;         
    } else {        
        vmc = qmc * 2;         
    }  
    qfr = qm + qmc; /*qfr = quantidade frutas, qm = quantid. morangos, qmc=quantid. maças*/
    vfr = vm + vmc; /*vf = valor frutas, vm= valor morango, vmc= valor maças*/
    
if ((qfr > 8) || ( vfr > 50)){
        d = vfr * 20/100; /*d= desconto*/
    } else {
        d = 0;
    }

vt = vfr - d;   
printf("\t\tvalor a pagar: %.2f", vt); 
 printf("\n==================================================\n"); 
   
  return 0;
}