#include <stdio.h>
#include <stdlib.h>

int main(){
    int num=0;

    printf("Digite um numero para saber se eh par ou nao");
    scanf("%d",& num);

    if(num%2==0){
        printf("O %d eh par", num);
    }else
    printf ("O %d eh nao par", num);

return 0;
}
