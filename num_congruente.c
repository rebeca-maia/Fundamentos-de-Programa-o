#include <stdio.h>
#include <stdlib.h>
//padrão de sequencia numerica selecionada
int main(){
    int i=0,n,mod,numero;

    printf("Digite quantos numeros congruentes você vai querer. o numero e o modulo:\n");
    scanf("%d %d %d",&n,&numero,&mod);
    system("cls");
    printf("Os numeros congruentes sao:\n");
    while(n>1){
        i++;
        if(i%mod==numero%mod){
            printf("%d ",i);
            n--;
        }
    }
    return 0;
}
