#include <stdio.h>
#include <stdlib.h>
//Padrão de programação selecionada
int main(){
    int n; int i=0;
    printf("digite o numero de inteiros positivos\n");
    scanf("%d",&n);
    while(n>=1){
        i++;
        if(i%2==1){
            printf("%d\n",i);
            n--;
        }
    }
    return 0;
}
