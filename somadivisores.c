#include <stdio.h>
#include <stdlib.h>
//Padrão de programação selecionada
int main(){
    int n=0; int i=0; int soma=0;
    printf("digite o valor a ser dividido \n");
    scanf("%d",&n);
    while(i<=n){
        i++;
        if(n%i==0){
            soma=soma+i;
        }
    }
    printf("a soma dos divisores de %d eh %d",n , soma);
    return 0;
}
