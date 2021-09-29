/*50) Escreva um algoritmo que tenha como entrada o número da
chapa para a escolha do Grêmio Estudantil de uma Escola com 100 alunos. Deverá ser informado ao aluno as seguintes opções:
1 – Chapa Situação
2 – Chapa Modificação
3 – Voto em Branco
Obs: (Só poderá ser aceitos os valores 1,2 e 3)
Ao final dos 100 alunos deverá ser informado o nome e o total de votos da Chapa vencedora. 
*/
#include <stdio.h>

#include <stdio.h>

int main(void){
    int voto, chapa_situacao, chapa_modif, votos_branco, num_votos;
    chapa_situacao = 0;
    chapa_modif = 0;
    votos_branco = 0;
    num_votos = 0;

    do {
        printf("\neleicoes gremio estudantil 2020");
        printf("\nopcao 1- chapa situacao");
        printf("\nopcao 2 - chapa modificacao");
        printf("\nopcao 3 - voto em branco\n");

        scanf("%i", &voto);
        
        switch(voto){
            case 1: {
                printf("\nvoce votou na na chapa situacao\n");
                chapa_situacao++;
                break;
            } 
            case 2:{
                printf("\nvoce votou na na chapa modificacao\n");
                chapa_modif++;
                break;
            }
            case 3:{
                printf("\nvoce votou em branco\n");
                votos_branco++;
                break;
            }
            default: 
            printf("\nopcao invalida. vote novamente\n");
            break;          
        }   
        num_votos++;    

    } while (num_votos<100);
    
    printf("\n===============votacao encerrada===============\n");    
   
    if ((chapa_situacao > chapa_modif) && (chapa_situacao > votos_branco)){
        printf("\nchapa vencedora foi SITUACAO com %d votos\n", chapa_situacao);
    } else {
        if ((chapa_modif>chapa_situacao) && (chapa_modif>votos_branco)){
            printf("\nchapa vencedora foi MODIFICACAO com %d votos\n", chapa_modif);
        } else {
            printf("\nnao houve chapa vencedora\n");
        }
    }
    return 0;
}