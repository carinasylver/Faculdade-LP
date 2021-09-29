#include<stdio.h>


int main(void){

    int v[9],i, aux;

    v[1]=5;
    v[2]=1;
    v[3]=4;
    v[4]=2;
    v[5]=7;
    v[6]=8;
    v[7]=3;
    v[8]=6;

    for(i=8; i>=5; i--){  
        aux =v[i];
        v[i] = v[8-i+1];
        v[8-i+1]=aux;  
    }
    v[3] =v[1];
    v[v[3]]=v[v[2]];

    for(i=1; i<=8; i++){
        printf("v[%d]=%d\n",i, v[i]);
    }
    return 0;
}