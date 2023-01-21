#include <stdio.h>
int main(){
    int numero;
    
    printf("Digite um numero:\n ");
    scanf("%d",&numero);
    if(numero>0){
        printf("O numero e positivo\n");
    }
    if(numero<0){
        printf("O numero e negativo\n");
    }
    if(numero==0){
        printf("O numero e neutro");
    }
    return 0;