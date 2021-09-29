
int main(void){
    int  i, cont, sexo;   
    float altura, altura_hom, altura_mulh, media_altura_hom, media_altura_mulh;

    cont=0;
    altura_hom = 0;
    altura_mulh = 0;    
  
    for(i=1; i<20; i++){

        printf("\nInforme sua altura: ");
        scanf("%f", &altura);
        printf("\nInforme seu sexo (1 para Homem - 2 para mulher): ");
        scanf("%d", &sexo);

        
        if (sexo == 1){           
            altura_hom = altura_hom + altura;
            cont++;             
        } else {
            altura_mulh = altura_mulh + altura;
            cont++;
        }       
    } 
    media_altura_hom = altura_hom / cont;
    media_altura_mulh = altura_mulh /cont;

    printf("\naltura media dos homens %.2fcm", media_altura_hom); 
    printf("\naltura media das mulheres %.2fcm", media_altura_mulh);
   
   return 0; 
}