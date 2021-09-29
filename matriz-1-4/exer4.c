#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
      int i, tam, opcao, idade;
      int ca,ce,ci,co,cu;
      char nome[20], sexo;
      ca=ce=ci=co=cu =0;
    
    do{    
        printf("\n---Menu de Opcoes---\n");        
        printf("|\t 1- vogais\t|\n");
        printf("|\t 2- inverso\t|\n");
        printf("|\t 3- idade \t|\n");
        printf("|\t 4- sair  \t|\n");
        printf("-----------------------\n");
        

        printf("Digite uma opcao: ");
        scanf("%d",&opcao);
        setbuf(stdin, NULL);

        switch(opcao){
            //Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem. Considerar minúscula e maiúscula.

            case 1: {
                printf("\ndigite uma frase: ");
                fflush(stdin);
                scanf("%s",nome);
                //gets(nome);
                tam= strlen(nome);
                for(i=1; i<=tam-1; i++){
                    if(nome[i] == 'a' || nome[i] == 'A'){
                        ca++;
                    } else if(nome[i] == 'e' || nome[i] == 'E'){
                        ce++;
                    } else if(nome[i] == 'i' || nome[i] == 'I'){
                        ci++;
                    } else if(nome[i] == 'o' || nome[i] == 'O'){
                        co++;
                    } else if(nome[i] == 'u' || nome[i] == 'U')
                    cu++;
                }
                printf("\na frase tem:\n");
                printf("\n%d letra a", ca);
                printf("\n%d letra e", ce);
                printf("\n%d letra i", ci);
                printf("\n%d letra o", co);
                printf("\n%d letra u", cu);

                printf("\n");
                break;
            }
            //Receber um nome do teclado e imprimí-lo de trás pra frente.
            case 2: {
                printf("\ndigite um nome: ");
                fflush(stdin);
                scanf("%s",nome);
                tam= strlen(nome);

                printf("o nome de tras pra frente eh: ");
                for(i=tam-1; i>=0; i--){
                    printf("%c",nome[i]);
                }
                printf("\n");
                break;
                
            }
            //Ler nome, sexo (1-M 2-F) e idade (aceitar somente números positivos. Se sexo for masculino e idade maior que 18 deverá imprimir o nome da pessoa
            case 3: {
                setbuf(stdin, NULL);

                printf("\ndigite seu nome: ");
                fgets(nome, sizeof(nome), stdin);

                printf("\ndigite seu sexo(M- masculino; F - feminino):");
                fflush(stdin);
                scanf("%c",&sexo);

                setbuf(stdin, NULL);          
                printf("\ndigite sua idade: ");
                fflush(stdin);
                scanf("%d",&idade);

                while(idade<0){
                    printf("\ndigite sua idade: ");
                    scanf("%d",&idade);
                }
                
                if(((sexo == 'm') || (sexo == 'M')) && idade > 18) {                       
                  printf("\n%s", nome);
                }
                printf("\n");
                break;
            }
            //Se for digitado 4 deverá finalizar o programa.
            case 4: {
                printf("\nObrigada!!\n");
                printf("\n");              
                break;
            }
            default:
            printf("ERRO.. a opcao digitada NAO EH VALIDA! digite novamente\n");
            printf("\nDigite uma opcao: ");
            scanf("%i",&opcao);
            break;

        }
    } while(opcao!=4);

}

